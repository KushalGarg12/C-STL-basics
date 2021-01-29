

void pair(){
    pair<int,int> p={1,3};
    //prints 1 3
    cout<<p.first<<" "<<p.second;

    pair <int,<pair<int,int>> p={1,{2,3}};
    //prints 1 4 3
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;

    pair<int,int> arr[]={{1,2},{2,5},{4,7}};
    //prints 5
    cout<<arr[1].second;
}
//Vectors provide you with dynamic allocation which is not provided by the array
void vector()
{
    //Empty vector
    vector<int> v;  // {}
    v.push_back(1);

    vector<pair<int,int>> vec;
    v.push_back({1,2});

    //vector of size 5 with all elements 100
    vector<int> v(5,100);
    //by default all the elements are 0
    vector<int> v(5) // Size of the vector is 5 and all the elements are 0

    //take a vector {10,20,30,40}
    vector<int>::iterator it =v.begin();//it points to 10

    it++;
    cout<<*(it)<<" "  //to print the value at it location

    vector<int>::iterator it =v.end();//it point to memory address after last element
    vector<int>::iterator it =v.rend();//reverse end points to memory address before first element
    vector<int>::iterator it =v.rbegin();//reverse begin to point at last element

    cout<<v[0]; //or v.at(0) TO PRINT 0 INDEX ELEMENT(10)
    cout<<v.back()<<" "; //last element

    //ways to print the vector

    for (vector<int>::iterator it=v.begin(); it!=v.end; it++)
        cout<<*(it)<<" ";

                    //OR

    for (auto it=v.begin(); it!=v.end(); it++ )
        cout<<*(it)<<" ";

                    //OR

    for (auto it : v)
        cout<<it<<" ";

    //let the vector be {10,20,12,23,35}
    v.erase(v.begin());//erase the first element {20,12,23,35}
    v.erase(v.begin()+1);//to erase the second element {10,12,23,35}

    //to erase the range of values
    v.erase(v.begin()+2,v.begin()+4); //{10,20,35}

    //Insert function

    vector<int> v(2,100);//{100,100}
    v.insert(v.begin(),300);//{300,100,100}
    v.insert(v.begin()+1,2,10)//{300,10,10,100,100}

    //to know the size of the vector
    cout<<v.size();

    //to remove the last element from the vector
    v.pop_back();

    //to swap two vectors
    v1.swap(v2);

    v.clear();//erases the entire vector
}

void list(){
    //In list the elements can be pushed to the front and back both while in vector we could only push the elements at the back.
    //Vector is useful when complexities are as constraints.
    list<int> ls;
    ls.push_back(2);//{2}
    ls.push_back(4);//{2,4}

    ls.push_front(5);//{5,2,4}
}



