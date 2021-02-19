a) trình bày bộ chữ viết trong ngôn ngữ c ?
- bộ chữ viết trong ngôn ngữ c gồm những kí tự, ký hiệu qua chữ in hoa hay in thường gồm:
 + 26 chữ cái latinh lớn , nhỏ :a , b ,c; A, B , C...
 + các chữ số thập phân gồm: 0,1,2...9
 + Các ký hiệu toán học trong ngôn ngữ c++ gồm: +, -, *, /, =, <, >, (, )
 + Các ký hiệu đặc biệt trong ngôn ngữ c++ gồm: :. , ; " ' _ @ # $ ! ^ [ ] { } ... ;
 + qua dấu cách hoặc khoảng trống, xuống hàng (\n) và tab (\t) 
 
  b) trình bày các kiểu dữ liệu cơ sở trong c ?
 - các kiểu dữ liệu trong c gồm 3 phần: kiểu số nguyên, kiểu số thực,  kiểu void
 ví dụ kiểu số nguyên : char,  int,...
 ví dụ kiểu số thực : float, double.
 ví dụ kiểu void được hiểu: không có giá trị
 
  c) trình bày khái niệm và cú pháp khai báo bién trong ngôn ngữ c ?
 - biến được hiểu là: là một chương trình dữ liệu có thể quản lí nhiều loại dữ liêụ gồm 2 thành phần :
 + kích thước bộ nhỡ ( kiểu dữ liệu)
 + vị trí bộ nhớ ( địa chỉ bộ nhớ)
 - khai báo biến theo cú pháp như sau:
* kiểu_dữ_liệu Tên_biến;// kết thúc bằng khai báo dấu chấm phẩy
* int là kiểu dữ liệu, num là tên biến
* khởi tạo biến theo cú pháp:
  Tên_biến= giá trị;// ví dụ num = 5;
 - khai báo và khởi tạo biến có thể thực hiện đồng thơi qua sau đây:
*  kiểu_dữ_liệu Tên_biến= giá trị;// ví dụ int num = 5;

d) trình bày khái niệm biến toàn cục và biến cục bộ trong ngôn ngữ c:
  - biến toàn cục :
  * được khai báo bên ngoài tất cả các  (kể cả main)  
  * thường được khai báo tại khối khai báo 
  * có thể được sử dụng tại mọi vị trí trong chương trính như các hàm , khối lệnh lặp for hay while
  - biến cục bộ :
  * được khai báo bên trong các hàm hay khối lệnh 
  * chỉ có thể được sử dụng trong phạm vị hàm hay khối lệnh
  * các tham số của tham ( nếu có ) là các biến cục bộ của hàm đó
  
  e) trình bày khái niệm và phân loại hàm trong ngôn ngữ c
  hàm được hiểu:   là một nhóm câu lệnh cùng xử lý một nhiệm vụ cụ thể nào đó ( tính tổng,  hiện thị đến thông báo người dùng )
  hàm được phân thành 2 loại:
  * hàm thư viện chuẩn:
  là hàm được xậy dựng sẵn trong ngôn ngữ c như các hàm: scanf,  printf, getchar.
  các hàm này được định nghĩ qua tập tin mở rông.h (stdio.h, conio,h)
  * hàm do người dùng định nghĩa : định nghĩa theo nhu cầu của người dùng, qua đó tìm hiểu về cú pháp khai báo , định nghĩa và gọi hàm loại này.
  
  f) trình bày nguyên tắc hoạt động của hàm trong ngôn ngữ c?
  kieu_du_lieu_tra_ve tên_hàm(danh_sách_tham_so);
  ví dụ 
  // khoi khai bao 
  #include <stdio.h>
  int  // (khai báo hàm int )
  // khoi ham main
  int main(){
  
  return 0;
  }
  // khoi dinh nghia ham
  int  // (dinh nghia hàm int )
  
  g) Trình bày khái niệm hàm đệ quy. Đặc điểm của hàm đệ quy ?
  - Một đối tượng được gọi là đệ quy nếu nó hoặc một phần của nó được định nghĩa thông qua khái niệm về chính nó.
  * Ví dụ: Định nghĩa số tự nhiên:
 + 0 là một số tự nhiên.
 + n là số tự nhiên nếu n - 1 là số tự nhiên
 
  * Đặc điểm của hàm đệ quy?
  Trong hàm đệ quy có lời gọi đến chính nó.
  + Mỗi lần có lời gọi thì kích thước của bài toán được thu nhỏ hơn trước.
  + Vấn đề nhỏ hơn này, đến một lúc nào đó sẽ đơn giản tới mức chương trình có thể tự giải quyết được mà không cần gọi tới chính nó nữa.
  + Đệ quy gồm:
  - Đệ quy trực tiếp (hàm chứa lời gọi đến chính nó): func1 calls func1.
  - Đệ quy gián tiếp (hàm chứa lời gọi đến hàm khác mà hàm này lại chứa lời gọi đến chính nó): func1 calls func2, func2 calls func1
  
  
  
