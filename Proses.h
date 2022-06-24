 void sk10::proses(){
  	cout << "\n=============================";
  	cout << "\nData Tersimpan ke alamat \n";
  	cout << "=============================\n";
    nim = new int[5];
    nama = new string[5];
    for(int i=0; i<5; i++){
      *nim = nmq[i];
      nim += 1;
      *nama = nmh[i];
      nama+=1;
    }
}