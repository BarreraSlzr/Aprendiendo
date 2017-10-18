
public class SobreCarga1 {

	public static void imprimeBits(byte b){
		byte test=(byte)0x80;
		System.out.print(b+"=");
		for(int i=0;i<8;i++){
			if ((b&test)!=0){
				System.out.print("1");
			}
			else{
				System.out.print("0");
			}
			test=(byte)((test>>1)&0x7F);
		}
		System.out.println("");
	}
	
	public static void imprimeBits(short s){
		short test=(short)0x8000;
		System.out.print(s+"=");
		for(int i=0;i<16;i++){
			if ((s&test)!=0){
				System.out.print("1");
			}
			else{
				System.out.print("0");
			}
			test=(short)((test>>1)&0x7FFF);
		}
		System.out.println("");
	}
	
	public static void main(String[] args) {
		byte b1;
		short s1;
		int limitePositivo=16,limiteNegativo=-112;
		System.out.println("Positivos byte");
		for(b1=0;b1<limitePositivo;b1++){
			SobreCarga1.imprimeBits(b1);
		}
		System.out.println("Negativos byte");
		for(b1=-128;b1<limiteNegativo;b1++){
			SobreCarga1.imprimeBits(b1);
		}
		System.out.println("Positivos short");
		for(s1=0;s1<limitePositivo;s1++){
			SobreCarga1.imprimeBits(s1);
		}
		System.out.println("Negativos short");
		for(s1=-128;s1<limiteNegativo;s1++){
			SobreCarga1.imprimeBits(s1);
		}
	}

}
