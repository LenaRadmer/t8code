/*
This file is part of t8code.
t8code is a C library to manage a collection (a forest) of multiple
connected adaptive space-trees of general element classes in parallel.

Copyright (C) 2023 the developers

t8code is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

t8code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with t8code; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*/

/** \file t8_gtest_macros.hxx
* Provide macros for instantiating parameterized tests
*/

#include <gtest/gtest.h>
#include <t8_eclass.h>

#ifndef T8_GTEST_MACROS_HXX
#define T8_GTEST_MACROS_HXX

#define AllEclasses testing::Range (T8_ECLASS_ZERO, T8_ECLASS_COUNT)
#define AllCmeshs testing::Range (0, t8_get_number_of_all_testcases ())

#endif /* T8_GTEST_MACROS_HXX */
