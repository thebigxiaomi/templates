//assert a and b are equal
template <class T>    
bool asseq(T a, T b, const char *mess, bool crash)
{
    if ((a) == (b))
        return true;
    cerr << (a) << " must be equal to " << (b);
    if (mess)
        cerr << " in: " << mess;
    cerr << " ! " << endl;
    if (crash)
        vis();
    return false;
}

//assert a and b are different
template <class T>    
bool asneq(T a, T b, const char *mess, bool crash)
{
    if ((a) != (b))
        return true;
    cerr << (a) << " deve essere diverso di " << (b);
    if (mess)
        cerr << " in: " << mess;
    cerr << " ! " << endl;
    if (crash)
        vis();
    return false;
}