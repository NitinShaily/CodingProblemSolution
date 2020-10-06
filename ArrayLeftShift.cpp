// d -- no of time left rotation have to be done.
/* Sample Input
  5 4
  1 2 3 4 5

  Sample Output
    5 1 2 3 4   
 */


vector<int> rotLeft(vector<int> a, int d) {
    int rotates;
    int size = a.size();

    if (d>size) rotates  = d % a.size();
    else rotates = d;

    for(int i=0; i<rotates; i++){
        a.push_back(a[i]);
    }
    a.erase(a.begin(),a.begin() + rotates);
    return a;

}
