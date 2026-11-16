// Build a one-box TGeo world and walk it with the Gen 3 TGeo backend
#include "Acts/Utilities/Logger.hpp"
#include "ActsPlugins/Root/BlueprintBuilder.hpp"

#include <iostream>

#include "TGeoManager.h"
#include "TGeoMaterial.h"
#include "TGeoMedium.h"
#include "TGeoVolume.h"

int main() {
  auto* geo = new TGeoManager("world", "test");
  auto* vacuum = new TGeoMedium("vacuum", 1, new TGeoMaterial("vacuum"));
  auto* top = geo->MakeBox("top", vacuum, 100., 100., 100.);
  geo->SetTopVolume(top);
  top->AddNode(geo->MakeBox("sensor", vacuum, 10., 10., 0.1), 1);
  geo->CloseGeometry();

  ActsPlugins::TGeoBlueprintBuilderBackend::Config cfg;
  cfg.root = geo->GetTopNode();
  auto logger = Acts::getDefaultLogger("test", Acts::Logging::INFO);
  ActsPlugins::TGeoBlueprintBuilderBackend backend{cfg, *logger};

  auto children = backend.children(backend.world());
  if (children.size() != 1) {
    std::cerr << "unexpected TGeo tree" << std::endl;
    return 1;
  }
  std::cout << "found " << backend.pathOf(children.front()) << std::endl;
  return 0;
}
