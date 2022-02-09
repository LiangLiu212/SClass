/*
 * =====================================================================================
 *
 *       Filename:  SClass.h
 *
 *    Description:  a
 *
 *        Version:  1.0
 *        Created:  02/09/2022 03:28:59 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Liang Liu (), liangzy@mail.ustc.edu.cn
 *   Organization:  BESIII
 *
 * =====================================================================================
 */
#include <iostream>
#include "TObject.h"
class SClass : public TObject {
	private:
		Float_t   fX;         //x position in centimeters
		Float_t   fY;         //y position in centimeters
		Int_t     fTempValue; //! temporary state value
	public:
		SClass()             { fX = fY = -1; }
		void Print() const;
		void SetX(float x) { fX = x; }
		void SetY(float y) { fY = y; }

		ClassDef(SClass, 1)
};
