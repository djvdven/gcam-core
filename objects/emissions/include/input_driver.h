#ifndef _INPUT_DRIVER_H_
#define _INPUT_DRIVER_H_
#if defined(_MSC_VER)
#pragma once
#endif

/*
 * This software, which is provided in confidence, was prepared by employees of
 * Pacific Northwest National Labratory operated by Battelle Memorial Institute.
 * Battelle has certain unperfected rights in the software which should not be
 * copied or otherwise disseminated outside your organization without the express
 * written authorization from Battelle. All rights to the software are reserved
 * by Battelle. Battelle makes no warranty, express or implied, and assumes no
 * liability or responsibility for the use of this software.
 */

/*!
 * \file input_driver.h
 * \ingroup Objects
 * \brief InputDriver header file.
 * \author Jim Naslund
 */

#include "emissions/include/aemissions_driver.h"

/*! 
 * \ingroup Objects
 * \brief An emissions driver class where emissions are proportional to input.
 * \author Jim Naslund
 */
class InputDriver: public AEmissionsDriver {

public:
    virtual double calcEmissionsDriver( const double aInputIn, const double aOutputIn ) const;
    virtual InputDriver* clone() const;
    virtual const std::string& getXMLName() const;
    static const std::string& getXMLNameStatic();
};


#endif // _INPUT_DRIVER_H_