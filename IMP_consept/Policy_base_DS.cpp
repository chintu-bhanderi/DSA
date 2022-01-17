#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;



#define ordered_set1 tree<int,null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_set2 tree<int,null_type,greater<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_set3 tree<int,null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_set4 tree<int,null_type,greater_equal<int>, rb_tree_tag,tree_order_statistics_node_update>

int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
    ordered_set3 st;
    st.insert(5);
    st.insert(10);
    st.insert(12);
    st.insert(13);
    st.insert(13);
    st.insert(1);
    st.insert(1);
    st.insert(1);
    st.insert(6);
    st.insert(2);
    st.insert(2);

    cout<<st.order_of_key(1)<<'\n';
    cout<<*(st.find_by_order(0))<<'\n';
    st.erase(st.find_by_order(5));
    cout<<st.order_of_key(6)<<'\n';

    return(0);
}