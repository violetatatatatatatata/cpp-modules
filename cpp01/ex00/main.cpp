/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:06:46 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/18 19:15:42 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
    std::cout << "The zombies are coming...\t";
    
    Zombie* heapZombie = newZombie("HeapZ");
    if (heapZombie != NULL)
        heapZombie->announce();
    std::cout << std::endl << "-" << std::endl;
    
    randomChump("StackZ");
    std::cout << "good news mr. president! " << heapZombie.getName() << " is dead" << std::endl;
    delete heapZombie;

    return 0;
}
