 /* WARNING - DO NOT EDIT FILE - FILE IS AUTO GENERATED BY FUNCTIONS2CPP.PL*/
  /***************************************************************************
  *
  * Project:  OpenCPN
  * Purpose:  ROUTE Plugin
  * Author:   SaltyPaws
  *
  ***************************************************************************
  *   Copyright (C) 2012 by Brazil BrokeTail                                *
  *   $EMAIL$                                                               *
  *                                                                         *
  *   This program is free software; you can redistribute it and/or modify  *
  *   it under the terms of the GNU General Public License as published by  *
  *   the Free Software Foundation; either version 2 of the License, or     *
  *   (at your option) any later version.                                   *
  *                                                                         *
  *   This program is distributed in the hope that it will be useful,       *
  *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
  *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
  *   GNU General Public License for more details.                          *
  *                                                                         *
  *   You should have received a copy of the GNU General Public License     *
  *   along with this program; if not, write to the                         *
  *   Free Software Foundation, Inc.,                                       *
  *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
  ***************************************************************************
  */

#include "functions.h"
CFormula::CFormula(void)
{
 this->Selected_Formula = 1;

this->m_ShortDesc.Add(_("Hull Speed"));
this->m_LongDesc.Add(_("Hull speed, sometimes referred to as displacement speed, can be thought of the speed at which the wavelength of the boats bow wave (in displacement mode) is equal to the boat length. As boat speed increases, the size of the bow wave increases, and therefore so does its wavelength. When hull speed is reached, a boat in pure displacement mode will appear trapped in a trough behind its very large bow wave."));
this->m_Category.Add(_("Design"));
this->m_Source.Add(_("http://www.bootkeyharbor.com/Formulas.htm"));
this->m_Formula.Add(_("vhull=1.34*sqrt(LWL)"));
this->m_Result_Unit.Add(_("knots"));
this->m_Input_parameter.Add(_("LWL"));
this->m_Input_unit.Add(_("feet"));
this->m_Input_parameter1.Add(_(""));
this->m_Input_unit1.Add(_(""));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Draft of vessel when heeled"));
this->m_LongDesc.Add(_("Draft of vessel when heeled"));
this->m_Category.Add(_("Navigation"));
this->m_Source.Add(_("http://www.bootkeyharbor.com/Formulas.htm"));
this->m_Formula.Add(_("draft_heeled=draft*cos(dtr*angle)"));
this->m_Result_Unit.Add(_("meter"));
this->m_Input_parameter.Add(_("angle"));
this->m_Input_unit.Add(_("Degree (\u00b0)"));
this->m_Input_parameter1.Add(_("draft"));
this->m_Input_unit1.Add(_("meter"));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Speed of wind-driven current"));
this->m_LongDesc.Add(_("Speed of wind-driven current"));
this->m_Category.Add(_("Navigation"));
this->m_Source.Add(_("http://www.bootkeyharbor.com/Formulas.htm"));
this->m_Formula.Add(_("Speed_Current = 0.03 * (Speed_Wind)"));
this->m_Result_Unit.Add(_("knots"));
this->m_Input_parameter.Add(_("Speed_Wind"));
this->m_Input_unit.Add(_("knots"));
this->m_Input_parameter1.Add(_(""));
this->m_Input_unit1.Add(_(""));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Maximum Wavelength"));
this->m_LongDesc.Add(_("Maximum Wavelength = 1.5 x square root of fetch in nm"));
this->m_Category.Add(_("Navigation"));
this->m_Source.Add(_("http://www.bootkeyharbor.com/Formulas.htm"));
this->m_Formula.Add(_("Maximum_Wavelength = 1.5 * sqrt(fetch)"));
this->m_Result_Unit.Add(_("Unknown"));
this->m_Input_parameter.Add(_("fetch"));
this->m_Input_unit.Add(_("Nautical Miles"));
this->m_Input_parameter1.Add(_(""));
this->m_Input_unit1.Add(_(""));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Wave speed =f(period)"));
this->m_LongDesc.Add(_("Wave speed = 3.03 x (wave period in seconds) NB output units need to be confirmed"));
this->m_Category.Add(_("Navigation"));
this->m_Source.Add(_("http://www.bootkeyharbor.com/Formulas.htm"));
this->m_Formula.Add(_("Wave_speed = 3.03 * (wave_period)"));
this->m_Result_Unit.Add(_("knots"));
this->m_Input_parameter.Add(_("wave_period"));
this->m_Input_unit.Add(_("seconds"));
this->m_Input_parameter1.Add(_(""));
this->m_Input_unit1.Add(_(""));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Change in height of Tide"));
this->m_LongDesc.Add(_("Height is total change in tide heigt between high and low. The time ratio is time elapsed from the previous tide divided by the time difference between the two tides. (Similar to rule of 12)"));
this->m_Category.Add(_("Navigation"));
this->m_Source.Add(_("http://www.bootkeyharbor.com/Formulas.htm"));
this->m_Formula.Add(_("Change_in_height_of_Tide = height/2 * (1-cos(dtr(180) * time_ratio))"));
this->m_Result_Unit.Add(_("meter"));
this->m_Input_parameter.Add(_("height"));
this->m_Input_unit.Add(_("meter"));
this->m_Input_parameter1.Add(_("time_ratio"));
this->m_Input_unit1.Add(_("-"));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Flow rate of leak in boat"));
this->m_LongDesc.Add(_("Flow rate of leak in boat:\tQ = 3,600 (A) (H)\n\tQ = gallons per minute of water coming in\n\tA = area of hole in square feet\n\tH = height of water over hole in feet, to bottom of the opening"));
this->m_Category.Add(_("Safety"));
this->m_Source.Add(_("http://www.bootkeyharbor.com/Formulas.htm"));
this->m_Formula.Add(_("Q = 3600 *(A)* (H)"));
this->m_Result_Unit.Add(_("US gallons per minute"));
this->m_Input_parameter.Add(_("A"));
this->m_Input_unit.Add(_("square feet"));
this->m_Input_parameter1.Add(_("H"));
this->m_Input_unit1.Add(_("feet"));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Patch over hole"));
this->m_LongDesc.Add(_("Patch or cover thickness to withstand water pressure (patch over hole):\n\n\tT = square root of:\t(48x (H) (L2))/ 1000)\n\tT = thickness of wood or plywood patch in inches\n\tH = height of water above bottom of hole, in feet\n\tL = length of patch, longest distance between supports, in feet"));
this->m_Category.Add(_("Safety"));
this->m_Source.Add(_("http://www.bootkeyharbor.com/Formulas.htm"));
this->m_Formula.Add(_("T = sqrt( (48* H* (L^2))/1000)"));
this->m_Result_Unit.Add(_("inch"));
this->m_Input_parameter.Add(_("H"));
this->m_Input_unit.Add(_("feet"));
this->m_Input_parameter1.Add(_("L"));
this->m_Input_unit1.Add(_("feet"));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Line Break strength (circumference)"));
this->m_LongDesc.Add(_("Each type of line, natural fiber, synthetic and wire rope, have different breaking strengths and safe working loads. Natural breaking strength of manila line is the standard against which other lines are compared. Synthetic lines have been assigned comparison factors against which they are compared to manila line. The basic breaking strength factor for manila line is found by multiplying the square of the circumference of the line by 900 lbs. Knots and splices only have 50-60 of line strenght.\n\tLine Material\tComparison Factor \n\tNylon\t\t\t\t\t2.5\n\tDacron\t\t\t\t2.0\n\tPolypropylene\t\t1.4\n\tManilla \t\t\t\t1.0"));
this->m_Category.Add(_("Safety"));
this->m_Source.Add(_("http://www.boatsafe.com/marlinespike/breaking.htm"));
this->m_Formula.Add(_("breaking_strength= 900 * comparison_factor * circumference^2 "));
this->m_Result_Unit.Add(_("lbs"));
this->m_Input_parameter.Add(_("comparison_factor"));
this->m_Input_unit.Add(_("See table"));
this->m_Input_parameter1.Add(_("circumference"));
this->m_Input_unit1.Add(_("inch"));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Line Break strength (diameter)"));
this->m_LongDesc.Add(_("Each type of line, natural fiber, synthetic and wire rope, have different breaking strengths and safe working loads. Natural breaking strength of manila line is the standard against which other lines are compared. Synthetic lines have been assigned comparison factors against which they are compared to manila line. The basic breaking strength factor for manila line is found by multiplying the square of the circumference of the line by 900 lbs. Knots and splices only have 50-60 of line strenght.\n\tLine Material\tComparison Factor \n\tNylon\t\t\t\t\t2.5\n\tDacron\t\t\t\t2.0\n\tPolypropylene\t\t1.4\n\tManilla \t\t\t\t1.0"));
this->m_Category.Add(_("Safety"));
this->m_Source.Add(_("http://www.boatsafe.com/marlinespike/breaking.htm"));
this->m_Formula.Add(_("breaking_strength= 900 * comparison_factor * (pi*diameter)^2 "));
this->m_Result_Unit.Add(_("lbs"));
this->m_Input_parameter.Add(_("comparison_factor"));
this->m_Input_unit.Add(_("See table"));
this->m_Input_parameter1.Add(_("diameter"));
this->m_Input_unit1.Add(_("inch"));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Velocity Made Good (angle)"));
this->m_LongDesc.Add(_("Velocity made good, or vmg, is a term in sailing, and specifically yacht racing, that refers to the component of a sailboats velocity that is in the direction of the true wind. The concept is useful in sailing, because a sailboat often cannot, or should not, sail directly to a mark to reach the mark as quickly as possible. Sailboats cannot sail directly upwind, and it is usually less than optimal, and sometimes dangerous, to sail directly downwind. Instead of sailing toward the mark, the helmsman chooses a point of sail that optimizes velocity made good."));
this->m_Category.Add(_("Navigation"));
this->m_Source.Add(_("http://lagoon-inside.com/2012/01/faster-thanks-to-the-vmg-concept/"));
this->m_Formula.Add(_("VMG=V*cos(alpha*dtr)"));
this->m_Result_Unit.Add(_("Knots"));
this->m_Input_parameter.Add(_("V"));
this->m_Input_unit.Add(_("Knots"));
this->m_Input_parameter1.Add(_("alpha"));
this->m_Input_unit1.Add(_("Degree (\u00b0)"));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Velocity Made Good (delta)"));
this->m_LongDesc.Add(_("Velocity made good, or vmg, is a term in sailing, and specifically yacht racing, that refers to the component of a sailboats velocity that is in the direction of the true wind. The concept is useful in sailing, because a sailboat often cannot, or should not, sail directly to a mark to reach the mark as quickly as possible. Sailboats cannot sail directly upwind, and it is usually less than optimal, and sometimes dangerous, to sail directly downwind. Instead of sailing toward the mark, the helmsman chooses a point of sail that optimizes velocity made good."));
this->m_Category.Add(_("Navigation"));
this->m_Source.Add(_("http://lagoon-inside.com/2012/01/faster-thanks-to-the-vmg-concept/"));
this->m_Formula.Add(_("VMG=V*cos((alpha1-alpha2)*dtr)"));
this->m_Result_Unit.Add(_("Knots"));
this->m_Input_parameter.Add(_("V"));
this->m_Input_unit.Add(_("Knots"));
this->m_Input_parameter1.Add(_("alpha1"));
this->m_Input_unit1.Add(_("Degree (\u00b0)"));
this->m_Input_parameter2.Add(_("alpha2"));
this->m_Input_unit2.Add(_("Degree (\u00b0)"));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Wind Chill"));
this->m_LongDesc.Add(_("In November 2001 Canada, U.S. and U.K. implemented a new wind chill index developed by scientists and medical experts on the Joint Action Group for Temperature Indices (JAG/TI). It is determined by iterating a model of skin temperature under various wind speeds and temperatures using standard engineering correlations of wind speed and heat transfer rate. Heat transfer was calculated for a bare face in wind, facing the wind, while walking into it at 1.4 metre per second (3.1mph). The model corrects the officially measured wind speed (at 10 meter height) to the wind speed at face height, assuming the person is in an open field. The results of this model may be approximated, to within one degree, from the following formula:"));
this->m_Category.Add(_("Weather"));
this->m_Source.Add(_("http://en.wikipedia.org/wiki/Wind_chill, http://climate.weatheroffice.gc.ca/prods_servs/normals_documentation_e.html"));
this->m_Formula.Add(_("T_wind_chill = 13.12 + 0.6215 * T_air - 11.37 * V_wind^0.16 + 0.3965 * T_air* V_wind^0.16 "));
this->m_Result_Unit.Add(_("Celsius"));
this->m_Input_parameter.Add(_("T_air"));
this->m_Input_unit.Add(_("Celsius"));
this->m_Input_parameter1.Add(_("V_wind"));
this->m_Input_unit1.Add(_("m/s"));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Humidex"));
this->m_LongDesc.Add(_("Humidex is an index to indicate how hot or humid the weather feels to the average person. It is derived by combining temperature and humidity values into one number to reflect the perceived temperature. For example, a humidex of 40 means that the sensation of heat when the temperature is 30 degrees and the air is humid feels more or less the same as when the temperature is 40 degrees and the air is dry. "));
this->m_Category.Add(_("Weather"));
this->m_Source.Add(_("http://climate.weatheroffice.gc.ca/prods_servs/normals_documentation_e.html"));
this->m_Formula.Add(_("humidex = (T_air) + (0.5555)*((6.11 * exp (5417.7530 * ( (1/273.16) - (1/dewpoint) ) ) ) - 10.0)"));
this->m_Result_Unit.Add(_("Celsius"));
this->m_Input_parameter.Add(_("T_air"));
this->m_Input_unit.Add(_("Celsius"));
this->m_Input_parameter1.Add(_("dewpoint"));
this->m_Input_unit1.Add(_("Kelvin"));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Beaufort to meter per second"));
this->m_LongDesc.Add(_("Beaufort scale was created in 1805 by Sir Francis Beaufort, British admiral and hydrographer. It describes wind speed based mainly on observed sea conditions.\nWind speed on the Beaufort scale can be expressed by the formula:"));
this->m_Category.Add(_("Weather"));
this->m_Source.Add(_("http://planetcalc.com/384/"));
this->m_Formula.Add(_("Wind_Speed=0.837*Beaufort^(3/2)"));
this->m_Result_Unit.Add(_("m/s"));
this->m_Input_parameter.Add(_("Beaufort"));
this->m_Input_unit.Add(_("Beaufort"));
this->m_Input_parameter1.Add(_(""));
this->m_Input_unit1.Add(_(""));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Pressure at depth"));
this->m_LongDesc.Add(_("If a fluid is within a container then the depth of an object placed in that fluid can be measured. The deeper the object is placed in the fluid, the more pressure it experiences. This is because is the weight of the fluid above it. The more dense the fluid above it, the more pressure is exerted on the object that is submerged, due to the weight of the fluid. Density is function of salinity and water temperature. Below are average values.\nDensity Sea Water = 1.035 kg/liter\nDensity Fresh Water = 1.0 kg/liter"));
this->m_Category.Add(_("Diving"));
this->m_Source.Add(_("http://www.grc.nasa.gov/WWW/k-12/WindTunnel/Activities/fluid_pressure.html\nSaltypaws"));
this->m_Formula.Add(_("Pressure=density*9.80665*depth"));
this->m_Result_Unit.Add(_("Pa"));
this->m_Input_parameter.Add(_("density"));
this->m_Input_unit.Add(_("kg/m3"));
this->m_Input_parameter1.Add(_("depth"));
this->m_Input_unit1.Add(_("meter"));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Distance to horizon"));
this->m_LongDesc.Add(_("If the Earth is assumed to be a sphere with no atmosphere then the distance to the horizon can easily be calculated. (The Earths radius of curvature actually varies by 1 between the Equator and the Poles, so this formula isnt absolutely exact even assuming no refraction.) This formula assumes earth diameter of 12 756.32 km."));
this->m_Category.Add(_("Navigation"));
this->m_Source.Add(_("https://en.wikipedia.org/wiki/Horizon, geometrical model"));
this->m_Formula.Add(_("distance_horizon=sqrt(height* (height + 12756.32))"));
this->m_Result_Unit.Add(_("kilometer"));
this->m_Input_parameter.Add(_("height"));
this->m_Input_unit.Add(_("kilometer"));
this->m_Input_parameter1.Add(_(""));
this->m_Input_unit1.Add(_(""));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Objects above horizon"));
this->m_LongDesc.Add(_("To compute the greatest distance at which an observer can see the top of an object above the horizon, compute the distance to the horizon for a hypothetical observer on top of that object, and add it to the real observers distance to the horizon. For example, for an observer with a height of 1.70 m standing on the ground, the horizon is 4.65 km away. For a tower with a height of 100 m, the horizon distance is 35.7 km. Thus an observer on a beach can see the top of the tower as long as it is not more than 40.35 km away. Conversely, if an observer on a boat (h = 1.7 m) can just see the tops of trees on a nearby shore (h = 10 m), the trees are probably about 16 km away. This formula assumes earth diameter of 12 756.32 km."));
this->m_Category.Add(_("Navigation"));
this->m_Source.Add(_("https://en.wikipedia.org/wiki/Horizon, Objects above horizon"));
this->m_Formula.Add(_("distance_visible=sqrt(height_observer * (height_observer + 12756.32)) + sqrt(height_object * (height_object + 12756.32))"));
this->m_Result_Unit.Add(_("kilometer"));
this->m_Input_parameter.Add(_("height_observer"));
this->m_Input_unit.Add(_("kilometer"));
this->m_Input_parameter1.Add(_("height_object"));
this->m_Input_unit1.Add(_("kilometer"));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Convert Distance"));
this->m_LongDesc.Add(_("Convert Distance"));
this->m_Category.Add(_("Conversions"));
this->m_Source.Add(_("Saltypaws"));
this->m_Formula.Add(_("Distance_Out=Distance_In"));
this->m_Result_Unit.Add(_("meter"));
this->m_Input_parameter.Add(_("Distance_In"));
this->m_Input_unit.Add(_("meter"));
this->m_Input_parameter1.Add(_(""));
this->m_Input_unit1.Add(_(""));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Convert Temperature"));
this->m_LongDesc.Add(_("Convert Temperature"));
this->m_Category.Add(_("Conversions"));
this->m_Source.Add(_("Saltypaws"));
this->m_Formula.Add(_("Temperature_Out=Temperature_In"));
this->m_Result_Unit.Add(_("Celsius"));
this->m_Input_parameter.Add(_("Temperature_In"));
this->m_Input_unit.Add(_("Celsius"));
this->m_Input_parameter1.Add(_(""));
this->m_Input_unit1.Add(_(""));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Convert Speed"));
this->m_LongDesc.Add(_("Convert Speed"));
this->m_Category.Add(_("Conversions"));
this->m_Source.Add(_("Saltypaws"));
this->m_Formula.Add(_("Speed_Out=Speed_In"));
this->m_Result_Unit.Add(_("m/s"));
this->m_Input_parameter.Add(_("Speed_In"));
this->m_Input_unit.Add(_("m/s"));
this->m_Input_parameter1.Add(_(""));
this->m_Input_unit1.Add(_(""));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Convert Pressure"));
this->m_LongDesc.Add(_("Convert Pressure"));
this->m_Category.Add(_("Conversions"));
this->m_Source.Add(_("Saltypaws"));
this->m_Formula.Add(_("Pressure_Out=Pressure_In"));
this->m_Result_Unit.Add(_("bara"));
this->m_Input_parameter.Add(_("Pressure_In"));
this->m_Input_unit.Add(_("bara"));
this->m_Input_parameter1.Add(_(""));
this->m_Input_unit1.Add(_(""));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Convert Angle"));
this->m_LongDesc.Add(_("Convert Angle"));
this->m_Category.Add(_("Conversions"));
this->m_Source.Add(_("Saltypaws"));
this->m_Formula.Add(_("Angle_Out=Angle_In"));
this->m_Result_Unit.Add(_("Degree (\u00b0)"));
this->m_Input_parameter.Add(_("Angle_Out"));
this->m_Input_unit.Add(_("Degree (\u00b0)"));
this->m_Input_parameter1.Add(_(""));
this->m_Input_unit1.Add(_(""));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

this->m_ShortDesc.Add(_("Convert Flowrate"));
this->m_LongDesc.Add(_("Convert Flowrate"));
this->m_Category.Add(_("Conversions"));
this->m_Source.Add(_("Saltypaws"));
this->m_Formula.Add(_("Flowrate_Out=Flowrate_In"));
this->m_Result_Unit.Add(_("m3/s"));
this->m_Input_parameter.Add(_("Flowrate_Out"));
this->m_Input_unit.Add(_("m3/s"));
this->m_Input_parameter1.Add(_(""));
this->m_Input_unit1.Add(_(""));
this->m_Input_parameter2.Add(_(""));
this->m_Input_unit2.Add(_(""));
this->m_Input_parameter3.Add(_(""));
this->m_Input_unit3.Add(_(""));
this->m_Input_parameter4.Add(_(""));
this->m_Input_unit4.Add(_(""));
this->m_Input_parameter5.Add(_(""));
this->m_Input_unit5.Add(_(""));
this->m_Input_parameter6.Add(_(""));
this->m_Input_unit6.Add(_(""));
this->m_Input_parameter7.Add(_(""));
this->m_Input_unit7.Add(_(""));
this->m_Input_parameter8.Add(_(""));
this->m_Input_unit8.Add(_(""));
this->m_Input_parameter9.Add(_(""));
this->m_Input_unit9.Add(_(""));

 //End Class

}