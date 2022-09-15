#include "queue.h"
#include "date.h"
#include <iostream>
#include "CMAKE_TEST2Config.h"

using namespace std;

int main(){
    
    //Print of version number.
    cout << "Version " << CMAKE_TEST2_VERSION_MAJOR << "." << CMAKE_TEST2_VERSION_MINOR << endl;
    cout << endl;

    Queue q = Queue();
    Date d = Date(1998, 03, 13);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << "Q size=" << q.getSize() << endl;
    cout << "Q first element=" << q.peek() << endl;
    cout << endl;
    cout << "Date year=" << d.getYear() << " | Date month=" << d.getMonth() << " | Date day=" << d.getDay() << endl;
    cout << endl;
    
    cout << "Bye." << endl;
    return 0;
}
