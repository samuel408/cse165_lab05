#ifndef DISPLAY_H
#define DISPLAY_H

void display( const vector<Animal*> &list )
{
	for( int i = 0; i < list.size(); i++ )
		cout << list[i]->getName() << endl;
}

#endif