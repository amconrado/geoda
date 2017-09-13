/*
 * This file is part of GeoDa.
 *
 * GeoDa is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * GeoDa is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Created: 9/13/17 amaiaconrado@gmail.com
 */

#ifndef __GEODA_CENTER_SKATER_H__
#define __GEODA_CENTER_SKATER_H__

#include <vector>
#include <map>

#include "../ShapeOperations/GalWeight.h"

using namespace std;


/*! A Skater class */

class Skater
{
public:
    //! A Constructor
    /*!
     \param w spatial weights object
     \param z array n*m array of observations on m attributes across n areas
     \param floor int a minimum bound for a variable that has to be obtained in each region homogeneity
     \param floor_variable array n*1 vector of observations on variable for the floor
     \param regions int the number of regions that should be outputted
     */
    Skater(const GalElement* w, const vector<vector<double> >& z, int floor,
           vector<vector<int> > floor_variable, int regions);

    //! A Deconstructor
    /*!
     Deconstructs the class
     */
    Skater()

protected:
    //! A const spatial weights reference.
    /*!
     Details.
     */
    const GalElement* w;

    //! A n*1 vector of observations on variable for the floor
    /*!
     Details.
     */
    vector<vector<int> > floor_variable;

    //! A n*m array of observations on m attributes across n areas.
    /*!
     Details. This is used to calculate intra-regional
     */
    const vector<vector<double> > z;
}