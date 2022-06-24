void sk10::output(){
      nim -= 5 ;
      nama -= 5;
      cout<<"Data Mahasiswa Finalis "<<endl;
      for (int i=0; i<5; i++) {
        cout << "\nNama ke " << i+1 << "\t\t : ";
        cout << *nama<<endl; ;
        cout<<"Alamat nama \t : "<<&nama;
        nama += 1;
        cout << "\nNim  "<< "\t\t\t : ";
        cout << *nim<<endl ;
        cout<<"Alamat nim \t\t : "<<&nim<<endl;
        nim += 1;
    }
}