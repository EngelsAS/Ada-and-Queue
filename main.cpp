#include <iostream>
#include <deque>
using namespace std;

int main()
{

    cin.tie(NULL);
    int Q;
    bool reverse = false;
    cin >> Q;
    deque<int> fila;

    while (Q--)
    {

        string x;
        cin >> x;

        if (x == "back")
        {
            if (fila.empty()){
                cout << "No job for Ada?\n";
            }
            else{
                if(reverse){
                    cout << fila.front() << "\n";
                    fila.pop_front();
                }
                else{
                    cout<<fila.back()<<"\n";
                    fila.pop_back();
                }
            }
        }
        else if (x == "front"){
            if (fila.empty()){
                cout << "No job for Ada?\n";
            }
            else{

                if(reverse){
                    cout<<fila.back()<<"\n";
                    fila.pop_back();
                }
                else{
                    cout<<fila.front()<<"\n";
                    fila.pop_front();
                }
            }
        }
        else if(x == "push_back"){
            int valor;
            cin>>valor;
            if(reverse){
                fila.push_front(valor);
            }
            else{
                fila.push_back(valor);
            }
        }
        else if(x == "toFront"){
            int valor;
            cin>>valor;
            if(reverse){
                fila.push_back(valor);
            }
            else{
                fila.push_front(valor);
            }
        }
        else if(x == "reverse"){
            if(reverse){
                reverse = false;
            }
            else{
                reverse = true;
            }
        }
    }
    return 0;
}