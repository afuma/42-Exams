/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:50:45 by edesaint          #+#    #+#             */
/*   Updated: 2024/09/15 19:19:42 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(const std::string &type): type(type)
{}

ATarget::~ATarget()
{}

ATarget::ATarget(const ATarget& other): type(other.type) {}

ATarget& ATarget::operator=(const ATarget& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

const std::string& ATarget::getType() const
{
    return this->type;
}

void ATarget::getHitBySpell(const ASpell& aspell) const
{
    std::cout << this->type << " has been " << aspell.getEffects() << "!" << std::endl;
}