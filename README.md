Xion Xfconf
===========

This fork of Xfconf is used by Xion. It patches a few things in xfconf-query to
make its output more machine-readable. The actual Xfconf readme is after the
horizontal separator below.

Xion is available on Github here: https://github.com/Dece/Xion



Install
-------

Binaries for supported versions of Xfconf are availables in the release section
of this repository. The rest of this readme contains instructions on how to
build it if needed.



Build
-----

### Version

Find the version of Xfce you want to use. This can be done with:

```bash
apt info xfconf 2> /dev/null | grep -E "^Version"
```

Versions of Xfce/Xfconf supported:

- 4.12.1
- 4.16.0

If your version is not supported, feel free to open an issue and I'll try to
support it quickly.

Ensure you are using the tag corresponding to your Xfce version, e.g. for Xfce
4.12.1, the tag is `xion-4.12.1` and it is based on tag `xfconf-4.12.1`.

You can build Xfconf directly on your host, or using the Docker image.

### Manual build

```
cd xfconf
./autogen.sh  # Autogen will complain for any missing dependencies.
make
```

### Docker build

A Dockerfile is available to take of the whole dependency / build process.

```
docker build -t xion-builder .
docker run --rm  -ti -v "$(pwd)":/xfconf xion-builder
```

### Install xion-query

The actual xfconf-query build is in the "xfconf-query/.libs" directory; DO NOT
use the wrapper located in "xfconf-query". For usage with Xion without further
configuration, move it somewhere in your path with the name `xion-query`.



- - -



[![License](https://img.shields.io/badge/License-GPL%20v2-blue.svg)](https://gitlab.xfce.org/xfce/xfconf/-/blob/master/COPYING)

# xfconf


Xfconf is a hierarchical (tree-like) configuration system where the immediate 
child nodes of the root are called “channels”. All settings beneath the 
channel nodes are called “properties.”
See the xfconf homepage for usage and examples.

----

### Homepage

[Xfconf documentation](https://docs.xfce.org/xfce/xfconf/start)

### Changelog

See [NEWS](https://gitlab.xfce.org/xfce/xfconf/-/blob/master/NEWS) for details on changes and fixes made in the current release.

### Source Code Repository

[Xfconf source code](https://gitlab.xfce.org/xfce/xfconf)

### Download a Release Tarball

[Xfconf archive](https://archive.xfce.org/src/xfce/xfconf)
    or
[Xfconf tags](https://gitlab.xfce.org/xfce/xfconf/-/tags)

### Installation

From source: 

    % cd xfconf
    % ./autogen.sh
    % make
    % make install

From release tarball:

    % tar xf xfconf-<version>.tar.bz2
    % cd xfconf-<version>
    % ./configure
    % make
    % make install

### Reporting Bugs

Visit the [reporting bugs](https://docs.xfce.org/xfce/xfconf/bugs) page to view currently open bug reports and instructions on reporting new bugs or submitting bugfixes.

