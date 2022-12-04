// Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.


void printTable(int start, int end, int step) {
    
    while(start <= end)
    {
        cout << start << " " << (5*(start - 32))/9 << endl;
        start = start + step;
    }
    
}


