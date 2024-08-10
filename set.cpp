#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);

    for(auto element : st){
        cout << element << "  ";
    }cout << endl;

    auto it = st.find(3);

    cout << st.count(3) << endl;

    return 0;
}