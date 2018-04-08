GsTL is a c++ template library of geostatistical tools.  It was created in conjunction with, and is used in [SGeMS](http://sgems.sourceforge.net/) , the Stanford Geostatistical Modeling Software.

This git repository is a copy of the cvs repository obtained from [SourceForge](https://sourceforge.net/projects/gstl/?source=directory), with the addition of a Makefile to store it in a consistent location.  As the software is a template library, it doesn't require compilation.  The point of this copy is to try to make it a little easier to install SGeMS.

To install:
```bash
cd <desired repository base directory>
git clone https://github.com/gerwathome/GsTL
cd GsTL
sudo make install
```