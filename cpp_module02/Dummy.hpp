/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:45:30 by edesaint          #+#    #+#             */
/*   Updated: 2024/09/15 17:24:04 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DUMMY__
#define __DUMMY__

#include <string>
#include <iostream>

#include "ATarget.hpp"

class Dummy: public ATarget
{
    public:
        Dummy();
        virtual ~Dummy();
        virtual ATarget* clone() const;
};

#endif