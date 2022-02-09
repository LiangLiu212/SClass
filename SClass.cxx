/*
 * =====================================================================================
 *
 *       Filename:  SClass.cxx
 *
 *    Description:  G
 *
 *        Version:  1.0
 *        Created:  02/09/2022 03:29:19 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Liang Liu (), liangzy@mail.ustc.edu.cn
 *   Organization:  BESIII
 *
 * =====================================================================================
 */

#include "SClass.h"
using namespace std;
ClassImp(SClass);
void SClass::Print() const {
	   cout << "fX = " << fX << ", fY = " << fY << endl;
}

