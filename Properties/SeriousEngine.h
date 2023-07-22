/* Copyright (c) 2022 Dreamy Cecil
This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License as published by
the Free Software Foundation


This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. */

/* This file's purpose is to be an alternative to property sheets files used by Visual Studio */
/* that defines all existing games on Serious Engine 1 and specific versions of the engine.   */
#ifndef CECIL_INCL_SERIOUSENGINE_VERSIONS_AND_GAMES_H
#define CECIL_INCL_SERIOUSENGINE_VERSIONS_AND_GAMES_H

#ifdef PRAGMA_ONCE
  #pragma once
#endif

/* Games for SE1_GAME macro */

  /* Croteam */
  #define SS_TFE 'F' /* Serious Sam: The First Encounter     */
  #define SS_TSE 'S' /* Serious Sam: The Second Encounter    */
  #define SS_XBX 'X' /* Serious Sam Xbox                     */
  #define SS_150 'B' /* b1.50 patch for The Second Encounter */
  #define SS_REV 'R' /* Serious Sam Classics: Revolution     */
  #define SS_EVA 'A' /* Serious Sam Alpha (Evaluation Build) */

  /* Third party */
  #define SE_ABZ 'a' /* Alpha Black Zero      */
  #define SE_BH3 'b' /* Bird Hunter 2003      */
  #define SE_CCS 'c' /* Carnivores: Cityscape */
  #define SE_DH3 'd' /* Deer Hunter 2003      */
  #define SE_EC  'e' /* EuroCops              */
  #define SE_LC  'l' /* Last Chaos            */
  #define SE_NF  'n' /* Nitro Family          */
  #define SE_RK  'r' /* Rakion                */

/* Serious Engine versions for SE1_VER macro */

  /* Development versions */
  #define SE1_EVA  1   /* Serious Sam Alpha (Evaluation Build) */
  #define SE1_PB1  10  /* Serious Sam - Public Test 1 */
  #define SE1_PB2  20  /* Serious Sam - Public Test 2 */
  #define SE1_PB21 21  /* Serious Sam - Public Test 2.1 */
  #define SE1_100  100 /* 1.00 / 1.00a / 1.00b / 1.00c */
  #define SE1_102  102 /* 1.02 */
  #define SE1_104  104 /* 1.04 */

  /* Retail versions */
  #define SE1_105 105 /* 1.05 */
  #define SE1_107 107 /* 1.07 */
  #define SE1_110 110 /* 1.10 */
  #define SE1_150 150 /* 1.50 */

#endif
