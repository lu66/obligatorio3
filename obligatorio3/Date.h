/*
 * Date.h
 *
 *  Created on: 29 de mar. de 2016
 *      Author: ernesto
 */

#ifndef DATE_H_
#define DATE_H_

namespace std {

class Date {
private:
	int dd;
	int mm;
	int aaaa;
public:
	Date();
	Date(Date* fecha);
	Date(int dd,int mm,int aaaa);
	virtual ~Date();
	int getDd();
	int getMm();
	int getAaa();

};

} /* namespace std */

#endif /* DATE_H_ */
