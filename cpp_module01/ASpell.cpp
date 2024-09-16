/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:50:45 by edesaint          #+#    #+#             */
/*   Updated: 2024/09/15 19:24:18 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(const std::string &name, const std::string &effects): name(name), effects(effects) {}

ASpell::~ASpell() {}

ASpell::ASpell(const ASpell& other): name(other.name), effects(other.effects) {}

ASpell& ASpell::operator=(const ASpell& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->effects = other.effects;
    }
    return *this;
}

const std::string& ASpell::getName() const
{
    return this->name;
}

const std::string& ASpell::getEffects() const
{
    return this->effects;
}

void ASpell::launch(const ATarget& atarget) const
{
    atarget.getHitBySpell(*this);
}