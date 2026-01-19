/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:51:06 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/19 18:02:13 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
    private:
        std::string _name;
        Weapon&     _weapon;

    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack() const;
};

#endif
