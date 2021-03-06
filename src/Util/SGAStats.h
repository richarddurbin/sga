//-----------------------------------------------
// Copyright 2009-2013 Wellcome Trust Sanger Institute
// Written by Jared Simpson (js18@sanger.ac.uk)
// Released under the GPL
//-----------------------------------------------
//
// SGAStats - Common statistics functions used 
// throughout the program
//

#ifndef SGASTATS_H
#define STATS_H

namespace SGAStats
{
//
// Probability
//
double logPoisson(unsigned int k, double m);
double logFactorial(unsigned int k);

}
#endif
