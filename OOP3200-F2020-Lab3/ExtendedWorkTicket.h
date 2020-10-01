/**
 * Project Untitled
 */


#ifndef _EXTENDEDWORKTICKET_H
#define _EXTENDEDWORKTICKET_H

class ExtendedWorkTicket {
public: 
    void Attribute1;
    
/**
 * @param myTicketNumber
 * @param myClientId
 * @param day
 * @param month
 * @param year
 * @param myDescription
 * @param isOpen
 */
void ExtendedWorkTicket(int myTicketNumber, string myClientId, int day, int month, int year, string myDescription, bool isOpen);
    
bool GetIsOpen();
    
/**
 * @param value
 */
void SetIsOpen(bool value);
    
string ShowWorkTicket();
    
/**
 * @param isOpen
 */
void SetWorkTicket(bool isOpen);
    
/**
 * @param isOpen
 */
void CloseTicket(bool isOpen);
private: 
    bool isOpen;
};

#endif //_EXTENDEDWORKTICKET_H