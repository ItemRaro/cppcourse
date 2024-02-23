#include <iostream>
#include <string>

using namespace std;

int main() {

  const string alphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
  const string cypher {"oCbgrWSYKBRxpqsnwlkiycazJHuOXZFfMQeVIvhPNjUTLGDAdEtm"};

  string message;
  string encrypted_message;
  string decrypted_message;

  cout << "Digite sua mensagem secreta: ";
  getline(cin, message);

  for (char c : message) {
    size_t position = alphabet.find(c);
    if (position != string::npos) {
      encrypted_message += cypher.at(position);
    } else {
      encrypted_message += c;
    } 
  }
  cout << "Mensagem criptografada: " << encrypted_message << endl;

  for (char c : encrypted_message) {
    size_t position = cypher.find(c);
    if (position != string::npos) {   
      decrypted_message += alphabet.at(position);
    } else {
      decrypted_message += c;
    }
  }
  cout << "Mensagem descriptografada: " << decrypted_message << endl;

  cout << endl;
  
  return 0;
}