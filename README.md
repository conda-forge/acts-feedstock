About acts-feedstock
====================

Feedstock license: [BSD-3-Clause](https://github.com/conda-forge/acts-feedstock/blob/main/LICENSE.txt)

Home: https://acts.readthedocs.io/

Package license: MPL-2.0

Summary: ACTS is an experiment-independent toolkit for (charged) particle track
reconstruction in (high energy) physics experiments implemented in modern
C++.

Development: https://github.com/acts-project/acts

Documentation: https://acts.readthedocs.io/

The ACTS project provides high-level track reconstruction modules that can
be used for any tracking detector.
The tracking detector geometry description is optimized for efficient
navigation and fast extrapolation of tracks.
Converters for several common geometry description packages are available.
In addition to the algorithmic code, this project also provides an event data
model for the description of track parameters and measurements.

Current build status
====================


<table>
    
  <tr>
    <td>Azure</td>
    <td>
      <details>
        <summary>
          <a href="https://dev.azure.com/conda-forge/feedstock-builds/_build/latest?definitionId=26725&branchName=main">
            <img src="https://dev.azure.com/conda-forge/feedstock-builds/_apis/build/status/acts-feedstock?branchName=main">
          </a>
        </summary>
        <table>
          <thead><tr><th>Variant</th><th>Status</th></tr></thead>
          <tbody><tr>
              <td>linux_64</td>
              <td>
                <a href="https://dev.azure.com/conda-forge/feedstock-builds/_build/latest?definitionId=26725&branchName=main">
                  <img src="https://dev.azure.com/conda-forge/feedstock-builds/_apis/build/status/acts-feedstock?branchName=main&jobName=linux&configuration=linux%20linux_64_" alt="variant">
                </a>
              </td>
            </tr><tr>
              <td>linux_aarch64</td>
              <td>
                <a href="https://dev.azure.com/conda-forge/feedstock-builds/_build/latest?definitionId=26725&branchName=main">
                  <img src="https://dev.azure.com/conda-forge/feedstock-builds/_apis/build/status/acts-feedstock?branchName=main&jobName=linux&configuration=linux%20linux_aarch64_" alt="variant">
                </a>
              </td>
            </tr><tr>
              <td>osx_64</td>
              <td>
                <a href="https://dev.azure.com/conda-forge/feedstock-builds/_build/latest?definitionId=26725&branchName=main">
                  <img src="https://dev.azure.com/conda-forge/feedstock-builds/_apis/build/status/acts-feedstock?branchName=main&jobName=osx&configuration=osx%20osx_64_" alt="variant">
                </a>
              </td>
            </tr><tr>
              <td>osx_arm64</td>
              <td>
                <a href="https://dev.azure.com/conda-forge/feedstock-builds/_build/latest?definitionId=26725&branchName=main">
                  <img src="https://dev.azure.com/conda-forge/feedstock-builds/_apis/build/status/acts-feedstock?branchName=main&jobName=osx&configuration=osx%20osx_arm64_" alt="variant">
                </a>
              </td>
            </tr>
          </tbody>
        </table>
      </details>
    </td>
  </tr>
</table>

Current release info
====================

| Name | Downloads | Version | Platforms |
| --- | --- | --- | --- |
| [![Conda Recipe](https://img.shields.io/badge/recipe-acts--core-green.svg)](https://anaconda.org/conda-forge/acts-core) | [![Conda Downloads](https://img.shields.io/conda/dn/conda-forge/acts-core.svg)](https://anaconda.org/conda-forge/acts-core) | [![Conda Version](https://img.shields.io/conda/vn/conda-forge/acts-core.svg)](https://anaconda.org/conda-forge/acts-core) | [![Conda Platforms](https://img.shields.io/conda/pn/conda-forge/acts-core.svg)](https://anaconda.org/conda-forge/acts-core) |
| [![Conda Recipe](https://img.shields.io/badge/recipe-acts--fatras-green.svg)](https://anaconda.org/conda-forge/acts-fatras) | [![Conda Downloads](https://img.shields.io/conda/dn/conda-forge/acts-fatras.svg)](https://anaconda.org/conda-forge/acts-fatras) | [![Conda Version](https://img.shields.io/conda/vn/conda-forge/acts-fatras.svg)](https://anaconda.org/conda-forge/acts-fatras) | [![Conda Platforms](https://img.shields.io/conda/pn/conda-forge/acts-fatras.svg)](https://anaconda.org/conda-forge/acts-fatras) |

Installing acts
===============

Installing `acts` from the `conda-forge` channel can be achieved by adding `conda-forge` to your channels with:

```
conda config --add channels conda-forge
conda config --set channel_priority strict
```

Once the `conda-forge` channel has been enabled, `acts-core, acts-fatras` can be installed with `conda`:

```
conda install acts-core acts-fatras
```

or with `mamba`:

```
mamba install acts-core acts-fatras
```

It is possible to list all of the versions of `acts-core` available on your platform with `conda`:

```
conda search acts-core --channel conda-forge
```

or with `mamba`:

```
mamba search acts-core --channel conda-forge
```

Alternatively, `mamba repoquery` may provide more information:

```
# Search all versions available on your platform:
mamba repoquery search acts-core --channel conda-forge

# List packages depending on `acts-core`:
mamba repoquery whoneeds acts-core --channel conda-forge

# List dependencies of `acts-core`:
mamba repoquery depends acts-core --channel conda-forge
```


About conda-forge
=================

[![Powered by
NumFOCUS](https://img.shields.io/badge/powered%20by-NumFOCUS-orange.svg?style=flat&colorA=E1523D&colorB=007D8A)](https://numfocus.org)

conda-forge is a community-led conda channel of installable packages.
In order to provide high-quality builds, the process has been automated into the
conda-forge GitHub organization. The conda-forge organization contains one repository
for each of the installable packages. Such a repository is known as a *feedstock*.

A feedstock is made up of a conda recipe (the instructions on what and how to build
the package) and the necessary configurations for automatic building using freely
available continuous integration services. Thanks to the awesome service provided by
[Azure](https://azure.microsoft.com/en-us/services/devops/), [GitHub](https://github.com/),
[CircleCI](https://circleci.com/), [AppVeyor](https://www.appveyor.com/),
[Drone](https://cloud.drone.io/welcome), and [TravisCI](https://travis-ci.com/)
it is possible to build and upload installable packages to the
[conda-forge](https://anaconda.org/conda-forge) [anaconda.org](https://anaconda.org/)
channel for Linux, Windows and OSX respectively.

To manage the continuous integration and simplify feedstock maintenance,
[conda-smithy](https://github.com/conda-forge/conda-smithy) has been developed.
Using the ``conda-forge.yml`` within this repository, it is possible to re-render all of
this feedstock's supporting files (e.g. the CI configuration files) with ``conda smithy rerender``.

For more information, please check the [conda-forge documentation](https://conda-forge.org/docs/).

Terminology
===========

**feedstock** - the conda recipe (raw material), supporting scripts and CI configuration.

**conda-smithy** - the tool which helps orchestrate the feedstock.
                   Its primary use is in the construction of the CI ``.yml`` files
                   and simplify the management of *many* feedstocks.

**conda-forge** - the place where the feedstock and smithy live and work to
                  produce the finished article (built conda distributions)


Updating acts-feedstock
=======================

If you would like to improve the acts recipe or build a new
package version, please fork this repository and submit a PR. Upon submission,
your changes will be run on the appropriate platforms to give the reviewer an
opportunity to confirm that the changes result in a successful build. Once
merged, the recipe will be re-built and uploaded automatically to the
`conda-forge` channel, whereupon the built conda packages will be available for
everybody to install and use from the `conda-forge` channel.
Note that all branches in the conda-forge/acts-feedstock are
immediately built and any created packages are uploaded, so PRs should be based
on branches in forks, and branches in the main repository should only be used to
build distinct package versions.

In order to produce a uniquely identifiable distribution:
 * If the version of a package **is not** being increased, please add or increase
   the [``build/number``](https://docs.conda.io/projects/conda-build/en/latest/resources/define-metadata.html#build-number-and-string).
 * If the version of a package **is** being increased, please remember to return
   the [``build/number``](https://docs.conda.io/projects/conda-build/en/latest/resources/define-metadata.html#build-number-and-string)
   back to 0.

Feedstock Maintainers
=====================

* [@matthewfeickert](https://github.com/matthewfeickert/)
* [@paulgessinger](https://github.com/paulgessinger/)

