/*
  fstlib - A C++ library for ultra fast storage and retrieval of datasets

  Copyright (C) 2017-present, Mark AJ Klik

  This file is part of fstlib.

  fstlib is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Foobar is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with fstlib.  If not, see <http://www.gnu.org/licenses/>.

  You can contact the author at :
  - fstlib source repository : https://github.com/fstPackage/fstlib
*/

#ifndef FACTOR_v7_H
#define FACTOR_v7_H


#include <iostream>
#include <fstream>

#include <interface/istringwriter.h>
#include <interface/ifstcolumn.h>


void fdsWriteFactorVec_v7(std::ofstream &myfile, int* intP, IStringWriter* blockRunner, unsigned long long size, unsigned int compression,
	StringEncoding stringEncoding, std::string annotation, bool hasAnnotation);


// Parameter 'startRow' is zero based.
void fdsReadFactorVec_v7(std::istream &myfile, IStringColumn* blockReader, int* intP, unsigned long long blockPos, unsigned long long startRow,
  unsigned long long length, unsigned long long size);


#endif  // FACTOR_v7_H
