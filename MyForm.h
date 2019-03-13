#pragma once
#include"Math.h"
#include <cmath>
#include "stdio.h" 
double A[20];
double BBC[21];


namespace diplom_realy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		//array <DataGridView^>^ tablee; int nn;
		//array <DataGridView^>^ tablee; int nn;
		double koefic,koefic1,Kz1sum;
		String^profesion;
		String^profesion2;
		String^profesion3;
//int ;
		double Nvip,B,kzosum,Nzap;
		//double f2,f3;
		double kilchol,tarufrozrad,stavka,kilchol2,tarufrozrad2,stavka2;
				 double Dk,Dv,Dsv,Dpsv,Tzm,Tnc,Kzm,Krem,Fdo;
				 double nd,takt;
				 double Ndob,Rzap,serkoefobl;//исправить нужно
				 double Snraz;
				 double Frd,t;
				 array <DataGridView^>^ tablee; int nn;
				 StringFormat^ strFormat;
	ArrayList^ arrColumnLefts;
	ArrayList^ arrColumnWidths;
	int iCellHeight;
	int iCount;
	int iTotalWidth;
	int iRow;
	bool bFirstPage;
	bool bNewPage;
	float iHeaderHeight;
				double tst,tkr,n1;
				double thtser;
				 double Kzo,sumkz;
				 double  Tpi,Viroz,Kvn,Kzi;
				 int Vinp;
				 int x;
				 int o,t1,tp,f2,f3,f4;
				 //value for cicles
				 double for1,for2,for3,si,tsht,sum1,sum2,Virozprin,Tdov,Trzach,sum3,sum4,sum5,sum6,sum7,sum8,sum9,sum10,sum11,sum12,sum13,sum14,sum15,sum16,sum17,sum18,sum19,sum20,sum21,sum22,sum23,sum24;
				 //int operation;
				 int kiloperation;
				 double kilverst,Pobl,mex,elektr,zagalnavar,vitratuTMV,balvart,vidsotokTMV,vidsotokTMV1,rozradrob;
				 double modelverst1,kilverst1,Pobl1,zagalnavar1,vitratuTMV1,balvart1,kiloperation1,texzas;
				 double f1,Rvspokrugl;
				 double vidsbalvart,Vdopi,Pserobl,Sput,Sputd,Szag,h,Vbud,Cbud,Bbud;
				 double Dchv,Ddv,Dlik,Ddo,Chosnrob,Chdoprob,Chitp,Fnom,Fef,Kvn1,Rvsp,Rvinp,Kz1,tarifstav,tarifstav1,tarifstav2,Trzag;
				 String^modelverst;
				 double x1,x2,x3;



				 double vmrichhelp;
				 //--------------------------------
				 String^nametovar;
				 String^odinicavimir;
				 double zagotovka,detal,massvidhodiv,cinazamaterial,vartistmaterial,cinazavidhod,vartistmaterialzvidhod, vartistmaterialnavidhodi;
				 double tzv,vidsotokvidhodiv;
				 //--------------------------------
				 double godtarifstavka,rozcinka,richniyfondzp;
				 //--------------------------------
				 double test1,test2,test3,test4,test5,test6,kiloperation2,sumtest6,testpipl,testrozrad,sumpiple,tariftest,sumpipletest,summapiple,sumchelovek;
				 //--------------------------------
				 double zpprroz,zpprdov,zppr,dopl,zposn,zpdod,zprechosn,esv,tstser,min,max,znach,maxpipl,minpipl;
				 int indexmin,indexmax;
				 double dodzpvidsotok,zpvidsotok,esvvidsotok, serzaponerob;
				 double dodzpvidsotok2,zpvidsotok2,esvvidsotok2;
				 double zppr2,dopl2,zposn2,zpdod2,zprichdop,esv2;
				 double kilchol3,tarufrozrad3,oklad,dodzpvidsotok3,zpvidsotok3,esvvidsotok3, fondprimzp,dopl3,fondosnzp,zpdod3,richniyfondzp3,esv3;
				 double stavka3;
				 double sumdop1,sumdop2,sumdop3,sumdop4,sumdop5,sumdop6,sumdop7;
				 double sumin1,sumin2,sumin3,sumin4,sumin5,sumin6,sumin7;
				 double sumzag1,sumzag2,sumzag3,sumzag4,sumzag5,sumzag6,sumzag7;
				 double normamort1,normamort2,normamort3,normamort4;
				 double richsumamort1,richsumamort2,richsumamort3,richsumamort4,richsumamort5,richsumamort6,richsumamort7;                                                                                                                                                  
				 double Normaamort1, Normaamort2, Normaamort3, Normaamort4,richsum1,richsum2,richsum3,richsum4,richsumsum1,richsumsum2,richsumsum3;
				 int i11,i12,i13,i14,i15,i16;
				 double normavitrat,kilkistverst,richsumvitrat,sumx1,sumx2;
				 double richnormmeh,kilremmeh,richvitratimeh,inhimeh,inchi1meh,vsigomeh,inhi2meh,vsigo1meh;
				 double richnormelec,kilremelec,richvitratielec,inhielec,inchi1elec,vsigoelec,inhi2elec,vsigo1elec;
				 double instrument,vsigodellica,visotokinstrument,Bpotoch,Bbn,Bmalinst,Binst,Binhi;
				 double summasum;
				 //для формул
				 double ZPtr,ESVtr,Bi,ZPzatoch,ESVzatoch,ZPcontr,ESVcontr;
				 double Wobl,Kc,Kk,Kzzzz,Ko,Bee,Beskp,Wtr,sumWobl,Kt,Cec;
				 double sumtabl14,Puprobl;
				double Beeosv,Qohol,Qv,Bvurpot,Cv,Qgosp,sumvsihrob,qgosp,Bvutgosp,Qstpov,Qgod,Kvuk,koefpov,kilprim,Bpov,Binh;
				double Ko1,W1,Pv1,n111;
				double sumtabl15,Pceh,Bneprv,Pneprv; 
				double Cceh,ZPtar,ZPdop,Pdop,esvform,Hvup,Nvip1,Nvip2,Nvip3,Nvip4,Nvip5,Nvip6;
				double Cpn,Pform,pdv,Cvidc,Pform1,sumpdv;
				double Eymrich,C1,C2,En,K1,K2,Erich,Tok,Erich1,Erich2,Erich3,Eymrich1,Eymrich2,manth;
				double vidosn,Hdoprob,Hitr,vidosnitr,chpk,koefchpk;
				double kilchol111,kilchol222,kilchol333;
				double vartmatr;
				//переменные для тек
				double num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12;
				double formform;
				double sumokl;
				double serzpdop,serzpitr;
				double real;
				double sum015,sum016,sum017,sum018,sum019;


				double pic1,pic2,pic3,pic4,pic5,pic6,pic7,pic8,pic9,pic10,pic11,pic12,pic13,pic14,pic15,pic16,pic17,pic18,pic19,pic20,pic21,pic22,pic23,pic24,pic25,pic26,pic27,pic28,pic29,pic30,pic31,pic32,pic33,pic34,pic35,pic36,pic37,pic38,pic39,pic40,pic41,pic42,pic43,pic44,pic45,pic46,pic47,pic48,pic49,pic50,pic51,pic52,pic53,pic54,pic55,pic56,pic57,pic58,pic60,pic61,pic62,pic63,pic64,pic65,pic66,pic67,pic68,pic69,pic70,pic71,pic72,pic73,pic74,pic75,pic76,pic77,pic78,pic79,pic80;
				double h111;
				double per1,per2,per3,per4,per5,per6,per7,per8,per9,per10,per11,per12,per13,per14,per15;
				double Cvpov;
				double vatone;
				double Belekt,Bnalad,ZPelekt,ESVelekt,ZPnalad,ESVnalad,sumpers,ekspobl;
				double ZPkomir,ESVkomir;
				double real1,real2;
				double ZPslus,ESVslus,Bpotoch1;
				double esvrezerv;

	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::DataGridView^  dataGridView1;



			 private: System::Windows::Forms::Button^  button18;








	private: System::Windows::Forms::Label^  label37;












	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button19;












	private: System::Windows::Forms::TabPage^  tabPage9;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label40;








	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column21;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button23;








private: System::Windows::Forms::TabPage^  tabPage10;
private: System::Windows::Forms::Button^  button26;
private: System::Windows::Forms::Button^  button25;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::PictureBox^  pictureBox23;
private: System::Windows::Forms::TextBox^  textBox23;
private: System::Windows::Forms::TextBox^  textBox41;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::TextBox^  textBox40;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::PictureBox^  pictureBox14;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::TextBox^  textBox39;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::PictureBox^  pictureBox13;
private: System::Windows::Forms::TextBox^  textBox38;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::PictureBox^  pictureBox22;
private: System::Windows::Forms::TextBox^  textBox22;
private: System::Windows::Forms::TextBox^  textBox37;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::PictureBox^  pictureBox12;
private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::TextBox^  textBox32;
private: System::Windows::Forms::TextBox^  textBox36;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::PictureBox^  pictureBox11;
private: System::Windows::Forms::TextBox^  textBox35;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::TextBox^  textBox34;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::PictureBox^  pictureBox10;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::TextBox^  textBox33;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::PictureBox^  pictureBox9;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::TabControl^  tabControl3;
private: System::Windows::Forms::TabPage^  tabPage11;
private: System::Windows::Forms::Button^  button28;
private: System::Windows::Forms::Button^  button27;
private: System::Windows::Forms::PictureBox^  pictureBox28;
private: System::Windows::Forms::PictureBox^  pictureBox27;
private: System::Windows::Forms::PictureBox^  pictureBox26;
private: System::Windows::Forms::PictureBox^  pictureBox25;
private: System::Windows::Forms::TextBox^  textBox47;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::TextBox^  textBox46;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::TextBox^  textBox45;
private: System::Windows::Forms::TextBox^  textBox44;
private: System::Windows::Forms::TextBox^  textBox43;
private: System::Windows::Forms::TextBox^  textBox42;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::PictureBox^  pictureBox16;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::PictureBox^  pictureBox15;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::TabPage^  tabPage12;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::DataGridView^  dataGridView5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column23;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column24;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column25;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column26;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column27;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column28;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column29;
private: System::Windows::Forms::Button^  button30;
private: System::Windows::Forms::Button^  button29;
private: System::Windows::Forms::TabPage^  tabPage13;
private: System::Windows::Forms::Button^  button33;
private: System::Windows::Forms::Button^  button34;
private: System::Windows::Forms::DataGridView^  dataGridView9;





private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::DataGridView^  dataGridView8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn18;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn19;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn20;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn21;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::Button^  button42;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Button^  button31;
private: System::Windows::Forms::Button^  button32;
private: System::Windows::Forms::DataGridView^  dataGridView6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column30;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column31;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column32;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column33;
private: System::Windows::Forms::Button^  button35;
private: System::Windows::Forms::Button^  button36;

private: System::Windows::Forms::Button^  button38;












private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::Button^  button40;
private: System::Windows::Forms::Button^  button39;




private: System::Windows::Forms::TabPage^  tabPage14;
private: System::Windows::Forms::TabControl^  tabControl4;
private: System::Windows::Forms::TabPage^  tabPage15;
private: System::Windows::Forms::Button^  button43;
private: System::Windows::Forms::Button^  button41;
private: System::Windows::Forms::DataGridView^  dataGridView4;










private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::TabPage^  tabPage16;
private: System::Windows::Forms::TextBox^  textBox49;
private: System::Windows::Forms::TextBox^  textBox48;
private: System::Windows::Forms::Label^  label76;
private: System::Windows::Forms::Label^  label75;













private: System::Windows::Forms::TextBox^  textBox51;
private: System::Windows::Forms::Label^  label78;













private: System::Windows::Forms::DataGridView^  dataGridView11;




private: System::Windows::Forms::Button^  button45;
private: System::Windows::Forms::DataGridView^  dataGridView7;








private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
private: System::Windows::Forms::TabPage^  tabPage17;
private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
private: System::Windows::Forms::Button^  button47;
private: System::Windows::Forms::DataGridView^  dataGridView12;



private: System::Windows::Forms::Label^  label82;
private: System::Windows::Forms::Label^  label83;
private: System::Windows::Forms::PictureBox^  pictureBox18;
private: System::Windows::Forms::Label^  label81;
private: System::Windows::Forms::Label^  label80;
private: System::Windows::Forms::PictureBox^  pictureBox17;
private: System::Windows::Forms::Label^  label84;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column58;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column59;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column60;
private: System::Windows::Forms::TextBox^  textBox52;
private: System::Windows::Forms::Label^  label85;









private: System::Windows::Forms::Button^  button48;
private: System::Windows::Forms::TextBox^  textBox56;
private: System::Windows::Forms::Label^  label89;
private: System::Windows::Forms::TextBox^  textBox55;
private: System::Windows::Forms::Label^  label88;
private: System::Windows::Forms::TextBox^  textBox54;
private: System::Windows::Forms::Label^  label87;





private: System::Windows::Forms::TextBox^  textBox57;
private: System::Windows::Forms::Label^  label90;
private: System::Windows::Forms::TextBox^  textBox53;
private: System::Windows::Forms::Label^  label86;
private: System::Windows::Forms::TextBox^  textBox58;
private: System::Windows::Forms::Label^  label91;










private: System::Windows::Forms::TabPage^  tabPage18;
private: System::Windows::Forms::DataGridView^  dataGridView13;











private: System::Windows::Forms::Label^  label96;
private: System::Windows::Forms::Button^  button46;
private: System::Windows::Forms::Button^  button44;
private: System::Windows::Forms::TextBox^  textBox59;
private: System::Windows::Forms::Label^  label92;
private: System::Windows::Forms::TextBox^  textBox60;
private: System::Windows::Forms::Label^  label93;
private: System::Windows::Forms::TextBox^  textBox61;
private: System::Windows::Forms::Label^  label94;
private: System::Windows::Forms::Label^  label95;
private: System::Windows::Forms::Button^  button49;
private: System::Windows::Forms::TextBox^  textBox62;
private: System::Windows::Forms::Label^  label97;
private: System::Windows::Forms::TextBox^  textBox63;
private: System::Windows::Forms::Label^  label98;
private: System::Windows::Forms::TextBox^  textBox64;
private: System::Windows::Forms::Label^  label99;
private: System::Windows::Forms::DataGridView^  dataGridView14;









private: System::Windows::Forms::TabPage^  tabPage19;






private: System::Windows::Forms::DataGridView^  dataGridView15;









private: System::Windows::Forms::Label^  label100;
private: System::Windows::Forms::Button^  button50;









private: System::Windows::Forms::Button^  button51;
private: System::Windows::Forms::DataGridView^  dataGridView17;





private: System::Windows::Forms::TabPage^  tabPage20;
private: System::Windows::Forms::DataGridView^  dataGridView18;
private: System::Windows::Forms::Button^  button55;
private: System::Windows::Forms::Button^  button54;
private: System::Windows::Forms::Button^  button53;
private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::DataGridView^  dataGridView20;


private: System::Windows::Forms::Label^  label104;





private: System::Windows::Forms::Label^  label103;
private: System::Windows::Forms::Label^  label102;




private: System::Windows::Forms::TabPage^  tabPage21;




private: System::Windows::Forms::DataGridView^  dataGridView22;


private: System::Windows::Forms::Label^  label107;
private: System::Windows::Forms::DataGridView^  dataGridView21;


private: System::Windows::Forms::Label^  label106;
private: System::Windows::Forms::TabPage^  tabPage22;
private: System::Windows::Forms::Label^  label109;
private: System::Windows::Forms::DataGridView^  dataGridView24;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column97;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column98;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column99;
private: System::Windows::Forms::TabPage^  tabPage23;
private: System::Windows::Forms::DataGridView^  dataGridView25;



private: System::Windows::Forms::Label^  label110;
private: System::Windows::Forms::Label^  label111;
private: System::Windows::Forms::TextBox^  textBox65;



























private: System::Windows::Forms::TabPage^  tabPage24;
private: System::Windows::Forms::Label^  label124;
private: System::Windows::Forms::Label^  label123;
private: System::Windows::Forms::Label^  label129;
private: System::Windows::Forms::TextBox^  textBox78;
private: System::Windows::Forms::TextBox^  textBox77;
private: System::Windows::Forms::TextBox^  textBox76;
private: System::Windows::Forms::TextBox^  textBox75;
private: System::Windows::Forms::TextBox^  textBox74;

private: System::Windows::Forms::Label^  label128;
private: System::Windows::Forms::Label^  label127;
private: System::Windows::Forms::Label^  label126;

private: System::Windows::Forms::TextBox^  textBox80;
private: System::Windows::Forms::Label^  label131;
private: System::Windows::Forms::TextBox^  textBox79;
private: System::Windows::Forms::Label^  label130;
private: System::Windows::Forms::TextBox^  textBox81;
private: System::Windows::Forms::Label^  label133;
private: System::Windows::Forms::Label^  label132;
private: System::Windows::Forms::Button^  button57;
private: System::Windows::Forms::TextBox^  textBox82;
private: System::Windows::Forms::Label^  label134;
private: System::Windows::Forms::TabPage^  tabPage25;
private: System::Windows::Forms::Label^  label149;
private: System::Windows::Forms::TextBox^  textBox92;
private: System::Windows::Forms::Label^  label148;
private: System::Windows::Forms::TextBox^  textBox91;
private: System::Windows::Forms::Label^  label147;
private: System::Windows::Forms::TextBox^  textBox90;
private: System::Windows::Forms::Label^  label146;
private: System::Windows::Forms::TextBox^  textBox89;
private: System::Windows::Forms::Label^  label145;
private: System::Windows::Forms::Label^  label144;
private: System::Windows::Forms::TextBox^  textBox88;
private: System::Windows::Forms::Label^  label143;
private: System::Windows::Forms::Label^  label142;
private: System::Windows::Forms::Label^  label140;
private: System::Windows::Forms::TextBox^  textBox86;
private: System::Windows::Forms::Label^  label141;
private: System::Windows::Forms::TextBox^  textBox87;
private: System::Windows::Forms::Label^  label139;
private: System::Windows::Forms::Label^  label138;
private: System::Windows::Forms::TextBox^  textBox85;
private: System::Windows::Forms::Label^  label137;
private: System::Windows::Forms::TextBox^  textBox84;
private: System::Windows::Forms::Label^  label136;
private: System::Windows::Forms::TextBox^  textBox83;
private: System::Windows::Forms::Label^  label135;
private: System::Windows::Forms::Button^  button58;
private: System::Windows::Forms::TextBox^  textBox93;
private: System::Windows::Forms::Label^  label150;


private: System::Windows::Forms::Button^  button59;
private: System::Windows::Forms::TextBox^  textBox95;
private: System::Windows::Forms::Label^  label154;
private: System::Windows::Forms::Label^  label152;
private: System::Windows::Forms::Button^  button60;
private: System::Windows::Forms::TextBox^  textBox97;
private: System::Windows::Forms::Label^  label156;
private: System::Windows::Forms::TextBox^  textBox96;
private: System::Windows::Forms::Label^  label153;
private: System::Windows::Forms::Label^  label155;
private: System::Windows::Forms::TabControl^  tabControl5;
private: System::Windows::Forms::TabPage^  tabPage27;
private: System::Windows::Forms::Button^  button61;
private: System::Windows::Forms::TextBox^  textBox101;
private: System::Windows::Forms::Label^  label161;
private: System::Windows::Forms::TextBox^  textBox100;
private: System::Windows::Forms::Label^  label160;
private: System::Windows::Forms::TextBox^  textBox99;
private: System::Windows::Forms::Label^  label159;
private: System::Windows::Forms::TextBox^  textBox98;
private: System::Windows::Forms::Label^  label158;
private: System::Windows::Forms::Label^  label157;
private: System::Windows::Forms::TabPage^  tabPage26;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column100;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column101;
















private: System::Windows::Forms::TextBox^  textBox103;
private: System::Windows::Forms::Label^  label163;
private: System::Windows::Forms::TextBox^  textBox102;
private: System::Windows::Forms::Label^  label162;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn22;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn23;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn25;











private: System::Windows::Forms::Button^  button62;







private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column78;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column79;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column80;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column81;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column82;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column83;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column85;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column86;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column87;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column88;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column89;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column90;











private: System::Windows::Forms::Button^  button63;











private: System::Windows::Forms::TextBox^  textBox106;
private: System::Windows::Forms::Label^  label167;
private: System::Windows::Forms::TextBox^  textBox50;
private: System::Windows::Forms::Label^  label166;
private: System::Windows::Forms::DataGridView^  dataGridView27;









private: System::Windows::Forms::TextBox^  textBox73;
private: System::Windows::Forms::Label^  label125;
private: System::Windows::Forms::Button^  button65;
private: System::Windows::Forms::Button^  button64;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column69;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column70;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column71;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column72;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column73;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column74;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column75;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column76;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column77;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column48;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column49;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column50;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column61;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column62;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column63;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column64;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column65;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column66;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column67;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column68;




private: System::Windows::Forms::Button^  button66;


private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn29;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn30;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column95;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column96;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn24;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn34;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn35;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn36;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn37;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn38;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn39;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn40;
private: System::Windows::Forms::Button^  button67;
private: System::Windows::Forms::TextBox^  textBox107;
private: System::Windows::Forms::Label^  label168;
private: System::Windows::Forms::Label^  label176;
private: System::Windows::Forms::TextBox^  textBox115;
private: System::Windows::Forms::Label^  label174;
private: System::Windows::Forms::TextBox^  textBox114;
private: System::Windows::Forms::Label^  label175;
private: System::Windows::Forms::TextBox^  textBox113;
private: System::Windows::Forms::TextBox^  textBox112;
private: System::Windows::Forms::Label^  label173;
private: System::Windows::Forms::TextBox^  textBox111;
private: System::Windows::Forms::Label^  label172;
private: System::Windows::Forms::TextBox^  textBox110;
private: System::Windows::Forms::Label^  label171;
private: System::Windows::Forms::TextBox^  textBox109;
private: System::Windows::Forms::Label^  label170;
private: System::Windows::Forms::TextBox^  textBox108;
private: System::Windows::Forms::Label^  label169;
private: System::Windows::Forms::TabPage^  tabPage28;
private: System::Windows::Forms::TextBox^  textBox71;
private: System::Windows::Forms::TextBox^  textBox72;
private: System::Windows::Forms::Label^  label120;
private: System::Windows::Forms::Label^  label121;
private: System::Windows::Forms::Label^  label122;
private: System::Windows::Forms::TextBox^  textBox68;
private: System::Windows::Forms::TextBox^  textBox70;
private: System::Windows::Forms::Label^  label115;
private: System::Windows::Forms::Label^  label118;
private: System::Windows::Forms::Label^  label119;
private: System::Windows::Forms::DataGridView^  dataGridView26;



private: System::Windows::Forms::Button^  button56;
private: System::Windows::Forms::TextBox^  textBox69;
private: System::Windows::Forms::Label^  label117;
private: System::Windows::Forms::Label^  label116;
private: System::Windows::Forms::TextBox^  textBox67;
private: System::Windows::Forms::TextBox^  textBox66;
private: System::Windows::Forms::Label^  label114;
private: System::Windows::Forms::Label^  label113;
private: System::Windows::Forms::Label^  label112;
private: System::Windows::Forms::TextBox^  textBox118;
private: System::Windows::Forms::TextBox^  textBox119;
private: System::Windows::Forms::Label^  label181;
private: System::Windows::Forms::Label^  label182;
private: System::Windows::Forms::Label^  label183;
private: System::Windows::Forms::TextBox^  textBox116;
private: System::Windows::Forms::TextBox^  textBox117;
private: System::Windows::Forms::Label^  label178;
private: System::Windows::Forms::Label^  label179;
private: System::Windows::Forms::Label^  label180;
private: System::Windows::Forms::Label^  label177;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column103;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column104;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column105;
private: System::Windows::Forms::Label^  label184;
private: System::Windows::Forms::TextBox^  textBox120;




private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column91;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column92;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column93;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column94;
private: System::Windows::Forms::TextBox^  textBox122;
private: System::Windows::Forms::Label^  label186;
private: System::Windows::Forms::Label^  label185;
private: System::Windows::Forms::TextBox^  textBox121;



private: System::Windows::Forms::Button^  button69;
private: System::Windows::Forms::Button^  button68;
private: System::Windows::Forms::Button^  button71;
private: System::Windows::Forms::Button^  button72;
private: System::Windows::Forms::TextBox^  textBox123;
private: System::Windows::Forms::TextBox^  textBox124;
private: System::Windows::Forms::Label^  label187;
private: System::Windows::Forms::Label^  label188;

private: System::Windows::Forms::Button^  button74;
private: System::Windows::Forms::Button^  button75;
private: System::Windows::Forms::Button^  button76;
private: System::Windows::Forms::Button^  button77;
private: System::Windows::Forms::Button^  button79;

private: System::Windows::Forms::Button^  button80;
private: System::Windows::Forms::Button^  button81;

private: System::Windows::Forms::Button^  button83;
private: System::Windows::Forms::Button^  button84;
private: System::Windows::Forms::Button^  button85;

private: System::Windows::Forms::Button^  button87;
private: System::Windows::Forms::Button^  button88;
private: System::Windows::Forms::Button^  button89;
private: System::Windows::Forms::Button^  button90;
private: System::Windows::Forms::Button^  button91;

private: System::Windows::Forms::Button^  button93;
private: System::Windows::Forms::Button^  button95;
private: System::Windows::Forms::Button^  button94;
private: System::Windows::Forms::Label^  label189;

private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::TabPage^  tabPage29;
private: System::Windows::Forms::Button^  button70;
private: System::Windows::Forms::TextBox^  textBox94;
private: System::Windows::Forms::Label^  label151;
private: System::Windows::Forms::DataGridView^  dataGridView23;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn32;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn33;
private: System::Windows::Forms::Label^  label108;
private: System::Windows::Forms::Button^  button73;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Button^  button78;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::Label^  label191;
private: System::Windows::Forms::Label^  label190;
private: System::Windows::Forms::TextBox^  textBox126;
private: System::Windows::Forms::TextBox^  textBox125;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::Label^  label192;
private: System::Windows::Forms::Label^  label193;
private: System::Windows::Forms::Label^  label194;
private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::Label^  label195;
private: System::Windows::Forms::Label^  label196;
private: System::Windows::Forms::Label^  label197;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::TextBox^  textBox127;
private: System::Windows::Forms::TextBox^  textBox128;
private: System::Windows::Forms::Label^  label198;
private: System::Windows::Forms::Label^  label199;
private: System::Windows::Forms::Label^  label200;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::TextBox^  textBox130;
private: System::Windows::Forms::TextBox^  textBox131;
private: System::Windows::Forms::Label^  label202;
private: System::Windows::Forms::Label^  label203;
private: System::Windows::Forms::Label^  label204;
private: System::Windows::Forms::TextBox^  textBox132;
private: System::Windows::Forms::TextBox^  textBox133;
private: System::Windows::Forms::Label^  label205;
private: System::Windows::Forms::Label^  label206;
private: System::Windows::Forms::Label^  label207;
private: System::Windows::Forms::TextBox^  textBox129;
private: System::Windows::Forms::Label^  label201;
private: System::Windows::Forms::Label^  label208;
private: System::Windows::Forms::TextBox^  textBox134;
private: System::Windows::Forms::TextBox^  textBox139;
private: System::Windows::Forms::TextBox^  textBox138;
private: System::Windows::Forms::TextBox^  textBox137;

private: System::Windows::Forms::TextBox^  textBox135;
private: System::Windows::Forms::Label^  label213;
private: System::Windows::Forms::Label^  label212;
private: System::Windows::Forms::Label^  label211;
private: System::Windows::Forms::Label^  label210;
private: System::Windows::Forms::Label^  label209;
private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::Label^  label217;
private: System::Windows::Forms::Label^  label216;
private: System::Windows::Forms::Label^  label215;
private: System::Windows::Forms::Label^  label214;
private: System::Windows::Forms::TextBox^  textBox140;
private: System::Windows::Forms::TextBox^  textBox141;
private: System::Windows::Forms::TextBox^  textBox143;
private: System::Windows::Forms::TextBox^  textBox142;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::TextBox^  textBox146;
private: System::Windows::Forms::TextBox^  textBox145;
private: System::Windows::Forms::TextBox^  textBox144;
private: System::Windows::Forms::Label^  label220;
private: System::Windows::Forms::Label^  label219;
private: System::Windows::Forms::Label^  label218;
private: System::Windows::Forms::Label^  label221;
private: System::Windows::Forms::TextBox^  textBox147;
private: System::Windows::Forms::TextBox^  textBox136;
private: System::Windows::Forms::TextBox^  textBox148;
private: System::Windows::Forms::Label^  label222;

private: System::Windows::Forms::Label^  label223;
private: System::Windows::Forms::Button^  button82;
private: System::Windows::Forms::Button^  button37;
private: System::Windows::Forms::Button^  button92;
private: System::Windows::Forms::Button^  button97;
private: System::Windows::Forms::Button^  button96;
private: System::Windows::Forms::Button^  button98;
private: System::Windows::Forms::Button^  button100;
private: System::Windows::Forms::Button^  button99;
private: System::Windows::Forms::Button^  button102;
private: System::Windows::Forms::Button^  button101;

private: System::Windows::Forms::Button^  button104;
private: System::Windows::Forms::Button^  button103;

private: System::Windows::Forms::Button^  button107;
private: System::Windows::Forms::Button^  button106;
private: System::Windows::Forms::Button^  button110;
private: System::Windows::Forms::Button^  button109;
private: System::Windows::Forms::Button^  button111;
private: System::Windows::Forms::Button^  button112;
private: System::Windows::Forms::Button^  button113;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::PictureBox^  pictureBox19;
private: System::Windows::Forms::DataGridView^  dataGridView19;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn26;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn27;


private: System::Windows::Forms::PrintDialog^  printDialog2;
private: System::Drawing::Printing::PrintDocument^  printDocument2;
private: System::Windows::Forms::TabPage^  tabPage30;
private: System::Windows::Forms::Button^  button105;
private: System::Windows::Forms::Button^  button86;
private: System::Windows::Forms::Button^  button52;
private: System::Windows::Forms::DataGridView^  dataGridView16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn15;
private: System::Windows::Forms::Label^  label224;
private: System::Windows::Forms::Button^  button108;
private: System::Windows::Forms::TextBox^  textBox105;
private: System::Windows::Forms::Label^  label165;
private: System::Windows::Forms::TextBox^  textBox104;
private: System::Windows::Forms::Label^  label164;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column34;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column39;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column40;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column41;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column42;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column43;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column44;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column45;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column46;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column47;
private: System::Windows::Forms::Button^  button114;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column51;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column52;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column53;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column54;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column55;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column56;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column57;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn28;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn31;














































































































































	public: 
		String^operation;
	
	public: 
	
			 
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;








	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::TabPage^  tabPage2;









	private: System::Windows::Forms::TabPage^  tabPage3;

	private: System::Windows::Forms::Button^  button9;

	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Button^  button16;
		 private: System::Windows::Forms::TabPage^  tabPage7;
			 private: System::Windows::Forms::TabControl^  tabControl2;
private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::DataGridView^  dataGridView10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column35;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column36;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column37;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column38;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle25 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle26 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle27 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle28 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle29 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle30 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle32 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle33 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle34 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle31 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle35 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle36 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle37 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle38 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle39 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle40 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle41 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle42 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle43 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle45 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle44 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle46 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle47 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle48 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle49 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle50 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle51 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle52 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle53 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle54 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle55 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle56 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle57 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle58 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle59 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle60 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle61 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle62 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle63 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle64 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle65 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle66 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle67 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle68 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle69 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle70 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle71 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle72 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle73 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle74 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle75 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle76 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle77 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle78 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle79 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle80 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle81 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle82 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle83 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle84 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle85 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle86 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle87 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle88 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle89 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle90 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle91 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle92 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle93 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label223 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView10 = (gcnew System::Windows::Forms::DataGridView());
			this->Column35 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column36 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column37 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column38 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->textBox107 = (gcnew System::Windows::Forms::TextBox());
			this->label168 = (gcnew System::Windows::Forms::Label());
			this->dataGridView27 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn35 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn36 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn37 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn38 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn39 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn40 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->tabPage17 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView12 = (gcnew System::Windows::Forms::DataGridView());
			this->Column58 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column59 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column60 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->textBox105 = (gcnew System::Windows::Forms::TextBox());
			this->label165 = (gcnew System::Windows::Forms::Label());
			this->textBox104 = (gcnew System::Windows::Forms::TextBox());
			this->label164 = (gcnew System::Windows::Forms::Label());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->textBox103 = (gcnew System::Windows::Forms::TextBox());
			this->label163 = (gcnew System::Windows::Forms::Label());
			this->textBox102 = (gcnew System::Windows::Forms::TextBox());
			this->label162 = (gcnew System::Windows::Forms::Label());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->dataGridView9 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->dataGridView8 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->Column30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column33 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Column34 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column39 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column40 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column41 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column42 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column43 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column44 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column45 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column46 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column47 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
			this->button100 = (gcnew System::Windows::Forms::Button());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->dataGridView11 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->Column51 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column52 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column53 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column54 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column55 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column56 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column57 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->tabPage18 = (gcnew System::Windows::Forms::TabPage());
			this->button102 = (gcnew System::Windows::Forms::Button());
			this->button101 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->textBox106 = (gcnew System::Windows::Forms::TextBox());
			this->label167 = (gcnew System::Windows::Forms::Label());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->label166 = (gcnew System::Windows::Forms::Label());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->textBox63 = (gcnew System::Windows::Forms::TextBox());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->textBox64 = (gcnew System::Windows::Forms::TextBox());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->dataGridView14 = (gcnew System::Windows::Forms::DataGridView());
			this->Column69 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column70 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column71 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column72 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column73 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column74 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column75 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column76 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column77 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->textBox60 = (gcnew System::Windows::Forms::TextBox());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->dataGridView13 = (gcnew System::Windows::Forms::DataGridView());
			this->Column48 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column49 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column50 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column61 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column62 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column63 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column64 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column65 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column66 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column67 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column68 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->tabPage19 = (gcnew System::Windows::Forms::TabPage());
			this->button114 = (gcnew System::Windows::Forms::Button());
			this->button104 = (gcnew System::Windows::Forms::Button());
			this->button103 = (gcnew System::Windows::Forms::Button());
			this->label189 = (gcnew System::Windows::Forms::Label());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->dataGridView17 = (gcnew System::Windows::Forms::DataGridView());
			this->Column87 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column88 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column89 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column90 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->dataGridView15 = (gcnew System::Windows::Forms::DataGridView());
			this->Column78 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column79 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column80 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column81 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column82 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column83 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column85 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column86 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->tabPage30 = (gcnew System::Windows::Forms::TabPage());
			this->button108 = (gcnew System::Windows::Forms::Button());
			this->button105 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->dataGridView16 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label224 = (gcnew System::Windows::Forms::Label());
			this->tabPage24 = (gcnew System::Windows::Forms::TabPage());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->textBox73 = (gcnew System::Windows::Forms::TextBox());
			this->label125 = (gcnew System::Windows::Forms::Label());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->textBox81 = (gcnew System::Windows::Forms::TextBox());
			this->label133 = (gcnew System::Windows::Forms::Label());
			this->label132 = (gcnew System::Windows::Forms::Label());
			this->textBox80 = (gcnew System::Windows::Forms::TextBox());
			this->label131 = (gcnew System::Windows::Forms::Label());
			this->textBox79 = (gcnew System::Windows::Forms::TextBox());
			this->label130 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->textBox78 = (gcnew System::Windows::Forms::TextBox());
			this->textBox77 = (gcnew System::Windows::Forms::TextBox());
			this->textBox76 = (gcnew System::Windows::Forms::TextBox());
			this->textBox75 = (gcnew System::Windows::Forms::TextBox());
			this->textBox74 = (gcnew System::Windows::Forms::TextBox());
			this->label128 = (gcnew System::Windows::Forms::Label());
			this->label127 = (gcnew System::Windows::Forms::Label());
			this->label126 = (gcnew System::Windows::Forms::Label());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->tabPage20 = (gcnew System::Windows::Forms::TabPage());
			this->button107 = (gcnew System::Windows::Forms::Button());
			this->button106 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->textBox65 = (gcnew System::Windows::Forms::TextBox());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->dataGridView20 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->dataGridView19 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->dataGridView18 = (gcnew System::Windows::Forms::DataGridView());
			this->Column91 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column92 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column93 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column94 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage25 = (gcnew System::Windows::Forms::TabPage());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->textBox122 = (gcnew System::Windows::Forms::TextBox());
			this->label186 = (gcnew System::Windows::Forms::Label());
			this->label185 = (gcnew System::Windows::Forms::Label());
			this->textBox121 = (gcnew System::Windows::Forms::TextBox());
			this->label184 = (gcnew System::Windows::Forms::Label());
			this->textBox120 = (gcnew System::Windows::Forms::TextBox());
			this->label176 = (gcnew System::Windows::Forms::Label());
			this->textBox115 = (gcnew System::Windows::Forms::TextBox());
			this->label174 = (gcnew System::Windows::Forms::Label());
			this->textBox114 = (gcnew System::Windows::Forms::TextBox());
			this->label175 = (gcnew System::Windows::Forms::Label());
			this->textBox113 = (gcnew System::Windows::Forms::TextBox());
			this->textBox112 = (gcnew System::Windows::Forms::TextBox());
			this->label173 = (gcnew System::Windows::Forms::Label());
			this->textBox111 = (gcnew System::Windows::Forms::TextBox());
			this->label172 = (gcnew System::Windows::Forms::Label());
			this->textBox110 = (gcnew System::Windows::Forms::TextBox());
			this->label171 = (gcnew System::Windows::Forms::Label());
			this->textBox109 = (gcnew System::Windows::Forms::TextBox());
			this->label170 = (gcnew System::Windows::Forms::Label());
			this->textBox108 = (gcnew System::Windows::Forms::TextBox());
			this->label169 = (gcnew System::Windows::Forms::Label());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->label149 = (gcnew System::Windows::Forms::Label());
			this->textBox92 = (gcnew System::Windows::Forms::TextBox());
			this->label148 = (gcnew System::Windows::Forms::Label());
			this->textBox91 = (gcnew System::Windows::Forms::TextBox());
			this->label147 = (gcnew System::Windows::Forms::Label());
			this->textBox90 = (gcnew System::Windows::Forms::TextBox());
			this->label146 = (gcnew System::Windows::Forms::Label());
			this->textBox89 = (gcnew System::Windows::Forms::TextBox());
			this->label145 = (gcnew System::Windows::Forms::Label());
			this->label144 = (gcnew System::Windows::Forms::Label());
			this->textBox88 = (gcnew System::Windows::Forms::TextBox());
			this->label143 = (gcnew System::Windows::Forms::Label());
			this->label142 = (gcnew System::Windows::Forms::Label());
			this->label140 = (gcnew System::Windows::Forms::Label());
			this->textBox86 = (gcnew System::Windows::Forms::TextBox());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->textBox87 = (gcnew System::Windows::Forms::TextBox());
			this->label139 = (gcnew System::Windows::Forms::Label());
			this->label138 = (gcnew System::Windows::Forms::Label());
			this->textBox85 = (gcnew System::Windows::Forms::TextBox());
			this->label137 = (gcnew System::Windows::Forms::Label());
			this->textBox84 = (gcnew System::Windows::Forms::TextBox());
			this->label136 = (gcnew System::Windows::Forms::Label());
			this->textBox83 = (gcnew System::Windows::Forms::TextBox());
			this->label135 = (gcnew System::Windows::Forms::Label());
			this->tabPage28 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->textBox123 = (gcnew System::Windows::Forms::TextBox());
			this->textBox124 = (gcnew System::Windows::Forms::TextBox());
			this->label187 = (gcnew System::Windows::Forms::Label());
			this->label188 = (gcnew System::Windows::Forms::Label());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->textBox118 = (gcnew System::Windows::Forms::TextBox());
			this->textBox119 = (gcnew System::Windows::Forms::TextBox());
			this->label181 = (gcnew System::Windows::Forms::Label());
			this->label182 = (gcnew System::Windows::Forms::Label());
			this->label183 = (gcnew System::Windows::Forms::Label());
			this->textBox116 = (gcnew System::Windows::Forms::TextBox());
			this->textBox117 = (gcnew System::Windows::Forms::TextBox());
			this->label178 = (gcnew System::Windows::Forms::Label());
			this->label179 = (gcnew System::Windows::Forms::Label());
			this->label180 = (gcnew System::Windows::Forms::Label());
			this->label177 = (gcnew System::Windows::Forms::Label());
			this->textBox71 = (gcnew System::Windows::Forms::TextBox());
			this->textBox72 = (gcnew System::Windows::Forms::TextBox());
			this->label120 = (gcnew System::Windows::Forms::Label());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->textBox70 = (gcnew System::Windows::Forms::TextBox());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->label119 = (gcnew System::Windows::Forms::Label());
			this->dataGridView26 = (gcnew System::Windows::Forms::DataGridView());
			this->Column103 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column104 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column105 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->textBox69 = (gcnew System::Windows::Forms::TextBox());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->textBox67 = (gcnew System::Windows::Forms::TextBox());
			this->textBox66 = (gcnew System::Windows::Forms::TextBox());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->tabPage21 = (gcnew System::Windows::Forms::TabPage());
			this->button110 = (gcnew System::Windows::Forms::Button());
			this->button109 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox134 = (gcnew System::Windows::Forms::TextBox());
			this->label208 = (gcnew System::Windows::Forms::Label());
			this->textBox130 = (gcnew System::Windows::Forms::TextBox());
			this->textBox131 = (gcnew System::Windows::Forms::TextBox());
			this->label202 = (gcnew System::Windows::Forms::Label());
			this->label203 = (gcnew System::Windows::Forms::Label());
			this->label204 = (gcnew System::Windows::Forms::Label());
			this->textBox132 = (gcnew System::Windows::Forms::TextBox());
			this->textBox133 = (gcnew System::Windows::Forms::TextBox());
			this->label205 = (gcnew System::Windows::Forms::Label());
			this->label206 = (gcnew System::Windows::Forms::Label());
			this->label207 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox129 = (gcnew System::Windows::Forms::TextBox());
			this->label201 = (gcnew System::Windows::Forms::Label());
			this->textBox127 = (gcnew System::Windows::Forms::TextBox());
			this->textBox128 = (gcnew System::Windows::Forms::TextBox());
			this->label198 = (gcnew System::Windows::Forms::Label());
			this->label199 = (gcnew System::Windows::Forms::Label());
			this->label200 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox126 = (gcnew System::Windows::Forms::TextBox());
			this->textBox125 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label192 = (gcnew System::Windows::Forms::Label());
			this->label193 = (gcnew System::Windows::Forms::Label());
			this->label194 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label195 = (gcnew System::Windows::Forms::Label());
			this->label196 = (gcnew System::Windows::Forms::Label());
			this->label197 = (gcnew System::Windows::Forms::Label());
			this->label191 = (gcnew System::Windows::Forms::Label());
			this->label190 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->textBox93 = (gcnew System::Windows::Forms::TextBox());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->textBox82 = (gcnew System::Windows::Forms::TextBox());
			this->label134 = (gcnew System::Windows::Forms::Label());
			this->dataGridView22 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->dataGridView21 = (gcnew System::Windows::Forms::DataGridView());
			this->Column95 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column96 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->tabPage29 = (gcnew System::Windows::Forms::TabPage());
			this->button111 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->textBox94 = (gcnew System::Windows::Forms::TextBox());
			this->label151 = (gcnew System::Windows::Forms::Label());
			this->dataGridView23 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn33 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->tabPage22 = (gcnew System::Windows::Forms::TabPage());
			this->button112 = (gcnew System::Windows::Forms::Button());
			this->textBox148 = (gcnew System::Windows::Forms::TextBox());
			this->label222 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label217 = (gcnew System::Windows::Forms::Label());
			this->label216 = (gcnew System::Windows::Forms::Label());
			this->label215 = (gcnew System::Windows::Forms::Label());
			this->label214 = (gcnew System::Windows::Forms::Label());
			this->textBox140 = (gcnew System::Windows::Forms::TextBox());
			this->textBox141 = (gcnew System::Windows::Forms::TextBox());
			this->textBox143 = (gcnew System::Windows::Forms::TextBox());
			this->textBox142 = (gcnew System::Windows::Forms::TextBox());
			this->textBox139 = (gcnew System::Windows::Forms::TextBox());
			this->textBox138 = (gcnew System::Windows::Forms::TextBox());
			this->textBox137 = (gcnew System::Windows::Forms::TextBox());
			this->textBox136 = (gcnew System::Windows::Forms::TextBox());
			this->textBox135 = (gcnew System::Windows::Forms::TextBox());
			this->label213 = (gcnew System::Windows::Forms::Label());
			this->label212 = (gcnew System::Windows::Forms::Label());
			this->label211 = (gcnew System::Windows::Forms::Label());
			this->label210 = (gcnew System::Windows::Forms::Label());
			this->label209 = (gcnew System::Windows::Forms::Label());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->textBox97 = (gcnew System::Windows::Forms::TextBox());
			this->label156 = (gcnew System::Windows::Forms::Label());
			this->textBox96 = (gcnew System::Windows::Forms::TextBox());
			this->label153 = (gcnew System::Windows::Forms::Label());
			this->label155 = (gcnew System::Windows::Forms::Label());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->textBox95 = (gcnew System::Windows::Forms::TextBox());
			this->label154 = (gcnew System::Windows::Forms::Label());
			this->label152 = (gcnew System::Windows::Forms::Label());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->dataGridView24 = (gcnew System::Windows::Forms::DataGridView());
			this->Column97 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column98 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column99 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage23 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage27 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox147 = (gcnew System::Windows::Forms::TextBox());
			this->label221 = (gcnew System::Windows::Forms::Label());
			this->textBox146 = (gcnew System::Windows::Forms::TextBox());
			this->textBox145 = (gcnew System::Windows::Forms::TextBox());
			this->textBox144 = (gcnew System::Windows::Forms::TextBox());
			this->label220 = (gcnew System::Windows::Forms::Label());
			this->label219 = (gcnew System::Windows::Forms::Label());
			this->label218 = (gcnew System::Windows::Forms::Label());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->textBox101 = (gcnew System::Windows::Forms::TextBox());
			this->label161 = (gcnew System::Windows::Forms::Label());
			this->textBox100 = (gcnew System::Windows::Forms::TextBox());
			this->label160 = (gcnew System::Windows::Forms::Label());
			this->textBox99 = (gcnew System::Windows::Forms::TextBox());
			this->label159 = (gcnew System::Windows::Forms::Label());
			this->textBox98 = (gcnew System::Windows::Forms::TextBox());
			this->label158 = (gcnew System::Windows::Forms::Label());
			this->label157 = (gcnew System::Windows::Forms::Label());
			this->tabPage26 = (gcnew System::Windows::Forms::TabPage());
			this->button113 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->label110 = (gcnew System::Windows::Forms::Label());
			this->dataGridView25 = (gcnew System::Windows::Forms::DataGridView());
			this->Column100 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column101 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->printDialog2 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument2 = (gcnew System::Drawing::Printing::PrintDocument());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView10))->BeginInit();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->tabPage9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			this->tabPage10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			this->tabPage17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->tabPage6->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			this->tabPage12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView5))->BeginInit();
			this->tabPage13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView6))->BeginInit();
			this->tabPage14->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->tabPage15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView4))->BeginInit();
			this->tabPage16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView7))->BeginInit();
			this->tabPage18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView13))->BeginInit();
			this->tabPage19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView15))->BeginInit();
			this->tabPage30->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView16))->BeginInit();
			this->tabPage24->SuspendLayout();
			this->tabPage20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView18))->BeginInit();
			this->tabPage25->SuspendLayout();
			this->tabPage28->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView26))->BeginInit();
			this->tabPage21->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView21))->BeginInit();
			this->tabPage29->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView23))->BeginInit();
			this->tabPage22->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView24))->BeginInit();
			this->tabPage23->SuspendLayout();
			this->tabControl5->SuspendLayout();
			this->tabPage27->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->tabPage26->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView25))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage14);
			this->tabControl1->Controls->Add(this->tabPage23);
			this->tabControl1->Location = System::Drawing::Point(0, -1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(2000, 1035);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1992, 1006);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(750, 504);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(479, 258);
			this->button2->TabIndex = 9;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage2->Controls->Add(this->pictureBox19);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->button37);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1992, 1006);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(669, 184);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(610, 299);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox19->TabIndex = 71;
			this->pictureBox19->TabStop = false;
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(1562, 845);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(148, 86);
			this->button6->TabIndex = 70;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(25, 20);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 78);
			this->button1->TabIndex = 69;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button37
			// 
			this->button37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button37.BackgroundImage")));
			this->button37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button37->FlatAppearance->BorderSize = 0;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Location = System::Drawing::Point(1716, 845);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(180, 92);
			this->button37->TabIndex = 65;
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click_1);
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage3->Controls->Add(this->label223);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->button11);
			this->tabPage3->Controls->Add(this->button12);
			this->tabPage3->Controls->Add(this->button13);
			this->tabPage3->Controls->Add(this->button14);
			this->tabPage3->Controls->Add(this->button15);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1992, 1006);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &MyForm::tabPage3_Click);
			// 
			// label223
			// 
			this->label223->AutoSize = true;
			this->label223->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label223->Location = System::Drawing::Point(876, 19);
			this->label223->Name = L"label223";
			this->label223->Size = System::Drawing::Size(149, 55);
			this->label223->TabIndex = 16;
			this->label223->Text = L"Меню";
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(1730, 800);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(127, 106);
			this->button9->TabIndex = 14;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(1065, 297);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(498, 83);
			this->button11->TabIndex = 12;
			this->button11->Text = L"РОЗРАХУНОК ПОКАЗНИКІВ ЕКОНОМІЧНОЇ ЕФЕКТИВНОСТІ ВІД ВПРОВАДЖЕННЯ ЗАХОДІВ ПО ЗНИЖЕН" 
				L"НЮ СОБІВАРТОСТІ";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(1065, 191);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(498, 83);
			this->button12->TabIndex = 11;
			this->button12->Text = L"РОЗРАХУНОК ЦЕХОВОЇ СОБІВАРТОСТІ СПРОЕКТОВАНОГО ВИРОБУ";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(548, 398);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(498, 83);
			this->button13->TabIndex = 10;
			this->button13->Text = L"ВИЗНАЧЕННЯ ЧИСЕЛЬНОСТІ ПРАЦІВНИКІВ НА ДІЛЬНИЦІ";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(548, 297);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(498, 83);
			this->button14->TabIndex = 9;
			this->button14->Text = L"ВИЗНАЧЕННЯ ПОТРІБНОЇ КІЛЬКОСТІ ОБЛАДНАННЯ ТА ВИРОБНИЧОЇ ПЛОЩІ ДІЛЬНИЦІ";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(548, 191);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(498, 83);
			this->button15->TabIndex = 8;
			this->button15->Text = L"ОРГАНІЗАЦІЯ ВИРОБНИЧОЇ ДІЛЬНИЦІ ТА РОЗРАХУНОК КАЛЕНДАРНО-ПЛАНОВИХ НОРМАТИВІВ";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::White;
			this->tabPage4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage4.BackgroundImage")));
			this->tabPage4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage4->Controls->Add(this->label84);
			this->tabPage4->Controls->Add(this->button35);
			this->tabPage4->Controls->Add(this->button16);
			this->tabPage4->Controls->Add(this->textBox30);
			this->tabPage4->Controls->Add(this->label33);
			this->tabPage4->Controls->Add(this->pictureBox7);
			this->tabPage4->Controls->Add(this->textBox29);
			this->tabPage4->Controls->Add(this->label32);
			this->tabPage4->Controls->Add(this->pictureBox6);
			this->tabPage4->Controls->Add(this->label31);
			this->tabPage4->Controls->Add(this->label23);
			this->tabPage4->Controls->Add(this->textBox28);
			this->tabPage4->Controls->Add(this->label30);
			this->tabPage4->Controls->Add(this->pictureBox5);
			this->tabPage4->Controls->Add(this->label29);
			this->tabPage4->Controls->Add(this->textBox27);
			this->tabPage4->Controls->Add(this->label28);
			this->tabPage4->Controls->Add(this->pictureBox4);
			this->tabPage4->Controls->Add(this->label27);
			this->tabPage4->Controls->Add(this->textBox26);
			this->tabPage4->Controls->Add(this->label26);
			this->tabPage4->Controls->Add(this->label25);
			this->tabPage4->Controls->Add(this->pictureBox3);
			this->tabPage4->Controls->Add(this->textBox25);
			this->tabPage4->Controls->Add(this->label24);
			this->tabPage4->Controls->Add(this->pictureBox2);
			this->tabPage4->Controls->Add(this->textBox24);
			this->tabPage4->Controls->Add(this->label22);
			this->tabPage4->Controls->Add(this->pictureBox1);
			this->tabPage4->Controls->Add(this->label21);
			this->tabPage4->Controls->Add(this->label20);
			this->tabPage4->Controls->Add(this->label18);
			this->tabPage4->Controls->Add(this->textBox14);
			this->tabPage4->Controls->Add(this->textBox15);
			this->tabPage4->Controls->Add(this->textBox16);
			this->tabPage4->Controls->Add(this->textBox17);
			this->tabPage4->Controls->Add(this->textBox18);
			this->tabPage4->Controls->Add(this->label14);
			this->tabPage4->Controls->Add(this->label15);
			this->tabPage4->Controls->Add(this->label16);
			this->tabPage4->Controls->Add(this->label17);
			this->tabPage4->Controls->Add(this->textBox7);
			this->tabPage4->Controls->Add(this->textBox8);
			this->tabPage4->Controls->Add(this->textBox9);
			this->tabPage4->Controls->Add(this->textBox10);
			this->tabPage4->Controls->Add(this->textBox11);
			this->tabPage4->Controls->Add(this->textBox12);
			this->tabPage4->Controls->Add(this->textBox13);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Controls->Add(this->label8);
			this->tabPage4->Controls->Add(this->label9);
			this->tabPage4->Controls->Add(this->label10);
			this->tabPage4->Controls->Add(this->label11);
			this->tabPage4->Controls->Add(this->label12);
			this->tabPage4->Controls->Add(this->label13);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1992, 1006);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->Click += gcnew System::EventHandler(this, &MyForm::tabPage4_Click);
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label84->Location = System::Drawing::Point(1231, 512);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(32, 32);
			this->label84->TabIndex = 72;
			this->label84->Text = L"=";
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::Transparent;
			this->button35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button35.BackgroundImage")));
			this->button35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button35->FlatAppearance->BorderSize = 0;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button35->Location = System::Drawing::Point(1626, 851);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(163, 116);
			this->button35->TabIndex = 71;
			this->button35->Text = L"Далі";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Transparent;
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(597, 397);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(125, 67);
			this->button16->TabIndex = 70;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// textBox30
			// 
			this->textBox30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox30->Location = System::Drawing::Point(1169, 900);
			this->textBox30->Multiline = true;
			this->textBox30->Name = L"textBox30";
			this->textBox30->ReadOnly = true;
			this->textBox30->Size = System::Drawing::Size(115, 43);
			this->textBox30->TabIndex = 69;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(1137, 906);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(32, 32);
			this->label33->TabIndex = 68;
			this->label33->Text = L"=";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(884, 889);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(249, 67);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 67;
			this->pictureBox7->TabStop = false;
			// 
			// textBox29
			// 
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox29->Location = System::Drawing::Point(1175, 761);
			this->textBox29->Multiline = true;
			this->textBox29->Name = L"textBox29";
			this->textBox29->ReadOnly = true;
			this->textBox29->Size = System::Drawing::Size(122, 43);
			this->textBox29->TabIndex = 66;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(1143, 767);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(32, 32);
			this->label32->TabIndex = 65;
			this->label32->Text = L"=";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(890, 750);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(249, 67);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 64;
			this->pictureBox6->TabStop = false;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::White;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(879, 688);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(403, 50);
			this->label31->TabIndex = 63;
			this->label31->Text = L"Період запуску деталей у виробництві\r\n (ритм запуску):\r\n";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::White;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(880, 851);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(427, 25);
			this->label23->TabIndex = 62;
			this->label23->Text = L"Кількість запусків партій деталей на рік:\r\n";
			// 
			// textBox28
			// 
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox28->Location = System::Drawing::Point(1175, 601);
			this->textBox28->Multiline = true;
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(112, 43);
			this->textBox28->TabIndex = 61;
			this->textBox28->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox28_TextChanged);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(1143, 607);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(32, 32);
			this->label30->TabIndex = 60;
			this->label30->Text = L"=";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(890, 590);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(249, 67);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 59;
			this->pictureBox5->TabStop = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::White;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(907, 557);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(314, 25);
			this->label29->TabIndex = 58;
			this->label29->Text = L"Добовий випуск деталей, шт.\r\n";
			// 
			// textBox27
			// 
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox27->Location = System::Drawing::Point(358, 945);
			this->textBox27->Multiline = true;
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(120, 43);
			this->textBox27->TabIndex = 57;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(326, 951);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(32, 32);
			this->label28->TabIndex = 56;
			this->label28->Text = L"=";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(81, 938);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(239, 61);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 55;
			this->pictureBox4->TabStop = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(41, 872);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(549, 50);
			this->label27->TabIndex = 54;
			this->label27->Text = L"Кількість деталей в партії (по укрупненому способу)\r\n визначається за формулою:\r\n" 
				L"";
			// 
			// textBox26
			// 
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox26->Location = System::Drawing::Point(349, 796);
			this->textBox26->Multiline = true;
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(116, 43);
			this->textBox26->TabIndex = 53;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(317, 802);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(32, 32);
			this->label26->TabIndex = 52;
			this->label26->Text = L"=";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(62, 759);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(472, 25);
			this->label25->TabIndex = 51;
			this->label25->Text = L"Такт запуску деталі на поточній лінії, хв./шт.";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(83, 787);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(229, 65);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 50;
			this->pictureBox3->TabStop = false;
			// 
			// textBox25
			// 
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox25->Location = System::Drawing::Point(550, 691);
			this->textBox25->Multiline = true;
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(128, 43);
			this->textBox25->TabIndex = 49;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(512, 697);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(32, 32);
			this->label24->TabIndex = 48;
			this->label24->Text = L"=";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(48, 684);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(453, 60);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 47;
			this->pictureBox2->TabStop = false;
			// 
			// textBox24
			// 
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox24->Location = System::Drawing::Point(364, 550);
			this->textBox24->Multiline = true;
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(137, 43);
			this->textBox24->TabIndex = 46;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(326, 557);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(32, 32);
			this->label22->TabIndex = 45;
			this->label22->Text = L"=";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(65, 543);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(255, 73);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 44;
			this->pictureBox1->TabStop = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(60, 473);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(330, 50);
			this->label21->TabIndex = 43;
			this->label21->Text = L"Річна програма запуску деталі,\r\n оброблюваної на дільниці, шт.\r\n";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(48, 655);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(664, 25);
			this->label20->TabIndex = 42;
			this->label20->Text = L"дійсний річний фонд часу роботи устаткування (робочих місць)";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(760, 83);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(156, 25);
			this->label18->TabIndex = 37;
			this->label18->Text = L"кількість змін";
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox14->Location = System::Drawing::Point(1269, 509);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(110, 45);
			this->textBox14->TabIndex = 36;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox15->Location = System::Drawing::Point(1390, 223);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(99, 27);
			this->textBox15->TabIndex = 34;
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox16->Location = System::Drawing::Point(1390, 151);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 27);
			this->textBox16->TabIndex = 32;
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox17->Location = System::Drawing::Point(1389, 94);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 27);
			this->textBox17->TabIndex = 30;
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox18->Location = System::Drawing::Point(1389, 31);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 27);
			this->textBox18->TabIndex = 29;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(913, 509);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(274, 25);
			this->label14->TabIndex = 35;
			this->label14->Text = L"Число робочих днів у році";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(760, 221);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(510, 50);
			this->label15->TabIndex = 33;
			this->label15->Text = L"чило днів, на яке треба мати запис деталей для\r\n безперервної роботи складального" 
				L" цеху, днів";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(760, 140);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(392, 50);
			this->label16->TabIndex = 31;
			this->label16->Text = L"Коефіцієнт який враховує час \r\nперебування верстата  ремонтуванні";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(760, 34);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(496, 25);
			this->label17->TabIndex = 28;
			this->label17->Text = L"час, на який скорочено день перед святом, год";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(446, 352);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 27);
			this->textBox7->TabIndex = 27;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(446, 295);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 27);
			this->textBox8->TabIndex = 26;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(446, 236);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 27);
			this->textBox9->TabIndex = 25;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(446, 176);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 27);
			this->textBox10->TabIndex = 24;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(446, 125);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 27);
			this->textBox11->TabIndex = 19;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(446, 69);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 27);
			this->textBox12->TabIndex = 17;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox13->Location = System::Drawing::Point(446, 16);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 27);
			this->textBox13->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(15, 354);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(292, 25);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Тривалість зміни в годинах";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(15, 294);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(198, 25);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Передсвяткові дні";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(15, 235);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(137, 25);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Святкові дні";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(15, 178);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(119, 25);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Вихідні дні";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(15, 125);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(244, 25);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Введіть дні календарні";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(15, 72);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(336, 25);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Введіть технолоічні витрати, %";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(16, 19);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(374, 25);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Введіть річну програму випуску, шт";
			// 
			// tabPage5
			// 
			this->tabPage5->AutoScroll = true;
			this->tabPage5->Controls->Add(this->tabControl2);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(1992, 1006);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"tabPage5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Controls->Add(this->tabPage8);
			this->tabControl2->Controls->Add(this->tabPage9);
			this->tabControl2->Controls->Add(this->tabPage10);
			this->tabControl2->Controls->Add(this->tabPage17);
			this->tabControl2->Location = System::Drawing::Point(3, 3);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(2000, 1126);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage7
			// 
			this->tabPage7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage7.BackgroundImage")));
			this->tabPage7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage7->Controls->Add(this->button82);
			this->tabPage7->Controls->Add(this->button74);
			this->tabPage7->Controls->Add(this->button18);
			this->tabPage7->Controls->Add(this->button17);
			this->tabPage7->Controls->Add(this->label38);
			this->tabPage7->Controls->Add(this->label35);
			this->tabPage7->Controls->Add(this->textBox31);
			this->tabPage7->Controls->Add(this->label36);
			this->tabPage7->Controls->Add(this->pictureBox8);
			this->tabPage7->Controls->Add(this->label19);
			this->tabPage7->Controls->Add(this->label34);
			this->tabPage7->Controls->Add(this->textBox19);
			this->tabPage7->Controls->Add(this->dataGridView10);
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(1992, 1097);
			this->tabPage7->TabIndex = 0;
			this->tabPage7->Text = L"Розрахунок трудомісткості";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// button82
			// 
			this->button82->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button82.BackgroundImage")));
			this->button82->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button82->FlatAppearance->BorderSize = 0;
			this->button82->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button82->Location = System::Drawing::Point(1280, 786);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(115, 97);
			this->button82->TabIndex = 76;
			this->button82->UseVisualStyleBackColor = true;
			this->button82->Click += gcnew System::EventHandler(this, &MyForm::button82_Click);
			// 
			// button74
			// 
			this->button74->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button74.BackgroundImage")));
			this->button74->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button74->FlatAppearance->BorderSize = 0;
			this->button74->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button74->Location = System::Drawing::Point(1401, 766);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(115, 128);
			this->button74->TabIndex = 75;
			this->button74->UseVisualStyleBackColor = true;
			this->button74->Click += gcnew System::EventHandler(this, &MyForm::button74_Click);
			// 
			// button18
			// 
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(1705, 781);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(127, 99);
			this->button18->TabIndex = 74;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Visible = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button17
			// 
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Location = System::Drawing::Point(1555, 781);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(114, 99);
			this->button17->TabIndex = 73;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label38->Location = System::Drawing::Point(1107, 229);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(0, 25);
			this->label38->TabIndex = 72;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(1148, 84);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(353, 25);
			this->label35->TabIndex = 71;
			this->label35->Text = L"Коефіцієнт закріплення операцій";
			// 
			// textBox31
			// 
			this->textBox31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox31->Location = System::Drawing::Point(1444, 132);
			this->textBox31->Multiline = true;
			this->textBox31->Name = L"textBox31";
			this->textBox31->ReadOnly = true;
			this->textBox31->Size = System::Drawing::Size(130, 49);
			this->textBox31->TabIndex = 70;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label36->Location = System::Drawing::Point(1412, 138);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(32, 32);
			this->label36->TabIndex = 69;
			this->label36->Text = L"=";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(1151, 112);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(255, 79);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 68;
			this->pictureBox8->TabStop = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(220, 14);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(800, 38);
			this->label19->TabIndex = 67;
			this->label19->Text = L"Розрахунок трудомісткості виготовлення деталі";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label34->Location = System::Drawing::Point(55, 69);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(320, 33);
			this->label34->TabIndex = 66;
			this->label34->Text = L"Введіть кількість операцій";
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox19->Location = System::Drawing::Point(401, 71);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(100, 30);
			this->textBox19->TabIndex = 65;
			// 
			// dataGridView10
			// 
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dataGridView10->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView10->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView10->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView10->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView10->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->Column35, 
				this->Column36, this->Column37, this->Column38});
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView10->DefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView10->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView10->Location = System::Drawing::Point(20, 107);
			this->dataGridView10->Name = L"dataGridView10";
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dataGridView10->RowsDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView10->RowTemplate->Height = 24;
			this->dataGridView10->Size = System::Drawing::Size(967, 508);
			this->dataGridView10->TabIndex = 64;
			this->dataGridView10->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView10_CellContentClick);
			// 
			// Column35
			// 
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Column35->DefaultCellStyle = dataGridViewCellStyle3;
			this->Column35->HeaderText = L"Операція";
			this->Column35->Name = L"Column35";
			this->Column35->Width = 160;
			// 
			// Column36
			// 
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Column36->DefaultCellStyle = dataGridViewCellStyle4;
			this->Column36->HeaderText = L"Програма запуску,N(zap)";
			this->Column36->Name = L"Column36";
			this->Column36->ReadOnly = true;
			this->Column36->Width = 150;
			// 
			// Column37
			// 
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Column37->DefaultCellStyle = dataGridViewCellStyle5;
			this->Column37->HeaderText = L"Штучно-калькуляційний час(tшт-к  хв.)";
			this->Column37->Name = L"Column37";
			this->Column37->Width = 220;
			// 
			// Column38
			// 
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Column38->DefaultCellStyle = dataGridViewCellStyle6;
			this->Column38->HeaderText = L"Трудомісткість виготовлення, Трі, нормо-год";
			this->Column38->Name = L"Column38";
			this->Column38->ReadOnly = true;
			this->Column38->Width = 150;
			// 
			// tabPage8
			// 
			this->tabPage8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage8.BackgroundImage")));
			this->tabPage8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage8->Controls->Add(this->button92);
			this->tabPage8->Controls->Add(this->button75);
			this->tabPage8->Controls->Add(this->button47);
			this->tabPage8->Controls->Add(this->textBox51);
			this->tabPage8->Controls->Add(this->label78);
			this->tabPage8->Controls->Add(this->label73);
			this->tabPage8->Controls->Add(this->button38);
			this->tabPage8->Controls->Add(this->button21);
			this->tabPage8->Controls->Add(this->button20);
			this->tabPage8->Controls->Add(this->button19);
			this->tabPage8->Controls->Add(this->dataGridView1);
			this->tabPage8->Controls->Add(this->label37);
			this->tabPage8->Location = System::Drawing::Point(4, 25);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(1992, 1097);
			this->tabPage8->TabIndex = 1;
			this->tabPage8->Text = L"Розрахунок кількості основного технологічного обладнання";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// button92
			// 
			this->button92->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button92.BackgroundImage")));
			this->button92->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button92->FlatAppearance->BorderSize = 0;
			this->button92->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button92->Location = System::Drawing::Point(1064, 847);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(99, 73);
			this->button92->TabIndex = 77;
			this->button92->UseVisualStyleBackColor = true;
			this->button92->Click += gcnew System::EventHandler(this, &MyForm::button92_Click_1);
			// 
			// button75
			// 
			this->button75->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button75.BackgroundImage")));
			this->button75->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button75->FlatAppearance->BorderSize = 0;
			this->button75->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button75->Location = System::Drawing::Point(1180, 829);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(126, 100);
			this->button75->TabIndex = 74;
			this->button75->UseVisualStyleBackColor = true;
			this->button75->Click += gcnew System::EventHandler(this, &MyForm::button75_Click);
			// 
			// button47
			// 
			this->button47->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button47.BackgroundImage")));
			this->button47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button47->FlatAppearance->BorderSize = 0;
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->Location = System::Drawing::Point(1645, 836);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(92, 82);
			this->button47->TabIndex = 72;
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Visible = false;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::button47_Click);
			// 
			// textBox51
			// 
			this->textBox51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox51->Location = System::Drawing::Point(1785, 692);
			this->textBox51->Multiline = true;
			this->textBox51->Name = L"textBox51";
			this->textBox51->ReadOnly = true;
			this->textBox51->Size = System::Drawing::Size(99, 34);
			this->textBox51->TabIndex = 71;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->BackColor = System::Drawing::Color::White;
			this->label78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label78->Location = System::Drawing::Point(1209, 692);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(503, 25);
			this->label78->TabIndex = 70;
			this->label78->Text = L"Середній коефіцієнт завантаження обладнання";
			this->label78->Click += gcnew System::EventHandler(this, &MyForm::label78_Click);
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label73->Location = System::Drawing::Point(993, 55);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(82, 25);
			this->label73->TabIndex = 69;
			this->label73->Text = L"label73";
			// 
			// button38
			// 
			this->button38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button38.BackgroundImage")));
			this->button38->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button38->FlatAppearance->BorderSize = 0;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Location = System::Drawing::Point(1664, 14);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(142, 66);
			this->button38->TabIndex = 68;
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button21
			// 
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(1743, 840);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(101, 78);
			this->button21->TabIndex = 67;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Visible = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button20
			// 
			this->button20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button20.BackgroundImage")));
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(1555, 852);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(84, 73);
			this->button20->TabIndex = 66;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Visible = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(1312, 840);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(197, 80);
			this->button19->TabIndex = 65;
			this->button19->Text = L"Коефициент";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {this->Column1, 
				this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10, 
				this->Column11, this->Column12});
			this->dataGridView1->Location = System::Drawing::Point(21, 98);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1865, 575);
			this->dataGridView1->TabIndex = 64;
			// 
			// Column1
			// 
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column1->DefaultCellStyle = dataGridViewCellStyle10;
			this->Column1->HeaderText = L"Наіменування операцій технологічного процесу";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 200;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Модель верстату";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column3->DefaultCellStyle = dataGridViewCellStyle11;
			this->Column3->HeaderText = L"Норма штучно-калькуляційного часу Т(шт.к) год";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			dataGridViewCellStyle12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column4->DefaultCellStyle = dataGridViewCellStyle12;
			this->Column4->HeaderText = L"Трудомісткість річної програми випуску Трі, норм-год";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 120;
			// 
			// Column5
			// 
			dataGridViewCellStyle13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column5->DefaultCellStyle = dataGridViewCellStyle13;
			this->Column5->HeaderText = L"Трудомісткість довантаження супутнього продукцією, норм-год Т(дов)";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 120;
			// 
			// Column6
			// 
			dataGridViewCellStyle14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column6->DefaultCellStyle = dataGridViewCellStyle14;
			this->Column6->HeaderText = L"Згальна річна трудомісткість операції норм-год. Т(р.заг)";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 120;
			// 
			// Column7
			// 
			dataGridViewCellStyle15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column7->DefaultCellStyle = dataGridViewCellStyle15;
			this->Column7->HeaderText = L"Ефективний річний фонд часу роботи обладнання, F(д.о) годин";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 120;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Коефіцієнт виконання норм часу К(в.н)      ";
			this->Column8->Name = L"Column8";
			this->Column8->Width = 120;
			// 
			// Column9
			// 
			dataGridViewCellStyle16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column9->DefaultCellStyle = dataGridViewCellStyle16;
			this->Column9->HeaderText = L"Коефіцієнт завантаження верстатів без довантаження ";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 120;
			// 
			// Column10
			// 
			dataGridViewCellStyle17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column10->DefaultCellStyle = dataGridViewCellStyle17;
			this->Column10->HeaderText = L"Коефіцієнт завантаження верстатів  з довантаженням";
			this->Column10->Name = L"Column10";
			this->Column10->Width = 120;
			// 
			// Column11
			// 
			dataGridViewCellStyle18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column11->DefaultCellStyle = dataGridViewCellStyle18;
			this->Column11->HeaderText = L"Прийнята кількість верстатів";
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->Width = 120;
			// 
			// Column12
			// 
			dataGridViewCellStyle19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column12->DefaultCellStyle = dataGridViewCellStyle19;
			this->Column12->HeaderText = L"Коефіцієнт завантаження верстатів";
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			this->Column12->Width = 120;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label37->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label37->Location = System::Drawing::Point(240, 14);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(916, 66);
			this->label37->TabIndex = 63;
			this->label37->Text = L"Розрахунок кількості основного технологічного обладнання та  \r\nкоефіцієнт його за" 
				L"вантаження на дільниці";
			// 
			// tabPage9
			// 
			this->tabPage9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage9.BackgroundImage")));
			this->tabPage9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage9->Controls->Add(this->button97);
			this->tabPage9->Controls->Add(this->button96);
			this->tabPage9->Controls->Add(this->label1);
			this->tabPage9->Controls->Add(this->button76);
			this->tabPage9->Controls->Add(this->button67);
			this->tabPage9->Controls->Add(this->textBox107);
			this->tabPage9->Controls->Add(this->label168);
			this->tabPage9->Controls->Add(this->dataGridView27);
			this->tabPage9->Controls->Add(this->button24);
			this->tabPage9->Controls->Add(this->button23);
			this->tabPage9->Controls->Add(this->button22);
			this->tabPage9->Controls->Add(this->textBox21);
			this->tabPage9->Controls->Add(this->label41);
			this->tabPage9->Controls->Add(this->label40);
			this->tabPage9->Controls->Add(this->textBox20);
			this->tabPage9->Controls->Add(this->dataGridView2);
			this->tabPage9->Controls->Add(this->label39);
			this->tabPage9->Location = System::Drawing::Point(4, 25);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(1992, 1097);
			this->tabPage9->TabIndex = 2;
			this->tabPage9->Text = L"Зведена відомість характеристики верстатного обладнання";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// button97
			// 
			this->button97->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button97.BackgroundImage")));
			this->button97->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button97->FlatAppearance->BorderSize = 0;
			this->button97->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button97->Location = System::Drawing::Point(1285, 863);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(79, 72);
			this->button97->TabIndex = 78;
			this->button97->UseVisualStyleBackColor = true;
			this->button97->Click += gcnew System::EventHandler(this, &MyForm::button97_Click);
			// 
			// button96
			// 
			this->button96->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button96.BackgroundImage")));
			this->button96->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button96->FlatAppearance->BorderSize = 0;
			this->button96->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button96->Location = System::Drawing::Point(747, 363);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(77, 79);
			this->button96->TabIndex = 77;
			this->button96->UseVisualStyleBackColor = true;
			this->button96->Click += gcnew System::EventHandler(this, &MyForm::button96_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(454, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 25);
			this->label1->TabIndex = 75;
			this->label1->Text = L"Основне обладнання";
			// 
			// button76
			// 
			this->button76->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button76.BackgroundImage")));
			this->button76->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button76->FlatAppearance->BorderSize = 0;
			this->button76->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button76->Location = System::Drawing::Point(1370, 847);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(108, 97);
			this->button76->TabIndex = 74;
			this->button76->UseVisualStyleBackColor = true;
			this->button76->Click += gcnew System::EventHandler(this, &MyForm::button76_Click);
			// 
			// button67
			// 
			this->button67->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button67.BackgroundImage")));
			this->button67->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button67->FlatAppearance->BorderSize = 0;
			this->button67->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button67->Location = System::Drawing::Point(620, 525);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(58, 39);
			this->button67->TabIndex = 13;
			this->button67->UseVisualStyleBackColor = true;
			this->button67->Click += gcnew System::EventHandler(this, &MyForm::button67_Click);
			// 
			// textBox107
			// 
			this->textBox107->Location = System::Drawing::Point(514, 536);
			this->textBox107->Name = L"textBox107";
			this->textBox107->Size = System::Drawing::Size(100, 22);
			this->textBox107->TabIndex = 12;
			// 
			// label168
			// 
			this->label168->AutoSize = true;
			this->label168->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label168->Location = System::Drawing::Point(37, 536);
			this->label168->Name = L"label168";
			this->label168->Size = System::Drawing::Size(384, 20);
			this->label168->TabIndex = 11;
			this->label168->Text = L"Введіть кількість транспортних засобів";
			// 
			// dataGridView27
			// 
			this->dataGridView27->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle20->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle20->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle20->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle20->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle20->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle20->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView27->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle20;
			this->dataGridView27->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView27->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {this->dataGridViewTextBoxColumn24, 
				this->dataGridViewTextBoxColumn34, this->dataGridViewTextBoxColumn35, this->dataGridViewTextBoxColumn36, this->dataGridViewTextBoxColumn37, 
				this->dataGridViewTextBoxColumn38, this->dataGridViewTextBoxColumn39, this->dataGridViewTextBoxColumn40});
			this->dataGridView27->Location = System::Drawing::Point(27, 564);
			this->dataGridView27->Name = L"dataGridView27";
			this->dataGridView27->RowTemplate->Height = 24;
			this->dataGridView27->Size = System::Drawing::Size(1128, 305);
			this->dataGridView27->TabIndex = 10;
			// 
			// dataGridViewTextBoxColumn24
			// 
			this->dataGridViewTextBoxColumn24->HeaderText = L"№";
			this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
			// 
			// dataGridViewTextBoxColumn34
			// 
			this->dataGridViewTextBoxColumn34->HeaderText = L"Модель";
			this->dataGridViewTextBoxColumn34->Name = L"dataGridViewTextBoxColumn34";
			// 
			// dataGridViewTextBoxColumn35
			// 
			this->dataGridViewTextBoxColumn35->HeaderText = L"Кількість";
			this->dataGridViewTextBoxColumn35->Name = L"dataGridViewTextBoxColumn35";
			// 
			// dataGridViewTextBoxColumn36
			// 
			this->dataGridViewTextBoxColumn36->HeaderText = L"Потужність КВТ";
			this->dataGridViewTextBoxColumn36->Name = L"dataGridViewTextBoxColumn36";
			// 
			// dataGridViewTextBoxColumn37
			// 
			this->dataGridViewTextBoxColumn37->HeaderText = L"ДСТУ";
			this->dataGridViewTextBoxColumn37->Name = L"dataGridViewTextBoxColumn37";
			// 
			// dataGridViewTextBoxColumn38
			// 
			dataGridViewCellStyle21->BackColor = System::Drawing::Color::White;
			this->dataGridViewTextBoxColumn38->DefaultCellStyle = dataGridViewCellStyle21;
			this->dataGridViewTextBoxColumn38->HeaderText = L"Загальна вартість, грн";
			this->dataGridViewTextBoxColumn38->Name = L"dataGridViewTextBoxColumn38";
			// 
			// dataGridViewTextBoxColumn39
			// 
			dataGridViewCellStyle22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGridViewTextBoxColumn39->DefaultCellStyle = dataGridViewCellStyle22;
			this->dataGridViewTextBoxColumn39->HeaderText = L"Вартість ТМВ, грн";
			this->dataGridViewTextBoxColumn39->Name = L"dataGridViewTextBoxColumn39";
			// 
			// dataGridViewTextBoxColumn40
			// 
			dataGridViewCellStyle23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGridViewTextBoxColumn40->DefaultCellStyle = dataGridViewCellStyle23;
			this->dataGridViewTextBoxColumn40->HeaderText = L"Балансова вартість, грн";
			this->dataGridViewTextBoxColumn40->Name = L"dataGridViewTextBoxColumn40";
			this->dataGridViewTextBoxColumn40->ReadOnly = true;
			// 
			// button24
			// 
			this->button24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button24.BackgroundImage")));
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(1588, 855);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(119, 80);
			this->button24->TabIndex = 9;
			this->button24->Text = L"далі";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Visible = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button23
			// 
			this->button23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button23.BackgroundImage")));
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(1475, 855);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(107, 80);
			this->button23->TabIndex = 8;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Visible = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button22
			// 
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(639, 366);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(102, 73);
			this->button22->TabIndex = 7;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(989, 882);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 22);
			this->textBox21->TabIndex = 6;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::White;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label41->Location = System::Drawing::Point(820, 884);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(136, 20);
			this->label41->TabIndex = 5;
			this->label41->Text = L"відсоток ТМВ";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::White;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label40->Location = System::Drawing::Point(439, 497);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(213, 25);
			this->label40->TabIndex = 4;
			this->label40->Text = L"Транспортні засоби";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(1171, 391);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 22);
			this->textBox20->TabIndex = 2;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle24->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle24->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle24->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle24->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle24->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle24->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle24;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {this->Column13, 
				this->Column14, this->Column15, this->Column16, this->Column17, this->Column18, this->Column19, this->Column20, this->Column21});
			this->dataGridView2->Location = System::Drawing::Point(13, 61);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1258, 297);
			this->dataGridView2->TabIndex = 1;
			// 
			// Column13
			// 
			dataGridViewCellStyle25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column13->DefaultCellStyle = dataGridViewCellStyle25;
			this->Column13->HeaderText = L"Операція";
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			// 
			// Column14
			// 
			dataGridViewCellStyle26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column14->DefaultCellStyle = dataGridViewCellStyle26;
			this->Column14->HeaderText = L"Модель верстата";
			this->Column14->Name = L"Column14";
			this->Column14->ReadOnly = true;
			// 
			// Column15
			// 
			dataGridViewCellStyle27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column15->DefaultCellStyle = dataGridViewCellStyle27;
			this->Column15->HeaderText = L"Кількість";
			this->Column15->Name = L"Column15";
			this->Column15->ReadOnly = true;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"Потужність кВт";
			this->Column16->Name = L"Column16";
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Механічна";
			this->Column17->Name = L"Column17";
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"Електрична";
			this->Column18->Name = L"Column18";
			// 
			// Column19
			// 
			this->Column19->HeaderText = L"Загальна вартість, грн";
			this->Column19->Name = L"Column19";
			// 
			// Column20
			// 
			dataGridViewCellStyle28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column20->DefaultCellStyle = dataGridViewCellStyle28;
			this->Column20->HeaderText = L"Витрати на ТМВ, грн";
			this->Column20->Name = L"Column20";
			this->Column20->ReadOnly = true;
			// 
			// Column21
			// 
			dataGridViewCellStyle29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column21->DefaultCellStyle = dataGridViewCellStyle29;
			this->Column21->HeaderText = L"Балансова вартість ";
			this->Column21->Name = L"Column21";
			this->Column21->ReadOnly = true;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::White;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label39->Location = System::Drawing::Point(996, 388);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(136, 20);
			this->label39->TabIndex = 0;
			this->label39->Text = L"відсоток ТМВ";
			// 
			// tabPage10
			// 
			this->tabPage10->BackColor = System::Drawing::Color::White;
			this->tabPage10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage10.BackgroundImage")));
			this->tabPage10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage10->Controls->Add(this->button77);
			this->tabPage10->Controls->Add(this->button26);
			this->tabPage10->Controls->Add(this->button25);
			this->tabPage10->Controls->Add(this->label53);
			this->tabPage10->Controls->Add(this->pictureBox23);
			this->tabPage10->Controls->Add(this->textBox23);
			this->tabPage10->Controls->Add(this->textBox41);
			this->tabPage10->Controls->Add(this->label56);
			this->tabPage10->Controls->Add(this->textBox40);
			this->tabPage10->Controls->Add(this->label55);
			this->tabPage10->Controls->Add(this->pictureBox14);
			this->tabPage10->Controls->Add(this->label54);
			this->tabPage10->Controls->Add(this->textBox39);
			this->tabPage10->Controls->Add(this->label57);
			this->tabPage10->Controls->Add(this->pictureBox13);
			this->tabPage10->Controls->Add(this->textBox38);
			this->tabPage10->Controls->Add(this->label58);
			this->tabPage10->Controls->Add(this->label59);
			this->tabPage10->Controls->Add(this->label50);
			this->tabPage10->Controls->Add(this->pictureBox22);
			this->tabPage10->Controls->Add(this->textBox22);
			this->tabPage10->Controls->Add(this->textBox37);
			this->tabPage10->Controls->Add(this->label51);
			this->tabPage10->Controls->Add(this->pictureBox12);
			this->tabPage10->Controls->Add(this->label52);
			this->tabPage10->Controls->Add(this->textBox32);
			this->tabPage10->Controls->Add(this->textBox36);
			this->tabPage10->Controls->Add(this->label48);
			this->tabPage10->Controls->Add(this->pictureBox11);
			this->tabPage10->Controls->Add(this->textBox35);
			this->tabPage10->Controls->Add(this->label47);
			this->tabPage10->Controls->Add(this->label46);
			this->tabPage10->Controls->Add(this->textBox34);
			this->tabPage10->Controls->Add(this->label45);
			this->tabPage10->Controls->Add(this->pictureBox10);
			this->tabPage10->Controls->Add(this->label44);
			this->tabPage10->Controls->Add(this->textBox33);
			this->tabPage10->Controls->Add(this->label43);
			this->tabPage10->Controls->Add(this->pictureBox9);
			this->tabPage10->Controls->Add(this->label42);
			this->tabPage10->Controls->Add(this->label49);
			this->tabPage10->Location = System::Drawing::Point(4, 25);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Size = System::Drawing::Size(1992, 1097);
			this->tabPage10->TabIndex = 3;
			this->tabPage10->Text = L"Вартість оснащення";
			// 
			// button77
			// 
			this->button77->BackColor = System::Drawing::Color::Transparent;
			this->button77->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button77.BackgroundImage")));
			this->button77->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button77->FlatAppearance->BorderSize = 0;
			this->button77->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button77->Location = System::Drawing::Point(1442, 843);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(132, 105);
			this->button77->TabIndex = 64;
			this->button77->UseVisualStyleBackColor = false;
			this->button77->Click += gcnew System::EventHandler(this, &MyForm::button77_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Transparent;
			this->button26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button26.BackgroundImage")));
			this->button26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(1718, 843);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(132, 92);
			this->button26->TabIndex = 63;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Visible = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Transparent;
			this->button25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button25.BackgroundImage")));
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(1580, 850);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(132, 85);
			this->button25->TabIndex = 62;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(964, 532);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(117, 40);
			this->label53->TabIndex = 61;
			this->label53->Text = L"Введіть\r\n коефіцієнт";
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(897, 503);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(240, 117);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox23->TabIndex = 60;
			this->pictureBox23->TabStop = false;
			// 
			// textBox23
			// 
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox23->Location = System::Drawing::Point(906, 636);
			this->textBox23->Multiline = true;
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(63, 41);
			this->textBox23->TabIndex = 59;
			// 
			// textBox41
			// 
			this->textBox41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox41->Location = System::Drawing::Point(1287, 767);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(93, 30);
			this->textBox41->TabIndex = 58;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label56->Location = System::Drawing::Point(629, 739);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(590, 50);
			this->label56->TabIndex = 57;
			this->label56->Text = L"Введіть ціну 1 метра квадратного будівлі відповідно\r\nдо своєї висоти та використа" 
				L"ння транспортних засобів. ";
			// 
			// textBox40
			// 
			this->textBox40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox40->Location = System::Drawing::Point(1002, 812);
			this->textBox40->Multiline = true;
			this->textBox40->Name = L"textBox40";
			this->textBox40->ReadOnly = true;
			this->textBox40->Size = System::Drawing::Size(135, 51);
			this->textBox40->TabIndex = 56;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label55->Location = System::Drawing::Point(971, 828);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(25, 25);
			this->label55->TabIndex = 55;
			this->label55->Text = L"=";
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(662, 812);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(307, 56);
			this->pictureBox14->TabIndex = 54;
			this->pictureBox14->TabStop = false;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label54->Location = System::Drawing::Point(722, 699);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(266, 25);
			this->label54->TabIndex = 53;
			this->label54->Text = L"Вартість будівлі дільниці";
			// 
			// textBox39
			// 
			this->textBox39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox39->Location = System::Drawing::Point(1002, 626);
			this->textBox39->Multiline = true;
			this->textBox39->Name = L"textBox39";
			this->textBox39->ReadOnly = true;
			this->textBox39->Size = System::Drawing::Size(135, 51);
			this->textBox39->TabIndex = 52;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label57->Location = System::Drawing::Point(971, 642);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(25, 25);
			this->label57->TabIndex = 51;
			this->label57->Text = L"=";
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(662, 626);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(307, 56);
			this->pictureBox13->TabIndex = 50;
			this->pictureBox13->TabStop = false;
			// 
			// textBox38
			// 
			this->textBox38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox38->Location = System::Drawing::Point(967, 431);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(107, 30);
			this->textBox38->TabIndex = 49;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->BackColor = System::Drawing::Color::White;
			this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label58->Location = System::Drawing::Point(662, 427);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(240, 25);
			this->label58->TabIndex = 48;
			this->label58->Text = L"Введіть висоту будівлі";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->BackColor = System::Drawing::Color::White;
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label59->Location = System::Drawing::Point(759, 384);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(149, 25);
			this->label59->TabIndex = 47;
			this->label59->Text = L"Об\'єм будівлі";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(186, 589);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(109, 44);
			this->label50->TabIndex = 46;
			this->label50->Text = L"Введіть\r\n коефіцієнт";
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(119, 560);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(240, 117);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox22->TabIndex = 45;
			this->pictureBox22->TabStop = false;
			// 
			// textBox22
			// 
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox22->Location = System::Drawing::Point(138, 683);
			this->textBox22->Multiline = true;
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(50, 41);
			this->textBox22->TabIndex = 44;
			// 
			// textBox37
			// 
			this->textBox37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox37->Location = System::Drawing::Point(348, 673);
			this->textBox37->Multiline = true;
			this->textBox37->Name = L"textBox37";
			this->textBox37->ReadOnly = true;
			this->textBox37->Size = System::Drawing::Size(137, 51);
			this->textBox37->TabIndex = 43;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label51->Location = System::Drawing::Point(317, 689);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(25, 25);
			this->label51->TabIndex = 42;
			this->label51->Text = L"=";
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(30, 673);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(281, 56);
			this->pictureBox12->TabIndex = 41;
			this->pictureBox12->TabStop = false;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label52->Location = System::Drawing::Point(25, 508);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(278, 25);
			this->label52->TabIndex = 40;
			this->label52->Text = L"Показник загальної площі";
			// 
			// textBox32
			// 
			this->textBox32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox32->Location = System::Drawing::Point(803, 64);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(107, 30);
			this->textBox32->TabIndex = 33;
			// 
			// textBox36
			// 
			this->textBox36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox36->Location = System::Drawing::Point(396, 424);
			this->textBox36->Multiline = true;
			this->textBox36->Name = L"textBox36";
			this->textBox36->ReadOnly = true;
			this->textBox36->Size = System::Drawing::Size(130, 51);
			this->textBox36->TabIndex = 32;
			this->textBox36->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox36_TextChanged);
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label48->Location = System::Drawing::Point(365, 440);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(25, 25);
			this->label48->TabIndex = 31;
			this->label48->Text = L"=";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(20, 424);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(339, 61);
			this->pictureBox11->TabIndex = 30;
			this->pictureBox11->TabStop = false;
			// 
			// textBox35
			// 
			this->textBox35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox35->Location = System::Drawing::Point(599, 381);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(107, 30);
			this->textBox35->TabIndex = 29;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label47->Location = System::Drawing::Point(15, 377);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(531, 25);
			this->label47->TabIndex = 28;
			this->label47->Text = L"Введіть  питомий показник площі на один верстат";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label46->Location = System::Drawing::Point(15, 335);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(717, 25);
			this->label46->TabIndex = 27;
			this->label46->Text = L"Розрахунок виробничої площі дільниці та верстатів основних фондів";
			// 
			// textBox34
			// 
			this->textBox34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox34->Location = System::Drawing::Point(268, 242);
			this->textBox34->Multiline = true;
			this->textBox34->Name = L"textBox34";
			this->textBox34->ReadOnly = true;
			this->textBox34->Size = System::Drawing::Size(122, 51);
			this->textBox34->TabIndex = 26;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label45->Location = System::Drawing::Point(237, 257);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(25, 25);
			this->label45->TabIndex = 25;
			this->label45->Text = L"=";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(20, 231);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(211, 101);
			this->pictureBox10->TabIndex = 24;
			this->pictureBox10->TabStop = false;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label44->Location = System::Drawing::Point(15, 186);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(691, 25);
			this->label44->TabIndex = 23;
			this->label44->Text = L"Середня одинична потужність обладнання на механічній дільниці ";
			// 
			// textBox33
			// 
			this->textBox33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox33->Location = System::Drawing::Point(435, 114);
			this->textBox33->Multiline = true;
			this->textBox33->Name = L"textBox33";
			this->textBox33->ReadOnly = true;
			this->textBox33->Size = System::Drawing::Size(127, 51);
			this->textBox33->TabIndex = 22;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label43->Location = System::Drawing::Point(404, 125);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(25, 25);
			this->label43->TabIndex = 21;
			this->label43->Text = L"=";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(20, 110);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(378, 55);
			this->pictureBox9->TabIndex = 20;
			this->pictureBox9->TabStop = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label42->Location = System::Drawing::Point(15, 67);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(688, 25);
			this->label42->TabIndex = 19;
			this->label42->Text = L"Введіть % балансової вартості технологічного обладнання від 1-5";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label49->Location = System::Drawing::Point(35, 24);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(219, 25);
			this->label49->TabIndex = 18;
			this->label49->Text = L"Вартість оснащення";
			// 
			// tabPage17
			// 
			this->tabPage17->BackColor = System::Drawing::Color::White;
			this->tabPage17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage17.BackgroundImage")));
			this->tabPage17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage17->Controls->Add(this->label2);
			this->tabPage17->Controls->Add(this->button79);
			this->tabPage17->Controls->Add(this->textBox52);
			this->tabPage17->Controls->Add(this->label85);
			this->tabPage17->Controls->Add(this->label82);
			this->tabPage17->Controls->Add(this->label83);
			this->tabPage17->Controls->Add(this->pictureBox18);
			this->tabPage17->Controls->Add(this->label81);
			this->tabPage17->Controls->Add(this->label80);
			this->tabPage17->Controls->Add(this->pictureBox17);
			this->tabPage17->Controls->Add(this->dataGridView12);
			this->tabPage17->Controls->Add(this->label79);
			this->tabPage17->Controls->Add(this->chart1);
			this->tabPage17->Location = System::Drawing::Point(4, 25);
			this->tabPage17->Name = L"tabPage17";
			this->tabPage17->Size = System::Drawing::Size(1992, 1097);
			this->tabPage17->TabIndex = 4;
			this->tabPage17->Text = L"Графік";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(830, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(566, 24);
			this->label2->TabIndex = 76;
			this->label2->Text = L"Таблиця для більш детального демонстрування графіку";
			// 
			// button79
			// 
			this->button79->BackColor = System::Drawing::Color::Transparent;
			this->button79->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button79.BackgroundImage")));
			this->button79->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button79->FlatAppearance->BorderSize = 0;
			this->button79->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button79->Location = System::Drawing::Point(1709, 784);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(132, 140);
			this->button79->TabIndex = 75;
			this->button79->UseVisualStyleBackColor = false;
			this->button79->Click += gcnew System::EventHandler(this, &MyForm::button79_Click);
			// 
			// textBox52
			// 
			this->textBox52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox52->Location = System::Drawing::Point(1405, 563);
			this->textBox52->Multiline = true;
			this->textBox52->Name = L"textBox52";
			this->textBox52->ReadOnly = true;
			this->textBox52->Size = System::Drawing::Size(99, 34);
			this->textBox52->TabIndex = 73;
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label85->Location = System::Drawing::Point(829, 563);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(503, 25);
			this->label85->TabIndex = 72;
			this->label85->Text = L"Середній коефіцієнт завантаження обладнання";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->BackColor = System::Drawing::Color::White;
			this->label82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label82->Location = System::Drawing::Point(232, 668);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(371, 24);
			this->label82->TabIndex = 8;
			this->label82->Text = L"Коефіцієнт довантаження верстатів";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label83->Location = System::Drawing::Point(206, 663);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(20, 25);
			this->label83->TabIndex = 7;
			this->label83->Text = L"-";
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(113, 663);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(87, 37);
			this->pictureBox18->TabIndex = 6;
			this->pictureBox18->TabStop = false;
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->BackColor = System::Drawing::Color::White;
			this->label81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label81->Location = System::Drawing::Point(232, 617);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(483, 24);
			this->label81->TabIndex = 5;
			this->label81->Text = L"Середній коефіцієнт завантаження обладнання";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label80->Location = System::Drawing::Point(206, 612);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(20, 25);
			this->label80->TabIndex = 4;
			this->label80->Text = L"-";
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(113, 612);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(87, 37);
			this->pictureBox17->TabIndex = 3;
			this->pictureBox17->TabStop = false;
			// 
			// dataGridView12
			// 
			this->dataGridView12->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle30->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle30->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle30->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle30->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle30->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle30->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView12->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle30;
			this->dataGridView12->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView12->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->Column58, 
				this->Column59, this->Column60});
			dataGridViewCellStyle32->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle32->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle32->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle32->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle32->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle32->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView12->DefaultCellStyle = dataGridViewCellStyle32;
			this->dataGridView12->Location = System::Drawing::Point(834, 183);
			this->dataGridView12->Name = L"dataGridView12";
			dataGridViewCellStyle33->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle33->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle33->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle33->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle33->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle33->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView12->RowHeadersDefaultCellStyle = dataGridViewCellStyle33;
			dataGridViewCellStyle34->BackColor = System::Drawing::Color::White;
			this->dataGridView12->RowsDefaultCellStyle = dataGridViewCellStyle34;
			this->dataGridView12->RowTemplate->Height = 24;
			this->dataGridView12->Size = System::Drawing::Size(629, 362);
			this->dataGridView12->TabIndex = 2;
			// 
			// Column58
			// 
			dataGridViewCellStyle31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Column58->DefaultCellStyle = dataGridViewCellStyle31;
			this->Column58->HeaderText = L"Модель верстату";
			this->Column58->Name = L"Column58";
			this->Column58->Width = 120;
			// 
			// Column59
			// 
			this->Column59->HeaderText = L"Кількість прийнятого обладнання";
			this->Column59->Name = L"Column59";
			this->Column59->Width = 150;
			// 
			// Column60
			// 
			this->Column60->HeaderText = L"Коефіцієнт завантаження верстатів  з довантаженням";
			this->Column60->Name = L"Column60";
			this->Column60->Width = 150;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label79->Location = System::Drawing::Point(1031, 12);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(0, 25);
			this->label79->TabIndex = 1;
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(14, 3);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series1->BorderColor = System::Drawing::Color::White;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Коефіцієнт довантаження";
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series2->BorderWidth = 4;
			series2->ChartArea = L"ChartArea1";
			series2->Color = System::Drawing::Color::Red;
			series2->Legend = L"Legend1";
			series2->Name = L"Середній коефіцієнт завантаження обладнання";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(1124, 619);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->tabControl3);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(1992, 1006);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"tabPage6";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage11);
			this->tabControl3->Controls->Add(this->tabPage12);
			this->tabControl3->Controls->Add(this->tabPage13);
			this->tabControl3->Location = System::Drawing::Point(3, 3);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(2000, 1381);
			this->tabControl3->TabIndex = 0;
			// 
			// tabPage11
			// 
			this->tabPage11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage11.BackgroundImage")));
			this->tabPage11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage11->Controls->Add(this->button80);
			this->tabPage11->Controls->Add(this->button28);
			this->tabPage11->Controls->Add(this->button27);
			this->tabPage11->Controls->Add(this->pictureBox28);
			this->tabPage11->Controls->Add(this->pictureBox27);
			this->tabPage11->Controls->Add(this->pictureBox26);
			this->tabPage11->Controls->Add(this->pictureBox25);
			this->tabPage11->Controls->Add(this->textBox47);
			this->tabPage11->Controls->Add(this->label65);
			this->tabPage11->Controls->Add(this->textBox46);
			this->tabPage11->Controls->Add(this->label64);
			this->tabPage11->Controls->Add(this->textBox45);
			this->tabPage11->Controls->Add(this->textBox44);
			this->tabPage11->Controls->Add(this->textBox43);
			this->tabPage11->Controls->Add(this->textBox42);
			this->tabPage11->Controls->Add(this->label63);
			this->tabPage11->Controls->Add(this->label62);
			this->tabPage11->Controls->Add(this->label61);
			this->tabPage11->Controls->Add(this->label60);
			this->tabPage11->Controls->Add(this->pictureBox16);
			this->tabPage11->Controls->Add(this->label66);
			this->tabPage11->Controls->Add(this->pictureBox15);
			this->tabPage11->Controls->Add(this->label67);
			this->tabPage11->Controls->Add(this->label68);
			this->tabPage11->Location = System::Drawing::Point(4, 25);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(1992, 1352);
			this->tabPage11->TabIndex = 0;
			this->tabPage11->Text = L"Розрахунок основних виробничих робітників";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// button80
			// 
			this->button80->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button80.BackgroundImage")));
			this->button80->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button80->FlatAppearance->BorderSize = 0;
			this->button80->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button80->Location = System::Drawing::Point(1372, 807);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(146, 114);
			this->button80->TabIndex = 63;
			this->button80->UseVisualStyleBackColor = true;
			this->button80->Click += gcnew System::EventHandler(this, &MyForm::button80_Click);
			// 
			// button28
			// 
			this->button28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button28.BackgroundImage")));
			this->button28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Location = System::Drawing::Point(1696, 823);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(145, 88);
			this->button28->TabIndex = 47;
			this->button28->Text = L"Далі";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Visible = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button27
			// 
			this->button27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button27.BackgroundImage")));
			this->button27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Location = System::Drawing::Point(1526, 823);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(145, 88);
			this->button27->TabIndex = 46;
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(158, 444);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(26, 28);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox28->TabIndex = 45;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(158, 389);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(26, 28);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox27->TabIndex = 44;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(158, 337);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(26, 28);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox26->TabIndex = 43;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(158, 287);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(26, 28);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox25->TabIndex = 42;
			this->pictureBox25->TabStop = false;
			// 
			// textBox47
			// 
			this->textBox47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox47->Location = System::Drawing::Point(562, 526);
			this->textBox47->Multiline = true;
			this->textBox47->Name = L"textBox47";
			this->textBox47->ReadOnly = true;
			this->textBox47->Size = System::Drawing::Size(163, 52);
			this->textBox47->TabIndex = 41;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label65->Location = System::Drawing::Point(531, 541);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(25, 25);
			this->label65->TabIndex = 40;
			this->label65->Text = L"=";
			// 
			// textBox46
			// 
			this->textBox46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox46->Location = System::Drawing::Point(573, 134);
			this->textBox46->Multiline = true;
			this->textBox46->Name = L"textBox46";
			this->textBox46->ReadOnly = true;
			this->textBox46->Size = System::Drawing::Size(152, 52);
			this->textBox46->TabIndex = 39;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label64->Location = System::Drawing::Point(542, 149);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(25, 25);
			this->label64->TabIndex = 38;
			this->label64->Text = L"=";
			// 
			// textBox45
			// 
			this->textBox45->Location = System::Drawing::Point(764, 444);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(100, 22);
			this->textBox45->TabIndex = 37;
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(764, 388);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(100, 22);
			this->textBox44->TabIndex = 36;
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(764, 337);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(100, 22);
			this->textBox43->TabIndex = 35;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(764, 281);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(100, 22);
			this->textBox42->TabIndex = 34;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label63->Location = System::Drawing::Point(202, 447);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(480, 25);
			this->label63->TabIndex = 33;
			this->label63->Text = L"дні неявок через виконання державних обов’язків ";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label62->Location = System::Drawing::Point(204, 392);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(327, 25);
			this->label62->TabIndex = 32;
			this->label62->Text = L"Введіть дні неявок через хворобу ";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label61->Location = System::Drawing::Point(201, 340);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(324, 25);
			this->label61->TabIndex = 31;
			this->label61->Text = L"Введіть дні додаткової відпустки ";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label60->Location = System::Drawing::Point(204, 287);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(298, 25);
			this->label60->TabIndex = 30;
			this->label60->Text = L"Введіть дні чергової відпустки ";
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(19, 526);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(506, 52);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 29;
			this->pictureBox16->TabStop = false;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label66->Location = System::Drawing::Point(25, 232);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(1040, 32);
			this->label66->TabIndex = 28;
			this->label66->Text = L"Розраховуємо річний ефективний фонд робочого часу одного робітника";
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(29, 134);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(496, 54);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 27;
			this->pictureBox15->TabStop = false;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label67->Location = System::Drawing::Point(34, 93);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(844, 32);
			this->label67->TabIndex = 26;
			this->label67->Text = L"Номінальний річний фонд робочого часу одного робітника";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label68->Location = System::Drawing::Point(293, 31);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(849, 32);
			this->label68->TabIndex = 25;
			this->label68->Text = L"ВИЗНАЧЕННЯ ЧИСЕЛЬНОСТІ ПРАЦІВНИКІВ НА ДІЛЬНИЦІ";
			// 
			// tabPage12
			// 
			this->tabPage12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage12.BackgroundImage")));
			this->tabPage12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage12->Controls->Add(this->button98);
			this->tabPage12->Controls->Add(this->button81);
			this->tabPage12->Controls->Add(this->button30);
			this->tabPage12->Controls->Add(this->button29);
			this->tabPage12->Controls->Add(this->label69);
			this->tabPage12->Controls->Add(this->dataGridView5);
			this->tabPage12->Location = System::Drawing::Point(4, 25);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(1992, 1352);
			this->tabPage12->TabIndex = 1;
			this->tabPage12->Text = L"Чисельність основних робітників на дільниці";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// button98
			// 
			this->button98->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button98.BackgroundImage")));
			this->button98->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button98->FlatAppearance->BorderSize = 0;
			this->button98->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button98->Location = System::Drawing::Point(1257, 838);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(92, 76);
			this->button98->TabIndex = 77;
			this->button98->UseVisualStyleBackColor = true;
			this->button98->Click += gcnew System::EventHandler(this, &MyForm::button98_Click);
			// 
			// button81
			// 
			this->button81->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button81.BackgroundImage")));
			this->button81->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button81->FlatAppearance->BorderSize = 0;
			this->button81->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button81->Location = System::Drawing::Point(1355, 823);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(132, 91);
			this->button81->TabIndex = 70;
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &MyForm::button81_Click);
			// 
			// button30
			// 
			this->button30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button30.BackgroundImage")));
			this->button30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Location = System::Drawing::Point(1672, 823);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(173, 88);
			this->button30->TabIndex = 69;
			this->button30->Text = L"Далі";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Visible = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button29
			// 
			this->button29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button29.BackgroundImage")));
			this->button29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Location = System::Drawing::Point(1493, 823);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(173, 88);
			this->button29->TabIndex = 68;
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label69->Location = System::Drawing::Point(332, 16);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(560, 30);
			this->label69->TabIndex = 67;
			this->label69->Text = L"Чисельність основних робітників на дільниці";
			// 
			// dataGridView5
			// 
			this->dataGridView5->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle35->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle35->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle35->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle35->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle35->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle35->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView5->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle35;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {this->dataGridViewTextBoxColumn8, 
				this->Column23, this->Column24, this->Column25, this->Column26, this->Column27, this->Column28, this->Column29});
			this->dataGridView5->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView5->Location = System::Drawing::Point(16, 49);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(1375, 395);
			this->dataGridView5->TabIndex = 66;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->FillWeight = 150;
			this->dataGridViewTextBoxColumn8->HeaderText = L"Найменування професії";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 170;
			// 
			// Column23
			// 
			this->Column23->HeaderText = L"Розряд робіт";
			this->Column23->Name = L"Column23";
			// 
			// Column24
			// 
			dataGridViewCellStyle36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column24->DefaultCellStyle = dataGridViewCellStyle36;
			this->Column24->FillWeight = 120;
			this->Column24->HeaderText = L"Трудомісткість, год Тр(заг)";
			this->Column24->Name = L"Column24";
			this->Column24->ReadOnly = true;
			this->Column24->Width = 150;
			// 
			// Column25
			// 
			dataGridViewCellStyle37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column25->DefaultCellStyle = dataGridViewCellStyle37;
			this->Column25->FillWeight = 120;
			this->Column25->HeaderText = L"Ефективний річний фонд, грн Ф(еф)";
			this->Column25->Name = L"Column25";
			this->Column25->ReadOnly = true;
			this->Column25->Width = 120;
			// 
			// Column26
			// 
			this->Column26->FillWeight = 60;
			this->Column26->HeaderText = L"Квн";
			this->Column26->Name = L"Column26";
			this->Column26->Width = 80;
			// 
			// Column27
			// 
			dataGridViewCellStyle38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column27->DefaultCellStyle = dataGridViewCellStyle38;
			this->Column27->FillWeight = 120;
			this->Column27->HeaderText = L"Розрахункова кількість верстатників";
			this->Column27->Name = L"Column27";
			this->Column27->ReadOnly = true;
			this->Column27->Width = 170;
			// 
			// Column28
			// 
			dataGridViewCellStyle39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column28->DefaultCellStyle = dataGridViewCellStyle39;
			this->Column28->FillWeight = 120;
			this->Column28->HeaderText = L"прийнята кількість верстатників";
			this->Column28->Name = L"Column28";
			this->Column28->ReadOnly = true;
			this->Column28->Width = 140;
			// 
			// Column29
			// 
			dataGridViewCellStyle40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column29->DefaultCellStyle = dataGridViewCellStyle40;
			this->Column29->HeaderText = L"Кз";
			this->Column29->Name = L"Column29";
			this->Column29->ReadOnly = true;
			// 
			// tabPage13
			// 
			this->tabPage13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage13.BackgroundImage")));
			this->tabPage13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage13->Controls->Add(this->textBox105);
			this->tabPage13->Controls->Add(this->label165);
			this->tabPage13->Controls->Add(this->textBox104);
			this->tabPage13->Controls->Add(this->label164);
			this->tabPage13->Controls->Add(this->button63);
			this->tabPage13->Controls->Add(this->textBox103);
			this->tabPage13->Controls->Add(this->label163);
			this->tabPage13->Controls->Add(this->textBox102);
			this->tabPage13->Controls->Add(this->label162);
			this->tabPage13->Controls->Add(this->button40);
			this->tabPage13->Controls->Add(this->button39);
			this->tabPage13->Controls->Add(this->button36);
			this->tabPage13->Controls->Add(this->button33);
			this->tabPage13->Controls->Add(this->button34);
			this->tabPage13->Controls->Add(this->dataGridView9);
			this->tabPage13->Controls->Add(this->label71);
			this->tabPage13->Controls->Add(this->dataGridView8);
			this->tabPage13->Controls->Add(this->label72);
			this->tabPage13->Controls->Add(this->button42);
			this->tabPage13->Controls->Add(this->label70);
			this->tabPage13->Controls->Add(this->button31);
			this->tabPage13->Controls->Add(this->button32);
			this->tabPage13->Controls->Add(this->dataGridView6);
			this->tabPage13->Location = System::Drawing::Point(4, 25);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Size = System::Drawing::Size(1992, 1352);
			this->tabPage13->TabIndex = 2;
			this->tabPage13->Text = L"Штатний розклад промислово-виробничого персоналу";
			this->tabPage13->UseVisualStyleBackColor = true;
			this->tabPage13->Click += gcnew System::EventHandler(this, &MyForm::tabPage13_Click);
			// 
			// textBox105
			// 
			this->textBox105->Location = System::Drawing::Point(1753, 799);
			this->textBox105->Name = L"textBox105";
			this->textBox105->Size = System::Drawing::Size(100, 22);
			this->textBox105->TabIndex = 95;
			// 
			// label165
			// 
			this->label165->AutoSize = true;
			this->label165->BackColor = System::Drawing::Color::White;
			this->label165->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label165->Location = System::Drawing::Point(1113, 799);
			this->label165->Name = L"label165";
			this->label165->Size = System::Drawing::Size(540, 26);
			this->label165->TabIndex = 94;
			this->label165->Text = L"Введіть коефіціент чоловіка згідно версату ЧПК";
			// 
			// textBox104
			// 
			this->textBox104->Location = System::Drawing::Point(1753, 762);
			this->textBox104->Name = L"textBox104";
			this->textBox104->Size = System::Drawing::Size(100, 22);
			this->textBox104->TabIndex = 93;
			// 
			// label164
			// 
			this->label164->AutoSize = true;
			this->label164->BackColor = System::Drawing::Color::White;
			this->label164->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label164->Location = System::Drawing::Point(1113, 762);
			this->label164->Name = L"label164";
			this->label164->Size = System::Drawing::Size(384, 26);
			this->label164->TabIndex = 92;
			this->label164->Text = L"Введіть кількість верстатів з ЧПК";
			// 
			// button63
			// 
			this->button63->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button63.BackgroundImage")));
			this->button63->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button63->FlatAppearance->BorderSize = 0;
			this->button63->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button63->Location = System::Drawing::Point(703, 870);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(126, 70);
			this->button63->TabIndex = 91;
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Click += gcnew System::EventHandler(this, &MyForm::button63_Click);
			// 
			// textBox103
			// 
			this->textBox103->Location = System::Drawing::Point(550, 671);
			this->textBox103->Name = L"textBox103";
			this->textBox103->Size = System::Drawing::Size(100, 22);
			this->textBox103->TabIndex = 86;
			// 
			// label163
			// 
			this->label163->AutoSize = true;
			this->label163->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label163->Location = System::Drawing::Point(38, 671);
			this->label163->Name = L"label163";
			this->label163->Size = System::Drawing::Size(366, 22);
			this->label163->TabIndex = 85;
			this->label163->Text = L"Введіть відсоток від основних робітників";
			// 
			// textBox102
			// 
			this->textBox102->Location = System::Drawing::Point(550, 377);
			this->textBox102->Name = L"textBox102";
			this->textBox102->Size = System::Drawing::Size(100, 22);
			this->textBox102->TabIndex = 84;
			// 
			// label162
			// 
			this->label162->AutoSize = true;
			this->label162->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label162->Location = System::Drawing::Point(38, 386);
			this->label162->Name = L"label162";
			this->label162->Size = System::Drawing::Size(366, 22);
			this->label162->TabIndex = 83;
			this->label162->Text = L"Введіть відсоток від основних робітників";
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::White;
			this->button40->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button40->FlatAppearance->BorderSize = 0;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button40->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button40->Location = System::Drawing::Point(1708, 850);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(158, 70);
			this->button40->TabIndex = 82;
			this->button40->Text = L"Розрахунок ІТР з урахуванням ЧПК";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button39
			// 
			this->button39->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button39.BackgroundImage")));
			this->button39->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button39->FlatAppearance->BorderSize = 0;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Location = System::Drawing::Point(894, 547);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(126, 70);
			this->button39->TabIndex = 81;
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button36
			// 
			this->button36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button36.BackgroundImage")));
			this->button36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button36->FlatAppearance->BorderSize = 0;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Location = System::Drawing::Point(1535, 823);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(118, 127);
			this->button36->TabIndex = 80;
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button33
			// 
			this->button33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button33.BackgroundImage")));
			this->button33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button33->FlatAppearance->BorderSize = 0;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Location = System::Drawing::Point(703, 762);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(126, 70);
			this->button33->TabIndex = 79;
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button34.BackgroundImage")));
			this->button34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button34->FlatAppearance->BorderSize = 0;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Location = System::Drawing::Point(896, 456);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(126, 70);
			this->button34->TabIndex = 78;
			this->button34->UseVisualStyleBackColor = true;
			// 
			// dataGridView9
			// 
			this->dataGridView9->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle41->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle41->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle41->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle41->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle41->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle41->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView9->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle41;
			this->dataGridView9->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView9->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->dataGridViewTextBoxColumn22, 
				this->dataGridViewTextBoxColumn23, this->dataGridViewTextBoxColumn25});
			this->dataGridView9->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView9->Location = System::Drawing::Point(33, 762);
			this->dataGridView9->Name = L"dataGridView9";
			this->dataGridView9->RowTemplate->Height = 24;
			this->dataGridView9->Size = System::Drawing::Size(664, 188);
			this->dataGridView9->TabIndex = 77;
			// 
			// dataGridViewTextBoxColumn22
			// 
			dataGridViewCellStyle42->BackColor = System::Drawing::Color::White;
			this->dataGridViewTextBoxColumn22->DefaultCellStyle = dataGridViewCellStyle42;
			this->dataGridViewTextBoxColumn22->FillWeight = 200;
			this->dataGridViewTextBoxColumn22->HeaderText = L"Найменування професії";
			this->dataGridViewTextBoxColumn22->Name = L"dataGridViewTextBoxColumn22";
			this->dataGridViewTextBoxColumn22->Width = 200;
			// 
			// dataGridViewTextBoxColumn23
			// 
			this->dataGridViewTextBoxColumn23->HeaderText = L"Кількість чоловік";
			this->dataGridViewTextBoxColumn23->Name = L"dataGridViewTextBoxColumn23";
			// 
			// dataGridViewTextBoxColumn25
			// 
			this->dataGridViewTextBoxColumn25->FillWeight = 150;
			this->dataGridViewTextBoxColumn25->HeaderText = L"Оклад";
			this->dataGridViewTextBoxColumn25->Name = L"dataGridViewTextBoxColumn25";
			this->dataGridViewTextBoxColumn25->Width = 150;
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label71->Location = System::Drawing::Point(237, 718);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(364, 30);
			this->label71->TabIndex = 76;
			this->label71->Text = L"Керівники, спеціалісти (ІТР)";
			// 
			// dataGridView8
			// 
			this->dataGridView8->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle43->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle43->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle43->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle43->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle43->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle43->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView8->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle43;
			this->dataGridView8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView8->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->dataGridViewTextBoxColumn18, 
				this->dataGridViewTextBoxColumn19, this->dataGridViewTextBoxColumn20, this->dataGridViewTextBoxColumn21});
			this->dataGridView8->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView8->Location = System::Drawing::Point(33, 455);
			this->dataGridView8->Name = L"dataGridView8";
			dataGridViewCellStyle45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dataGridView8->RowsDefaultCellStyle = dataGridViewCellStyle45;
			this->dataGridView8->RowTemplate->Height = 24;
			this->dataGridView8->Size = System::Drawing::Size(855, 199);
			this->dataGridView8->TabIndex = 75;
			// 
			// dataGridViewTextBoxColumn18
			// 
			dataGridViewCellStyle44->BackColor = System::Drawing::Color::White;
			this->dataGridViewTextBoxColumn18->DefaultCellStyle = dataGridViewCellStyle44;
			this->dataGridViewTextBoxColumn18->FillWeight = 200;
			this->dataGridViewTextBoxColumn18->HeaderText = L"Найменування професії";
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->Width = 200;
			// 
			// dataGridViewTextBoxColumn19
			// 
			this->dataGridViewTextBoxColumn19->HeaderText = L"Кількість чоловік";
			this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
			// 
			// dataGridViewTextBoxColumn20
			// 
			this->dataGridViewTextBoxColumn20->HeaderText = L"Тарифний розряд";
			this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
			// 
			// dataGridViewTextBoxColumn21
			// 
			this->dataGridViewTextBoxColumn21->FillWeight = 300;
			this->dataGridViewTextBoxColumn21->HeaderText = L"Годинна тарифна ставка";
			this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
			this->dataGridViewTextBoxColumn21->Width = 200;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label72->Location = System::Drawing::Point(279, 422);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(278, 30);
			this->label72->TabIndex = 74;
			this->label72->Text = L"Допоміжні робітники";
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::Transparent;
			this->button42->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button42.BackgroundImage")));
			this->button42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button42->FlatAppearance->BorderSize = 0;
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button42->Location = System::Drawing::Point(1049, 249);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(93, 67);
			this->button42->TabIndex = 73;
			this->button42->UseVisualStyleBackColor = false;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label70->Location = System::Drawing::Point(345, 11);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(240, 30);
			this->label70->TabIndex = 72;
			this->label70->Text = L"Основні робітники";
			// 
			// button31
			// 
			this->button31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button31.BackgroundImage")));
			this->button31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button31->FlatAppearance->BorderSize = 0;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Location = System::Drawing::Point(1030, 44);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(126, 70);
			this->button31->TabIndex = 71;
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button32.BackgroundImage")));
			this->button32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Location = System::Drawing::Point(1030, 140);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(126, 70);
			this->button32->TabIndex = 70;
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// dataGridView6
			// 
			this->dataGridView6->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle46->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle46->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle46->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle46->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle46->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle46->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView6->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle46;
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->Column30, 
				this->Column31, this->Column32, this->Column33});
			this->dataGridView6->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView6->Location = System::Drawing::Point(33, 44);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->RowTemplate->Height = 24;
			this->dataGridView6->Size = System::Drawing::Size(989, 327);
			this->dataGridView6->TabIndex = 69;
			// 
			// Column30
			// 
			dataGridViewCellStyle47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column30->DefaultCellStyle = dataGridViewCellStyle47;
			this->Column30->FillWeight = 200;
			this->Column30->HeaderText = L"Найменування професії";
			this->Column30->Name = L"Column30";
			this->Column30->ReadOnly = true;
			this->Column30->Width = 200;
			// 
			// Column31
			// 
			dataGridViewCellStyle48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column31->DefaultCellStyle = dataGridViewCellStyle48;
			this->Column31->HeaderText = L"Кількість чоловік";
			this->Column31->Name = L"Column31";
			this->Column31->ReadOnly = true;
			// 
			// Column32
			// 
			dataGridViewCellStyle49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column32->DefaultCellStyle = dataGridViewCellStyle49;
			this->Column32->HeaderText = L"Тарифний розряд";
			this->Column32->Name = L"Column32";
			this->Column32->ReadOnly = true;
			// 
			// Column33
			// 
			this->Column33->FillWeight = 300;
			this->Column33->HeaderText = L"Годинна тарифна ставка, або оклад, грн";
			this->Column33->Name = L"Column33";
			this->Column33->Width = 300;
			// 
			// tabPage14
			// 
			this->tabPage14->Controls->Add(this->tabControl4);
			this->tabPage14->Location = System::Drawing::Point(4, 25);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Size = System::Drawing::Size(1992, 1006);
			this->tabPage14->TabIndex = 6;
			this->tabPage14->Text = L"tabPage14";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage15);
			this->tabControl4->Controls->Add(this->tabPage16);
			this->tabControl4->Controls->Add(this->tabPage18);
			this->tabControl4->Controls->Add(this->tabPage19);
			this->tabControl4->Controls->Add(this->tabPage30);
			this->tabControl4->Controls->Add(this->tabPage24);
			this->tabControl4->Controls->Add(this->tabPage20);
			this->tabControl4->Controls->Add(this->tabPage25);
			this->tabControl4->Controls->Add(this->tabPage28);
			this->tabControl4->Controls->Add(this->tabPage21);
			this->tabControl4->Controls->Add(this->tabPage29);
			this->tabControl4->Controls->Add(this->tabPage22);
			this->tabControl4->Location = System::Drawing::Point(3, 3);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(2000, 1100);
			this->tabControl4->TabIndex = 0;
			// 
			// tabPage15
			// 
			this->tabPage15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage15.BackgroundImage")));
			this->tabPage15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage15->Controls->Add(this->button83);
			this->tabPage15->Controls->Add(this->textBox49);
			this->tabPage15->Controls->Add(this->textBox48);
			this->tabPage15->Controls->Add(this->label76);
			this->tabPage15->Controls->Add(this->label75);
			this->tabPage15->Controls->Add(this->button43);
			this->tabPage15->Controls->Add(this->button41);
			this->tabPage15->Controls->Add(this->dataGridView4);
			this->tabPage15->Controls->Add(this->label74);
			this->tabPage15->Location = System::Drawing::Point(4, 25);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Padding = System::Windows::Forms::Padding(3);
			this->tabPage15->Size = System::Drawing::Size(1992, 1071);
			this->tabPage15->TabIndex = 0;
			this->tabPage15->Text = L"Вартість матеріалів";
			this->tabPage15->UseVisualStyleBackColor = true;
			// 
			// button83
			// 
			this->button83->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button83.BackgroundImage")));
			this->button83->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button83->FlatAppearance->BorderSize = 0;
			this->button83->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button83->Location = System::Drawing::Point(1405, 782);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(142, 111);
			this->button83->TabIndex = 63;
			this->button83->UseVisualStyleBackColor = true;
			this->button83->Click += gcnew System::EventHandler(this, &MyForm::button83_Click);
			// 
			// textBox49
			// 
			this->textBox49->Location = System::Drawing::Point(1108, 468);
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(100, 22);
			this->textBox49->TabIndex = 7;
			// 
			// textBox48
			// 
			this->textBox48->Location = System::Drawing::Point(525, 468);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(100, 22);
			this->textBox48->TabIndex = 6;
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->BackColor = System::Drawing::Color::White;
			this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label76->Location = System::Drawing::Point(769, 468);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(264, 20);
			this->label76->TabIndex = 5;
			this->label76->Text = L"Відсоток вартості відходів";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->BackColor = System::Drawing::Color::White;
			this->label75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label75->Location = System::Drawing::Point(324, 468);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(136, 20);
			this->label75->TabIndex = 4;
			this->label75->Text = L"Відсоток ТЗВ";
			// 
			// button43
			// 
			this->button43->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button43.BackgroundImage")));
			this->button43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button43->FlatAppearance->BorderSize = 0;
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->Location = System::Drawing::Point(1716, 788);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(135, 88);
			this->button43->TabIndex = 3;
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Visible = false;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// button41
			// 
			this->button41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button41.BackgroundImage")));
			this->button41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button41->FlatAppearance->BorderSize = 0;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->Location = System::Drawing::Point(1553, 788);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(135, 88);
			this->button41->TabIndex = 2;
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// dataGridView4
			// 
			this->dataGridView4->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle50->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle50->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle50->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle50->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle50->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle50->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView4->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle50;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {this->Column34, 
				this->Column39, this->Column40, this->Column41, this->Column42, this->Column43, this->Column44, this->Column45, this->Column46, 
				this->Column47});
			this->dataGridView4->Location = System::Drawing::Point(26, 80);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(1558, 381);
			this->dataGridView4->TabIndex = 1;
			// 
			// Column34
			// 
			this->Column34->HeaderText = L"Найменування матеріалів";
			this->Column34->Name = L"Column34";
			this->Column34->Width = 200;
			// 
			// Column39
			// 
			this->Column39->HeaderText = L"Одиниця вимірювання";
			this->Column39->Name = L"Column39";
			// 
			// Column40
			// 
			this->Column40->HeaderText = L"Заготовка, кг";
			this->Column40->Name = L"Column40";
			// 
			// Column41
			// 
			this->Column41->HeaderText = L"Деталь, кг";
			this->Column41->Name = L"Column41";
			// 
			// Column42
			// 
			dataGridViewCellStyle51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column42->DefaultCellStyle = dataGridViewCellStyle51;
			this->Column42->HeaderText = L"Маса відходів";
			this->Column42->Name = L"Column42";
			this->Column42->ReadOnly = true;
			// 
			// Column43
			// 
			dataGridViewCellStyle52->BackColor = System::Drawing::Color::White;
			this->Column43->DefaultCellStyle = dataGridViewCellStyle52;
			this->Column43->HeaderText = L"Ціна за одиницю вимір. матеріалів, грн/кг";
			this->Column43->Name = L"Column43";
			// 
			// Column44
			// 
			dataGridViewCellStyle53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column44->DefaultCellStyle = dataGridViewCellStyle53;
			this->Column44->HeaderText = L"Вартість матеріалів на заготовку разом з ТЗВ";
			this->Column44->Name = L"Column44";
			this->Column44->ReadOnly = true;
			// 
			// Column45
			// 
			dataGridViewCellStyle54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column45->DefaultCellStyle = dataGridViewCellStyle54;
			this->Column45->HeaderText = L"Ціна за одиницю вимір. Відходів грн/кг.";
			this->Column45->Name = L"Column45";
			this->Column45->ReadOnly = true;
			// 
			// Column46
			// 
			dataGridViewCellStyle55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column46->DefaultCellStyle = dataGridViewCellStyle55;
			this->Column46->HeaderText = L"Вартість матеріалів на відходи";
			this->Column46->Name = L"Column46";
			this->Column46->ReadOnly = true;
			// 
			// Column47
			// 
			dataGridViewCellStyle56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column47->DefaultCellStyle = dataGridViewCellStyle56;
			this->Column47->HeaderText = L"Вартість матеріалів з урахуванням відходів";
			this->Column47->Name = L"Column47";
			this->Column47->ReadOnly = true;
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label74->Location = System::Drawing::Point(372, 32);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(438, 25);
			this->label74->TabIndex = 0;
			this->label74->Text = L"Розрахунок вартості основних матеріалів";
			// 
			// tabPage16
			// 
			this->tabPage16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage16.BackgroundImage")));
			this->tabPage16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage16->Controls->Add(this->button100);
			this->tabPage16->Controls->Add(this->button99);
			this->tabPage16->Controls->Add(this->button84);
			this->tabPage16->Controls->Add(this->button62);
			this->tabPage16->Controls->Add(this->textBox58);
			this->tabPage16->Controls->Add(this->label91);
			this->tabPage16->Controls->Add(this->textBox53);
			this->tabPage16->Controls->Add(this->label86);
			this->tabPage16->Controls->Add(this->textBox57);
			this->tabPage16->Controls->Add(this->label90);
			this->tabPage16->Controls->Add(this->button48);
			this->tabPage16->Controls->Add(this->textBox56);
			this->tabPage16->Controls->Add(this->label89);
			this->tabPage16->Controls->Add(this->textBox55);
			this->tabPage16->Controls->Add(this->label88);
			this->tabPage16->Controls->Add(this->textBox54);
			this->tabPage16->Controls->Add(this->label87);
			this->tabPage16->Controls->Add(this->dataGridView11);
			this->tabPage16->Controls->Add(this->button45);
			this->tabPage16->Controls->Add(this->dataGridView7);
			this->tabPage16->Controls->Add(this->label77);
			this->tabPage16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->tabPage16->Location = System::Drawing::Point(4, 25);
			this->tabPage16->Name = L"tabPage16";
			this->tabPage16->Padding = System::Windows::Forms::Padding(3);
			this->tabPage16->Size = System::Drawing::Size(1992, 1071);
			this->tabPage16->TabIndex = 1;
			this->tabPage16->Text = L"Зарплати основних робітників";
			this->tabPage16->UseVisualStyleBackColor = true;
			this->tabPage16->Click += gcnew System::EventHandler(this, &MyForm::tabPage16_Click);
			// 
			// button100
			// 
			this->button100->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button100.BackgroundImage")));
			this->button100->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button100->FlatAppearance->BorderSize = 0;
			this->button100->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button100->Location = System::Drawing::Point(1335, 814);
			this->button100->Name = L"button100";
			this->button100->Size = System::Drawing::Size(104, 70);
			this->button100->TabIndex = 78;
			this->button100->UseVisualStyleBackColor = true;
			this->button100->Click += gcnew System::EventHandler(this, &MyForm::button100_Click);
			// 
			// button99
			// 
			this->button99->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button99.BackgroundImage")));
			this->button99->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button99->FlatAppearance->BorderSize = 0;
			this->button99->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button99->Location = System::Drawing::Point(1106, 376);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(92, 70);
			this->button99->TabIndex = 77;
			this->button99->UseVisualStyleBackColor = true;
			this->button99->Click += gcnew System::EventHandler(this, &MyForm::button99_Click);
			// 
			// button84
			// 
			this->button84->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button84.BackgroundImage")));
			this->button84->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button84->FlatAppearance->BorderSize = 0;
			this->button84->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button84->Location = System::Drawing::Point(1577, 844);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(107, 111);
			this->button84->TabIndex = 63;
			this->button84->UseVisualStyleBackColor = true;
			this->button84->Click += gcnew System::EventHandler(this, &MyForm::button84_Click);
			// 
			// button62
			// 
			this->button62->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button62.BackgroundImage")));
			this->button62->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button62->FlatAppearance->BorderSize = 0;
			this->button62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button62->Location = System::Drawing::Point(1711, 863);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(118, 78);
			this->button62->TabIndex = 22;
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Visible = false;
			this->button62->Click += gcnew System::EventHandler(this, &MyForm::button62_Click);
			// 
			// textBox58
			// 
			this->textBox58->Location = System::Drawing::Point(594, 943);
			this->textBox58->Name = L"textBox58";
			this->textBox58->ReadOnly = true;
			this->textBox58->Size = System::Drawing::Size(100, 27);
			this->textBox58->TabIndex = 21;
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->BackColor = System::Drawing::Color::White;
			this->label91->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label91->Location = System::Drawing::Point(172, 946);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(405, 20);
			this->label91->TabIndex = 20;
			this->label91->Text = L"Середньомісячна зарплата одного працівника";
			// 
			// textBox53
			// 
			this->textBox53->Location = System::Drawing::Point(823, 889);
			this->textBox53->Name = L"textBox53";
			this->textBox53->ReadOnly = true;
			this->textBox53->Size = System::Drawing::Size(100, 27);
			this->textBox53->TabIndex = 19;
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->BackColor = System::Drawing::Color::White;
			this->label86->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label86->Location = System::Drawing::Point(513, 896);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(304, 20);
			this->label86->TabIndex = 18;
			this->label86->Text = L"середньогодинна тарифна ставка";
			// 
			// textBox57
			// 
			this->textBox57->Location = System::Drawing::Point(343, 889);
			this->textBox57->Name = L"textBox57";
			this->textBox57->ReadOnly = true;
			this->textBox57->Size = System::Drawing::Size(100, 27);
			this->textBox57->TabIndex = 17;
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->BackColor = System::Drawing::Color::White;
			this->label90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label90->Location = System::Drawing::Point(170, 892);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(153, 20);
			this->label90->TabIndex = 16;
			this->label90->Text = L"Середній розряд";
			// 
			// button48
			// 
			this->button48->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button48.BackgroundImage")));
			this->button48->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button48->FlatAppearance->BorderSize = 0;
			this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button48->Location = System::Drawing::Point(1204, 814);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(152, 82);
			this->button48->TabIndex = 13;
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Visible = false;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::button48_Click);
			// 
			// textBox56
			// 
			this->textBox56->Location = System::Drawing::Point(1061, 842);
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(100, 27);
			this->textBox56->TabIndex = 12;
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->BackColor = System::Drawing::Color::White;
			this->label89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label89->Location = System::Drawing::Point(819, 844);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(236, 20);
			this->label89->TabIndex = 11;
			this->label89->Text = L"єдиний соціальний внесок ";
			// 
			// textBox55
			// 
			this->textBox55->Location = System::Drawing::Point(676, 841);
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(100, 27);
			this->textBox55->TabIndex = 10;
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->BackColor = System::Drawing::Color::White;
			this->label88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label88->Location = System::Drawing::Point(465, 844);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(191, 20);
			this->label88->TabIndex = 9;
			this->label88->Text = L"додаткова зарплата ";
			// 
			// textBox54
			// 
			this->textBox54->Location = System::Drawing::Point(359, 841);
			this->textBox54->Name = L"textBox54";
			this->textBox54->Size = System::Drawing::Size(100, 27);
			this->textBox54->TabIndex = 8;
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->BackColor = System::Drawing::Color::White;
			this->label87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label87->Location = System::Drawing::Point(93, 844);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(255, 20);
			this->label87->TabIndex = 7;
			this->label87->Text = L"доплати до прямої зарплати";
			// 
			// dataGridView11
			// 
			this->dataGridView11->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView11->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView11->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->dataGridViewTextBoxColumn9, 
				this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11});
			this->dataGridView11->Location = System::Drawing::Point(120, 491);
			this->dataGridView11->Name = L"dataGridView11";
			this->dataGridView11->RowTemplate->Height = 24;
			this->dataGridView11->Size = System::Drawing::Size(991, 334);
			this->dataGridView11->TabIndex = 4;
			// 
			// dataGridViewTextBoxColumn9
			// 
			dataGridViewCellStyle57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dataGridViewTextBoxColumn9->DefaultCellStyle = dataGridViewCellStyle57;
			this->dataGridViewTextBoxColumn9->FillWeight = 200;
			this->dataGridViewTextBoxColumn9->HeaderText = L"";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 450;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			// 
			// button45
			// 
			this->button45->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button45.BackgroundImage")));
			this->button45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button45->FlatAppearance->BorderSize = 0;
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button45->Location = System::Drawing::Point(1204, 376);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(152, 70);
			this->button45->TabIndex = 2;
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::button45_Click);
			// 
			// dataGridView7
			// 
			this->dataGridView7->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->Column51, 
				this->Column52, this->Column53, this->Column54, this->Column55, this->Column56, this->Column57});
			this->dataGridView7->Location = System::Drawing::Point(93, 56);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->RowTemplate->Height = 24;
			this->dataGridView7->Size = System::Drawing::Size(1226, 314);
			this->dataGridView7->TabIndex = 1;
			// 
			// Column51
			// 
			this->Column51->HeaderText = L"Найменування операції";
			this->Column51->Name = L"Column51";
			this->Column51->Width = 200;
			// 
			// Column52
			// 
			this->Column52->HeaderText = L"Розряд робіт";
			this->Column52->Name = L"Column52";
			// 
			// Column53
			// 
			this->Column53->HeaderText = L"Норма часу на операцію, хв.";
			this->Column53->Name = L"Column53";
			// 
			// Column54
			// 
			this->Column54->HeaderText = L"Тарифна годинна ставка Тст, грн";
			this->Column54->Name = L"Column54";
			this->Column54->Width = 120;
			// 
			// Column55
			// 
			dataGridViewCellStyle58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column55->DefaultCellStyle = dataGridViewCellStyle58;
			this->Column55->HeaderText = L"Розцінка, грн";
			this->Column55->Name = L"Column55";
			this->Column55->ReadOnly = true;
			// 
			// Column56
			// 
			this->Column56->HeaderText = L"Программа запуску, шт.";
			this->Column56->Name = L"Column56";
			this->Column56->Width = 120;
			// 
			// Column57
			// 
			dataGridViewCellStyle59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column57->DefaultCellStyle = dataGridViewCellStyle59;
			this->Column57->HeaderText = L"Річний фонд зарплати, грн";
			this->Column57->Name = L"Column57";
			this->Column57->Width = 120;
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label77->Location = System::Drawing::Point(422, 28);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(593, 25);
			this->label77->TabIndex = 0;
			this->label77->Text = L"Розрахунок річного фонду зарплати основних робітників";
			// 
			// tabPage18
			// 
			this->tabPage18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage18.BackgroundImage")));
			this->tabPage18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage18->Controls->Add(this->button102);
			this->tabPage18->Controls->Add(this->button101);
			this->tabPage18->Controls->Add(this->button85);
			this->tabPage18->Controls->Add(this->textBox106);
			this->tabPage18->Controls->Add(this->label167);
			this->tabPage18->Controls->Add(this->textBox50);
			this->tabPage18->Controls->Add(this->label166);
			this->tabPage18->Controls->Add(this->button49);
			this->tabPage18->Controls->Add(this->textBox62);
			this->tabPage18->Controls->Add(this->label97);
			this->tabPage18->Controls->Add(this->textBox63);
			this->tabPage18->Controls->Add(this->label98);
			this->tabPage18->Controls->Add(this->textBox64);
			this->tabPage18->Controls->Add(this->label99);
			this->tabPage18->Controls->Add(this->dataGridView14);
			this->tabPage18->Controls->Add(this->label95);
			this->tabPage18->Controls->Add(this->button46);
			this->tabPage18->Controls->Add(this->button44);
			this->tabPage18->Controls->Add(this->textBox59);
			this->tabPage18->Controls->Add(this->label92);
			this->tabPage18->Controls->Add(this->textBox60);
			this->tabPage18->Controls->Add(this->label93);
			this->tabPage18->Controls->Add(this->textBox61);
			this->tabPage18->Controls->Add(this->label94);
			this->tabPage18->Controls->Add(this->dataGridView13);
			this->tabPage18->Controls->Add(this->label96);
			this->tabPage18->Location = System::Drawing::Point(4, 25);
			this->tabPage18->Name = L"tabPage18";
			this->tabPage18->Size = System::Drawing::Size(1992, 1071);
			this->tabPage18->TabIndex = 2;
			this->tabPage18->Text = L"Зарплати допоміжних робітників та ІТР";
			this->tabPage18->UseVisualStyleBackColor = true;
			// 
			// button102
			// 
			this->button102->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button102.BackgroundImage")));
			this->button102->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button102->FlatAppearance->BorderSize = 0;
			this->button102->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button102->Location = System::Drawing::Point(1445, 857);
			this->button102->Name = L"button102";
			this->button102->Size = System::Drawing::Size(83, 84);
			this->button102->TabIndex = 78;
			this->button102->UseVisualStyleBackColor = true;
			this->button102->Click += gcnew System::EventHandler(this, &MyForm::button102_Click);
			// 
			// button101
			// 
			this->button101->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button101.BackgroundImage")));
			this->button101->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button101->FlatAppearance->BorderSize = 0;
			this->button101->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button101->Location = System::Drawing::Point(1306, 430);
			this->button101->Name = L"button101";
			this->button101->Size = System::Drawing::Size(94, 81);
			this->button101->TabIndex = 77;
			this->button101->UseVisualStyleBackColor = true;
			this->button101->Click += gcnew System::EventHandler(this, &MyForm::button101_Click);
			// 
			// button85
			// 
			this->button85->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button85.BackgroundImage")));
			this->button85->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button85->FlatAppearance->BorderSize = 0;
			this->button85->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button85->Location = System::Drawing::Point(1637, 838);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(107, 109);
			this->button85->TabIndex = 63;
			this->button85->UseVisualStyleBackColor = true;
			this->button85->Click += gcnew System::EventHandler(this, &MyForm::button85_Click);
			// 
			// textBox106
			// 
			this->textBox106->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox106->Location = System::Drawing::Point(576, 918);
			this->textBox106->Name = L"textBox106";
			this->textBox106->ReadOnly = true;
			this->textBox106->Size = System::Drawing::Size(100, 27);
			this->textBox106->TabIndex = 33;
			// 
			// label167
			// 
			this->label167->AutoSize = true;
			this->label167->BackColor = System::Drawing::Color::White;
			this->label167->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label167->Location = System::Drawing::Point(125, 921);
			this->label167->Name = L"label167";
			this->label167->Size = System::Drawing::Size(405, 20);
			this->label167->TabIndex = 32;
			this->label167->Text = L"Середньомісячна зарплата одного працівника";
			// 
			// textBox50
			// 
			this->textBox50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox50->Location = System::Drawing::Point(576, 495);
			this->textBox50->Name = L"textBox50";
			this->textBox50->ReadOnly = true;
			this->textBox50->Size = System::Drawing::Size(100, 27);
			this->textBox50->TabIndex = 31;
			// 
			// label166
			// 
			this->label166->AutoSize = true;
			this->label166->BackColor = System::Drawing::Color::White;
			this->label166->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label166->Location = System::Drawing::Point(125, 498);
			this->label166->Name = L"label166";
			this->label166->Size = System::Drawing::Size(405, 20);
			this->label166->TabIndex = 30;
			this->label166->Text = L"Середньомісячна зарплата одного працівника";
			// 
			// button49
			// 
			this->button49->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button49.BackgroundImage")));
			this->button49->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button49->FlatAppearance->BorderSize = 0;
			this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button49->Location = System::Drawing::Point(1298, 852);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(141, 84);
			this->button49->TabIndex = 29;
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Visible = false;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::button49_Click_1);
			// 
			// textBox62
			// 
			this->textBox62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox62->Location = System::Drawing::Point(1134, 859);
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(100, 27);
			this->textBox62->TabIndex = 28;
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->BackColor = System::Drawing::Color::White;
			this->label97->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label97->Location = System::Drawing::Point(853, 862);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(236, 20);
			this->label97->TabIndex = 27;
			this->label97->Text = L"єдиний соціальний внесок ";
			// 
			// textBox63
			// 
			this->textBox63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox63->Location = System::Drawing::Point(718, 862);
			this->textBox63->Name = L"textBox63";
			this->textBox63->Size = System::Drawing::Size(100, 27);
			this->textBox63->TabIndex = 26;
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->BackColor = System::Drawing::Color::White;
			this->label98->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label98->Location = System::Drawing::Point(499, 862);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(191, 20);
			this->label98->TabIndex = 25;
			this->label98->Text = L"додаткова зарплата ";
			// 
			// textBox64
			// 
			this->textBox64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox64->Location = System::Drawing::Point(328, 859);
			this->textBox64->Name = L"textBox64";
			this->textBox64->Size = System::Drawing::Size(100, 27);
			this->textBox64->TabIndex = 24;
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->BackColor = System::Drawing::Color::White;
			this->label99->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label99->Location = System::Drawing::Point(37, 862);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(255, 20);
			this->label99->TabIndex = 23;
			this->label99->Text = L"доплати до прямої зарплати";
			// 
			// dataGridView14
			// 
			this->dataGridView14->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView14->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView14->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {this->Column69, 
				this->Column70, this->Column71, this->Column72, this->Column73, this->Column74, this->Column75, this->Column76, this->Column77});
			this->dataGridView14->Location = System::Drawing::Point(41, 628);
			this->dataGridView14->Name = L"dataGridView14";
			this->dataGridView14->RowTemplate->Height = 24;
			this->dataGridView14->Size = System::Drawing::Size(1298, 210);
			this->dataGridView14->TabIndex = 22;
			// 
			// Column69
			// 
			this->Column69->HeaderText = L"Посада ІТР";
			this->Column69->Name = L"Column69";
			this->Column69->Width = 120;
			// 
			// Column70
			// 
			this->Column70->HeaderText = L"Чисельність, чол.";
			this->Column70->Name = L"Column70";
			// 
			// Column71
			// 
			this->Column71->HeaderText = L"Посадовий оклад за місяць";
			this->Column71->Name = L"Column71";
			this->Column71->Width = 110;
			// 
			// Column72
			// 
			dataGridViewCellStyle60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column72->DefaultCellStyle = dataGridViewCellStyle60;
			this->Column72->HeaderText = L"Фонд прямої зарплати";
			this->Column72->Name = L"Column72";
			this->Column72->ReadOnly = true;
			// 
			// Column73
			// 
			dataGridViewCellStyle61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column73->DefaultCellStyle = dataGridViewCellStyle61;
			this->Column73->HeaderText = L"Доплати";
			this->Column73->Name = L"Column73";
			this->Column73->ReadOnly = true;
			// 
			// Column74
			// 
			dataGridViewCellStyle62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column74->DefaultCellStyle = dataGridViewCellStyle62;
			this->Column74->HeaderText = L"Фонд основної зарплати ";
			this->Column74->Name = L"Column74";
			this->Column74->ReadOnly = true;
			// 
			// Column75
			// 
			dataGridViewCellStyle63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column75->DefaultCellStyle = dataGridViewCellStyle63;
			this->Column75->HeaderText = L"Додаткова зарплата";
			this->Column75->Name = L"Column75";
			this->Column75->ReadOnly = true;
			// 
			// Column76
			// 
			dataGridViewCellStyle64->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column76->DefaultCellStyle = dataGridViewCellStyle64;
			this->Column76->HeaderText = L"Річний фонд зарплати";
			this->Column76->Name = L"Column76";
			this->Column76->ReadOnly = true;
			// 
			// Column77
			// 
			dataGridViewCellStyle65->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column77->DefaultCellStyle = dataGridViewCellStyle65;
			this->Column77->HeaderText = L"Відрахування в інші фонди ЄСВ, %";
			this->Column77->Name = L"Column77";
			this->Column77->ReadOnly = true;
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label95->Location = System::Drawing::Point(323, 600);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(518, 25);
			this->label95->TabIndex = 21;
			this->label95->Text = L"Розрахунок заробітної плати цехового персоналу";
			// 
			// button46
			// 
			this->button46->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button46.BackgroundImage")));
			this->button46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button46->FlatAppearance->BorderSize = 0;
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button46->Location = System::Drawing::Point(1741, 850);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(130, 86);
			this->button46->TabIndex = 20;
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Visible = false;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::button46_Click_1);
			// 
			// button44
			// 
			this->button44->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button44.BackgroundImage")));
			this->button44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button44->FlatAppearance->BorderSize = 0;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Location = System::Drawing::Point(1406, 429);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(146, 82);
			this->button44->TabIndex = 19;
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click_1);
			// 
			// textBox59
			// 
			this->textBox59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox59->Location = System::Drawing::Point(1168, 432);
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(100, 27);
			this->textBox59->TabIndex = 18;
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->BackColor = System::Drawing::Color::White;
			this->label92->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label92->Location = System::Drawing::Point(877, 432);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(236, 20);
			this->label92->TabIndex = 17;
			this->label92->Text = L"єдиний соціальний внесок ";
			// 
			// textBox60
			// 
			this->textBox60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox60->Location = System::Drawing::Point(752, 432);
			this->textBox60->Name = L"textBox60";
			this->textBox60->Size = System::Drawing::Size(100, 27);
			this->textBox60->TabIndex = 16;
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->BackColor = System::Drawing::Color::White;
			this->label93->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label93->Location = System::Drawing::Point(523, 432);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(191, 20);
			this->label93->TabIndex = 15;
			this->label93->Text = L"додаткова зарплата ";
			// 
			// textBox61
			// 
			this->textBox61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox61->Location = System::Drawing::Point(398, 429);
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(100, 27);
			this->textBox61->TabIndex = 14;
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->BackColor = System::Drawing::Color::White;
			this->label94->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label94->Location = System::Drawing::Point(101, 432);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(255, 20);
			this->label94->TabIndex = 13;
			this->label94->Text = L"доплати до прямої зарплати";
			// 
			// dataGridView13
			// 
			this->dataGridView13->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle66->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle66->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle66->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle66->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle66->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle66->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView13->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle66;
			this->dataGridView13->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView13->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {this->Column48, 
				this->Column49, this->Column50, this->Column61, this->Column62, this->Column63, this->Column64, this->Column65, this->Column66, 
				this->Column67, this->Column68});
			this->dataGridView13->Location = System::Drawing::Point(28, 67);
			this->dataGridView13->Name = L"dataGridView13";
			this->dataGridView13->RowTemplate->Height = 24;
			this->dataGridView13->Size = System::Drawing::Size(1524, 346);
			this->dataGridView13->TabIndex = 6;
			// 
			// Column48
			// 
			this->Column48->HeaderText = L"Найменування професії";
			this->Column48->Name = L"Column48";
			this->Column48->Width = 130;
			// 
			// Column49
			// 
			this->Column49->HeaderText = L"Чисельність робітників";
			this->Column49->Name = L"Column49";
			// 
			// Column50
			// 
			this->Column50->HeaderText = L"Річний ефективний фонд часу";
			this->Column50->Name = L"Column50";
			// 
			// Column61
			// 
			this->Column61->HeaderText = L"Загальна кількість робочого часу";
			this->Column61->Name = L"Column61";
			// 
			// Column62
			// 
			this->Column62->HeaderText = L"Годинна тарифна ставка";
			this->Column62->Name = L"Column62";
			// 
			// Column63
			// 
			dataGridViewCellStyle67->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column63->DefaultCellStyle = dataGridViewCellStyle67;
			this->Column63->HeaderText = L"Фонд прямої зарплати ";
			this->Column63->Name = L"Column63";
			this->Column63->ReadOnly = true;
			// 
			// Column64
			// 
			dataGridViewCellStyle68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column64->DefaultCellStyle = dataGridViewCellStyle68;
			this->Column64->HeaderText = L"Доплати ";
			this->Column64->Name = L"Column64";
			this->Column64->ReadOnly = true;
			// 
			// Column65
			// 
			dataGridViewCellStyle69->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column65->DefaultCellStyle = dataGridViewCellStyle69;
			this->Column65->HeaderText = L"Фонд основної зарплати ";
			this->Column65->Name = L"Column65";
			this->Column65->ReadOnly = true;
			// 
			// Column66
			// 
			dataGridViewCellStyle70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column66->DefaultCellStyle = dataGridViewCellStyle70;
			this->Column66->HeaderText = L"Фонд додаткової зарплати ";
			this->Column66->Name = L"Column66";
			this->Column66->ReadOnly = true;
			// 
			// Column67
			// 
			dataGridViewCellStyle71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column67->DefaultCellStyle = dataGridViewCellStyle71;
			this->Column67->HeaderText = L"Річний фонд зарплати";
			this->Column67->Name = L"Column67";
			this->Column67->ReadOnly = true;
			// 
			// Column68
			// 
			dataGridViewCellStyle72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column68->DefaultCellStyle = dataGridViewCellStyle72;
			this->Column68->HeaderText = L"ЄСВ (єдиний соц. внесок), %";
			this->Column68->Name = L"Column68";
			this->Column68->ReadOnly = true;
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label96->Location = System::Drawing::Point(278, 39);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(472, 25);
			this->label96->TabIndex = 5;
			this->label96->Text = L"Розрахунок зарплати допоміжних робітників";
			// 
			// tabPage19
			// 
			this->tabPage19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage19.BackgroundImage")));
			this->tabPage19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage19->Controls->Add(this->button114);
			this->tabPage19->Controls->Add(this->button104);
			this->tabPage19->Controls->Add(this->button103);
			this->tabPage19->Controls->Add(this->label189);
			this->tabPage19->Controls->Add(this->button65);
			this->tabPage19->Controls->Add(this->button51);
			this->tabPage19->Controls->Add(this->dataGridView17);
			this->tabPage19->Controls->Add(this->button50);
			this->tabPage19->Controls->Add(this->dataGridView15);
			this->tabPage19->Controls->Add(this->label100);
			this->tabPage19->Location = System::Drawing::Point(4, 25);
			this->tabPage19->Name = L"tabPage19";
			this->tabPage19->Size = System::Drawing::Size(1992, 1071);
			this->tabPage19->TabIndex = 3;
			this->tabPage19->Text = L"Зведена таблиця";
			this->tabPage19->UseVisualStyleBackColor = true;
			this->tabPage19->Click += gcnew System::EventHandler(this, &MyForm::tabPage19_Click);
			// 
			// button114
			// 
			this->button114->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button114.BackgroundImage")));
			this->button114->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button114->FlatAppearance->BorderSize = 0;
			this->button114->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button114->Location = System::Drawing::Point(1511, 805);
			this->button114->Name = L"button114";
			this->button114->Size = System::Drawing::Size(143, 132);
			this->button114->TabIndex = 82;
			this->button114->UseVisualStyleBackColor = true;
			this->button114->Click += gcnew System::EventHandler(this, &MyForm::button114_Click);
			// 
			// button104
			// 
			this->button104->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button104.BackgroundImage")));
			this->button104->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button104->FlatAppearance->BorderSize = 0;
			this->button104->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button104->Location = System::Drawing::Point(850, 821);
			this->button104->Name = L"button104";
			this->button104->Size = System::Drawing::Size(128, 63);
			this->button104->TabIndex = 78;
			this->button104->UseVisualStyleBackColor = true;
			this->button104->Click += gcnew System::EventHandler(this, &MyForm::button104_Click);
			// 
			// button103
			// 
			this->button103->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button103.BackgroundImage")));
			this->button103->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button103->FlatAppearance->BorderSize = 0;
			this->button103->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button103->Location = System::Drawing::Point(922, 385);
			this->button103->Name = L"button103";
			this->button103->Size = System::Drawing::Size(101, 58);
			this->button103->TabIndex = 77;
			this->button103->UseVisualStyleBackColor = true;
			this->button103->Click += gcnew System::EventHandler(this, &MyForm::button103_Click);
			// 
			// label189
			// 
			this->label189->AutoSize = true;
			this->label189->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label189->Location = System::Drawing::Point(179, 422);
			this->label189->Name = L"label189";
			this->label189->Size = System::Drawing::Size(443, 25);
			this->label189->TabIndex = 64;
			this->label189->Text = L"Амортизація основних фондів на дільниці";
			// 
			// button65
			// 
			this->button65->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button65.BackgroundImage")));
			this->button65->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button65->FlatAppearance->BorderSize = 0;
			this->button65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button65->Location = System::Drawing::Point(1660, 831);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(191, 96);
			this->button65->TabIndex = 8;
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Visible = false;
			this->button65->Click += gcnew System::EventHandler(this, &MyForm::button65_Click);
			// 
			// button51
			// 
			this->button51->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button51.BackgroundImage")));
			this->button51->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button51->FlatAppearance->BorderSize = 0;
			this->button51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button51->Location = System::Drawing::Point(984, 813);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(162, 71);
			this->button51->TabIndex = 6;
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Visible = false;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::button51_Click);
			// 
			// dataGridView17
			// 
			this->dataGridView17->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle73->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle73->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle73->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle73->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle73->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle73->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView17->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle73;
			this->dataGridView17->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView17->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->Column87, 
				this->Column88, this->Column89, this->Column90});
			this->dataGridView17->Location = System::Drawing::Point(35, 450);
			this->dataGridView17->Name = L"dataGridView17";
			this->dataGridView17->RowTemplate->Height = 24;
			this->dataGridView17->Size = System::Drawing::Size(1096, 356);
			this->dataGridView17->TabIndex = 5;
			// 
			// Column87
			// 
			this->Column87->HeaderText = L"Найменування групи основних фондів";
			this->Column87->Name = L"Column87";
			this->Column87->Width = 300;
			// 
			// Column88
			// 
			dataGridViewCellStyle74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column88->DefaultCellStyle = dataGridViewCellStyle74;
			this->Column88->HeaderText = L"Балансова вартість, грн";
			this->Column88->Name = L"Column88";
			this->Column88->ReadOnly = true;
			this->Column88->Width = 160;
			// 
			// Column89
			// 
			this->Column89->HeaderText = L"Норма амортизації";
			this->Column89->Name = L"Column89";
			this->Column89->Width = 160;
			// 
			// Column90
			// 
			dataGridViewCellStyle75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column90->DefaultCellStyle = dataGridViewCellStyle75;
			this->Column90->HeaderText = L"Річна сума амортизації, грн";
			this->Column90->Name = L"Column90";
			this->Column90->ReadOnly = true;
			this->Column90->Width = 170;
			// 
			// button50
			// 
			this->button50->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button50.BackgroundImage")));
			this->button50->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button50->FlatAppearance->BorderSize = 0;
			this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button50->Location = System::Drawing::Point(1064, 391);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(160, 56);
			this->button50->TabIndex = 4;
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::button50_Click);
			// 
			// dataGridView15
			// 
			this->dataGridView15->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle76->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle76->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle76->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle76->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle76->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle76->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView15->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle76;
			this->dataGridView15->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView15->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {this->Column78, 
				this->Column79, this->Column80, this->Column81, this->Column82, this->Column83, this->Column85, this->Column86});
			this->dataGridView15->Location = System::Drawing::Point(14, 61);
			this->dataGridView15->Name = L"dataGridView15";
			this->dataGridView15->RowTemplate->Height = 24;
			this->dataGridView15->Size = System::Drawing::Size(1210, 321);
			this->dataGridView15->TabIndex = 1;
			// 
			// Column78
			// 
			this->Column78->HeaderText = L"Категорії працюючих";
			this->Column78->Name = L"Column78";
			this->Column78->Width = 200;
			// 
			// Column79
			// 
			this->Column79->HeaderText = L"Кількість робітників";
			this->Column79->Name = L"Column79";
			// 
			// Column80
			// 
			this->Column80->HeaderText = L"Прямий (тарифний) фонд";
			this->Column80->Name = L"Column80";
			// 
			// Column81
			// 
			this->Column81->HeaderText = L"Доплати";
			this->Column81->Name = L"Column81";
			// 
			// Column82
			// 
			this->Column82->HeaderText = L"Основна заробітня плата";
			this->Column82->Name = L"Column82";
			// 
			// Column83
			// 
			this->Column83->HeaderText = L"Додаткова заробітна плата";
			this->Column83->Name = L"Column83";
			// 
			// Column85
			// 
			this->Column85->HeaderText = L"Річний фонд оплати";
			this->Column85->Name = L"Column85";
			// 
			// Column86
			// 
			this->Column86->HeaderText = L"ЄСВ %";
			this->Column86->Name = L"Column86";
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label100->Location = System::Drawing::Point(270, 33);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(645, 25);
			this->label100->TabIndex = 0;
			this->label100->Text = L"Зведена таблиця річного фонду зарплати персоналу дільниці";
			// 
			// tabPage30
			// 
			this->tabPage30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage30.BackgroundImage")));
			this->tabPage30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage30->Controls->Add(this->button108);
			this->tabPage30->Controls->Add(this->button105);
			this->tabPage30->Controls->Add(this->button86);
			this->tabPage30->Controls->Add(this->button52);
			this->tabPage30->Controls->Add(this->dataGridView16);
			this->tabPage30->Controls->Add(this->label224);
			this->tabPage30->Location = System::Drawing::Point(4, 25);
			this->tabPage30->Name = L"tabPage30";
			this->tabPage30->Size = System::Drawing::Size(1992, 1071);
			this->tabPage30->TabIndex = 11;
			this->tabPage30->Text = L"Зведена таблиця";
			this->tabPage30->UseVisualStyleBackColor = true;
			// 
			// button108
			// 
			this->button108->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button108.BackgroundImage")));
			this->button108->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button108->FlatAppearance->BorderSize = 0;
			this->button108->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button108->Location = System::Drawing::Point(1630, 715);
			this->button108->Name = L"button108";
			this->button108->Size = System::Drawing::Size(234, 108);
			this->button108->TabIndex = 83;
			this->button108->UseVisualStyleBackColor = true;
			this->button108->Visible = false;
			this->button108->Click += gcnew System::EventHandler(this, &MyForm::button108_Click);
			// 
			// button105
			// 
			this->button105->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button105.BackgroundImage")));
			this->button105->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button105->FlatAppearance->BorderSize = 0;
			this->button105->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button105->Location = System::Drawing::Point(739, 485);
			this->button105->Name = L"button105";
			this->button105->Size = System::Drawing::Size(133, 76);
			this->button105->TabIndex = 82;
			this->button105->UseVisualStyleBackColor = true;
			this->button105->Click += gcnew System::EventHandler(this, &MyForm::button105_Click);
			// 
			// button86
			// 
			this->button86->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button86.BackgroundImage")));
			this->button86->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button86->FlatAppearance->BorderSize = 0;
			this->button86->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button86->Location = System::Drawing::Point(878, 468);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(142, 105);
			this->button86->TabIndex = 81;
			this->button86->UseVisualStyleBackColor = true;
			this->button86->Click += gcnew System::EventHandler(this, &MyForm::button86_Click_1);
			// 
			// button52
			// 
			this->button52->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button52.BackgroundImage")));
			this->button52->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button52->FlatAppearance->BorderSize = 0;
			this->button52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button52->Location = System::Drawing::Point(1026, 470);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(110, 91);
			this->button52->TabIndex = 80;
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &MyForm::button52_Click_1);
			// 
			// dataGridView16
			// 
			this->dataGridView16->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle77->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle77->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle77->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle77->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle77->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle77->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView16->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle77;
			this->dataGridView16->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView16->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->dataGridViewTextBoxColumn12, 
				this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15});
			this->dataGridView16->Location = System::Drawing::Point(32, 61);
			this->dataGridView16->Name = L"dataGridView16";
			this->dataGridView16->RowTemplate->Height = 24;
			this->dataGridView16->Size = System::Drawing::Size(1087, 401);
			this->dataGridView16->TabIndex = 4;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Види обладнання";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 200;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"Норма витрат на 1 верстат за рік, грн";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->Width = 270;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"Кількість верстатів";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->Width = 120;
			// 
			// dataGridViewTextBoxColumn15
			// 
			dataGridViewCellStyle78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGridViewTextBoxColumn15->DefaultCellStyle = dataGridViewCellStyle78;
			this->dataGridViewTextBoxColumn15->HeaderText = L"Річна сума витрат, грн";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->ReadOnly = true;
			this->dataGridViewTextBoxColumn15->Width = 160;
			// 
			// label224
			// 
			this->label224->AutoSize = true;
			this->label224->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label224->Location = System::Drawing::Point(240, 33);
			this->label224->Name = L"label224";
			this->label224->Size = System::Drawing::Size(661, 25);
			this->label224->TabIndex = 3;
			this->label224->Text = L"Вартість допоміжних матеріалів (за встановленими нормами)";
			// 
			// tabPage24
			// 
			this->tabPage24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage24.BackgroundImage")));
			this->tabPage24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage24->Controls->Add(this->button87);
			this->tabPage24->Controls->Add(this->button64);
			this->tabPage24->Controls->Add(this->textBox73);
			this->tabPage24->Controls->Add(this->label125);
			this->tabPage24->Controls->Add(this->button57);
			this->tabPage24->Controls->Add(this->textBox81);
			this->tabPage24->Controls->Add(this->label133);
			this->tabPage24->Controls->Add(this->label132);
			this->tabPage24->Controls->Add(this->textBox80);
			this->tabPage24->Controls->Add(this->label131);
			this->tabPage24->Controls->Add(this->textBox79);
			this->tabPage24->Controls->Add(this->label130);
			this->tabPage24->Controls->Add(this->label129);
			this->tabPage24->Controls->Add(this->textBox78);
			this->tabPage24->Controls->Add(this->textBox77);
			this->tabPage24->Controls->Add(this->textBox76);
			this->tabPage24->Controls->Add(this->textBox75);
			this->tabPage24->Controls->Add(this->textBox74);
			this->tabPage24->Controls->Add(this->label128);
			this->tabPage24->Controls->Add(this->label127);
			this->tabPage24->Controls->Add(this->label126);
			this->tabPage24->Controls->Add(this->label124);
			this->tabPage24->Controls->Add(this->label123);
			this->tabPage24->Location = System::Drawing::Point(4, 25);
			this->tabPage24->Name = L"tabPage24";
			this->tabPage24->Size = System::Drawing::Size(1992, 1071);
			this->tabPage24->TabIndex = 7;
			this->tabPage24->Text = L"Електроенергія для обладнання";
			this->tabPage24->UseVisualStyleBackColor = true;
			this->tabPage24->Click += gcnew System::EventHandler(this, &MyForm::tabPage24_Click);
			// 
			// button87
			// 
			this->button87->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button87.BackgroundImage")));
			this->button87->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button87->FlatAppearance->BorderSize = 0;
			this->button87->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button87->Location = System::Drawing::Point(1417, 803);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(144, 111);
			this->button87->TabIndex = 63;
			this->button87->UseVisualStyleBackColor = true;
			this->button87->Click += gcnew System::EventHandler(this, &MyForm::button87_Click);
			// 
			// button64
			// 
			this->button64->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button64.BackgroundImage")));
			this->button64->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button64->FlatAppearance->BorderSize = 0;
			this->button64->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button64->Location = System::Drawing::Point(1709, 814);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(141, 88);
			this->button64->TabIndex = 23;
			this->button64->UseVisualStyleBackColor = true;
			this->button64->Visible = false;
			this->button64->Click += gcnew System::EventHandler(this, &MyForm::button64_Click);
			// 
			// textBox73
			// 
			this->textBox73->Location = System::Drawing::Point(870, 510);
			this->textBox73->Multiline = true;
			this->textBox73->Name = L"textBox73";
			this->textBox73->ReadOnly = true;
			this->textBox73->Size = System::Drawing::Size(119, 42);
			this->textBox73->TabIndex = 22;
			// 
			// label125
			// 
			this->label125->AutoSize = true;
			this->label125->BackColor = System::Drawing::Color::White;
			this->label125->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label125->Location = System::Drawing::Point(95, 523);
			this->label125->Name = L"label125";
			this->label125->Size = System::Drawing::Size(635, 20);
			this->label125->TabIndex = 21;
			this->label125->Text = L"Всього електроенергії для верстатів і транспортного обладнання";
			// 
			// button57
			// 
			this->button57->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button57.BackgroundImage")));
			this->button57->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button57->FlatAppearance->BorderSize = 0;
			this->button57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button57->Location = System::Drawing::Point(1567, 814);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(136, 89);
			this->button57->TabIndex = 20;
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::button57_Click);
			// 
			// textBox81
			// 
			this->textBox81->Location = System::Drawing::Point(870, 578);
			this->textBox81->Multiline = true;
			this->textBox81->Name = L"textBox81";
			this->textBox81->ReadOnly = true;
			this->textBox81->Size = System::Drawing::Size(119, 42);
			this->textBox81->TabIndex = 19;
			// 
			// label133
			// 
			this->label133->AutoSize = true;
			this->label133->BackColor = System::Drawing::Color::White;
			this->label133->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label133->Location = System::Drawing::Point(95, 591);
			this->label133->Name = L"label133";
			this->label133->Size = System::Drawing::Size(239, 20);
			this->label133->TabIndex = 18;
			this->label133->Text = L"Вартість електроенергії";
			// 
			// label132
			// 
			this->label132->AutoSize = true;
			this->label132->BackColor = System::Drawing::Color::White;
			this->label132->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label132->Location = System::Drawing::Point(95, 457);
			this->label132->Name = L"label132";
			this->label132->Size = System::Drawing::Size(661, 20);
			this->label132->TabIndex = 17;
			this->label132->Text = L"Необхідна кількість електроенергії для (транспортного) обладнання";
			// 
			// textBox80
			// 
			this->textBox80->Location = System::Drawing::Point(870, 446);
			this->textBox80->Multiline = true;
			this->textBox80->Name = L"textBox80";
			this->textBox80->ReadOnly = true;
			this->textBox80->Size = System::Drawing::Size(119, 42);
			this->textBox80->TabIndex = 16;
			// 
			// label131
			// 
			this->label131->AutoSize = true;
			this->label131->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label131->Location = System::Drawing::Point(96, 506);
			this->label131->Name = L"label131";
			this->label131->Size = System::Drawing::Size(0, 20);
			this->label131->TabIndex = 15;
			// 
			// textBox79
			// 
			this->textBox79->Location = System::Drawing::Point(870, 388);
			this->textBox79->Multiline = true;
			this->textBox79->Name = L"textBox79";
			this->textBox79->ReadOnly = true;
			this->textBox79->Size = System::Drawing::Size(119, 42);
			this->textBox79->TabIndex = 14;
			// 
			// label130
			// 
			this->label130->AutoSize = true;
			this->label130->BackColor = System::Drawing::Color::White;
			this->label130->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label130->Location = System::Drawing::Point(95, 401);
			this->label130->Name = L"label130";
			this->label130->Size = System::Drawing::Size(501, 20);
			this->label130->TabIndex = 13;
			this->label130->Text = L"Необхідна кількість електроенергії для обладнання";
			// 
			// label129
			// 
			this->label129->AutoSize = true;
			this->label129->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label129->Location = System::Drawing::Point(114, 401);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(9, 20);
			this->label129->TabIndex = 12;
			this->label129->Text = L"\r\n";
			// 
			// textBox78
			// 
			this->textBox78->Location = System::Drawing::Point(783, 134);
			this->textBox78->Multiline = true;
			this->textBox78->Name = L"textBox78";
			this->textBox78->Size = System::Drawing::Size(119, 29);
			this->textBox78->TabIndex = 11;
			// 
			// textBox77
			// 
			this->textBox77->Location = System::Drawing::Point(783, 290);
			this->textBox77->Multiline = true;
			this->textBox77->Name = L"textBox77";
			this->textBox77->Size = System::Drawing::Size(119, 42);
			this->textBox77->TabIndex = 10;
			// 
			// textBox76
			// 
			this->textBox76->Location = System::Drawing::Point(783, 232);
			this->textBox76->Multiline = true;
			this->textBox76->Name = L"textBox76";
			this->textBox76->Size = System::Drawing::Size(119, 42);
			this->textBox76->TabIndex = 9;
			// 
			// textBox75
			// 
			this->textBox75->Location = System::Drawing::Point(783, 178);
			this->textBox75->Multiline = true;
			this->textBox75->Name = L"textBox75";
			this->textBox75->Size = System::Drawing::Size(119, 42);
			this->textBox75->TabIndex = 8;
			// 
			// textBox74
			// 
			this->textBox74->Location = System::Drawing::Point(783, 99);
			this->textBox74->Multiline = true;
			this->textBox74->Name = L"textBox74";
			this->textBox74->Size = System::Drawing::Size(119, 29);
			this->textBox74->TabIndex = 7;
			// 
			// label128
			// 
			this->label128->AutoSize = true;
			this->label128->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label128->Location = System::Drawing::Point(26, 312);
			this->label128->Name = L"label128";
			this->label128->Size = System::Drawing::Size(482, 20);
			this->label128->TabIndex = 5;
			this->label128->Text = L"Введить ціна одиниці електроенергії грн./кВт-год";
			// 
			// label127
			// 
			this->label127->AutoSize = true;
			this->label127->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label127->Location = System::Drawing::Point(26, 200);
			this->label127->Name = L"label127";
			this->label127->Size = System::Drawing::Size(546, 20);
			this->label127->TabIndex = 4;
			this->label127->Text = L" Введіть коефіцієнт, що враховує втрати в мережах -0,96";
			// 
			// label126
			// 
			this->label126->AutoSize = true;
			this->label126->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label126->Location = System::Drawing::Point(26, 123);
			this->label126->Name = L"label126";
			this->label126->Size = System::Drawing::Size(637, 40);
			this->label126->TabIndex = 3;
			this->label126->Text = L" Введіть коефіцієнт використання обладнання за потужністю \r\n(для верстатів - 0,6 " 
				L"- 0,7; для транспортного обладнання - 0,3-0,4) ";
			// 
			// label124
			// 
			this->label124->AutoSize = true;
			this->label124->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label124->Location = System::Drawing::Point(26, 263);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(570, 20);
			this->label124->TabIndex = 1;
			this->label124->Text = L"Введить коефіцієнт корисної дії електромоторів - 0,85 - 0,9";
			// 
			// label123
			// 
			this->label123->AutoSize = true;
			this->label123->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label123->Location = System::Drawing::Point(263, 38);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(665, 25);
			this->label123->TabIndex = 0;
			this->label123->Text = L"Розрахунок необхідної клькості електроенергії для обладнання";
			this->label123->Click += gcnew System::EventHandler(this, &MyForm::label123_Click);
			// 
			// tabPage20
			// 
			this->tabPage20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage20.BackgroundImage")));
			this->tabPage20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage20->Controls->Add(this->button107);
			this->tabPage20->Controls->Add(this->button106);
			this->tabPage20->Controls->Add(this->button3);
			this->tabPage20->Controls->Add(this->button89);
			this->tabPage20->Controls->Add(this->label111);
			this->tabPage20->Controls->Add(this->textBox65);
			this->tabPage20->Controls->Add(this->button55);
			this->tabPage20->Controls->Add(this->button54);
			this->tabPage20->Controls->Add(this->button53);
			this->tabPage20->Controls->Add(this->label105);
			this->tabPage20->Controls->Add(this->dataGridView20);
			this->tabPage20->Controls->Add(this->label104);
			this->tabPage20->Controls->Add(this->dataGridView19);
			this->tabPage20->Controls->Add(this->label103);
			this->tabPage20->Controls->Add(this->label102);
			this->tabPage20->Controls->Add(this->dataGridView18);
			this->tabPage20->Location = System::Drawing::Point(4, 25);
			this->tabPage20->Name = L"tabPage20";
			this->tabPage20->Size = System::Drawing::Size(1992, 1071);
			this->tabPage20->TabIndex = 4;
			this->tabPage20->Text = L"Поточний ремонт";
			this->tabPage20->UseVisualStyleBackColor = true;
			this->tabPage20->Click += gcnew System::EventHandler(this, &MyForm::tabPage20_Click);
			// 
			// button107
			// 
			this->button107->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button107.BackgroundImage")));
			this->button107->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button107->FlatAppearance->BorderSize = 0;
			this->button107->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button107->Location = System::Drawing::Point(966, 693);
			this->button107->Name = L"button107";
			this->button107->Size = System::Drawing::Size(101, 48);
			this->button107->TabIndex = 80;
			this->button107->UseVisualStyleBackColor = true;
			this->button107->Click += gcnew System::EventHandler(this, &MyForm::button107_Click);
			// 
			// button106
			// 
			this->button106->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button106.BackgroundImage")));
			this->button106->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button106->FlatAppearance->BorderSize = 0;
			this->button106->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button106->Location = System::Drawing::Point(966, 342);
			this->button106->Name = L"button106";
			this->button106->Size = System::Drawing::Size(101, 48);
			this->button106->TabIndex = 79;
			this->button106->UseVisualStyleBackColor = true;
			this->button106->Click += gcnew System::EventHandler(this, &MyForm::button106_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(1573, 834);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 108);
			this->button3->TabIndex = 64;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button89
			// 
			this->button89->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button89.BackgroundImage")));
			this->button89->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button89->FlatAppearance->BorderSize = 0;
			this->button89->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button89->Location = System::Drawing::Point(1714, 840);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(149, 96);
			this->button89->TabIndex = 63;
			this->button89->UseVisualStyleBackColor = true;
			this->button89->Visible = false;
			this->button89->Click += gcnew System::EventHandler(this, &MyForm::button89_Click);
			// 
			// label111
			// 
			this->label111->AutoSize = true;
			this->label111->BackColor = System::Drawing::Color::White;
			this->label111->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label111->Location = System::Drawing::Point(352, 916);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(431, 20);
			this->label111->TabIndex = 11;
			this->label111->Text = L"Введіть відсоток дорогоцінного інструменту";
			// 
			// textBox65
			// 
			this->textBox65->Location = System::Drawing::Point(896, 916);
			this->textBox65->Name = L"textBox65";
			this->textBox65->Size = System::Drawing::Size(100, 22);
			this->textBox65->TabIndex = 10;
			// 
			// button55
			// 
			this->button55->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button55.BackgroundImage")));
			this->button55->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button55->FlatAppearance->BorderSize = 0;
			this->button55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button55->Location = System::Drawing::Point(1017, 906);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(116, 55);
			this->button55->TabIndex = 9;
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Visible = false;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::button55_Click);
			// 
			// button54
			// 
			this->button54->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button54.BackgroundImage")));
			this->button54->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button54->FlatAppearance->BorderSize = 0;
			this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button54->Location = System::Drawing::Point(1073, 693);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(106, 53);
			this->button54->TabIndex = 8;
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Visible = false;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
			// 
			// button53
			// 
			this->button53->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button53.BackgroundImage")));
			this->button53->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button53->FlatAppearance->BorderSize = 0;
			this->button53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button53->Location = System::Drawing::Point(1073, 338);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(106, 52);
			this->button53->TabIndex = 7;
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &MyForm::button53_Click);
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label105->Location = System::Drawing::Point(128, 739);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(175, 20);
			this->label105->TabIndex = 6;
			this->label105->Text = L"Ремон оснащення";
			// 
			// dataGridView20
			// 
			this->dataGridView20->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle79->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle79->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle79->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle79->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle79->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle79->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView20->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle79;
			this->dataGridView20->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView20->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->dataGridViewTextBoxColumn28, 
				this->dataGridViewTextBoxColumn31});
			this->dataGridView20->Location = System::Drawing::Point(132, 762);
			this->dataGridView20->Name = L"dataGridView20";
			this->dataGridView20->RowTemplate->Height = 24;
			this->dataGridView20->Size = System::Drawing::Size(1001, 142);
			this->dataGridView20->TabIndex = 5;
			// 
			// dataGridViewTextBoxColumn28
			// 
			this->dataGridViewTextBoxColumn28->HeaderText = L"Вид інструменту";
			this->dataGridViewTextBoxColumn28->Name = L"dataGridViewTextBoxColumn28";
			this->dataGridViewTextBoxColumn28->Width = 605;
			// 
			// dataGridViewTextBoxColumn31
			// 
			dataGridViewCellStyle80->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGridViewTextBoxColumn31->DefaultCellStyle = dataGridViewCellStyle80;
			this->dataGridViewTextBoxColumn31->HeaderText = L"Річні витрати, грн";
			this->dataGridViewTextBoxColumn31->Name = L"dataGridViewTextBoxColumn31";
			this->dataGridViewTextBoxColumn31->ReadOnly = true;
			this->dataGridViewTextBoxColumn31->Width = 150;
			// 
			// label104
			// 
			this->label104->AutoSize = true;
			this->label104->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label104->Location = System::Drawing::Point(128, 404);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(282, 20);
			this->label104->TabIndex = 4;
			this->label104->Text = L"Ремонт електричної частини";
			// 
			// dataGridView19
			// 
			this->dataGridView19->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle81->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle81->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle81->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle81->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle81->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle81->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView19->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle81;
			this->dataGridView19->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView19->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->dataGridViewTextBoxColumn16, 
				this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn26, this->dataGridViewTextBoxColumn27});
			this->dataGridView19->Location = System::Drawing::Point(132, 427);
			this->dataGridView19->Name = L"dataGridView19";
			this->dataGridView19->RowTemplate->Height = 24;
			this->dataGridView19->Size = System::Drawing::Size(1047, 260);
			this->dataGridView19->TabIndex = 3;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"Вид обладнання";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->Width = 150;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"Річна норма витрат, грн";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->Width = 200;
			// 
			// dataGridViewTextBoxColumn26
			// 
			this->dataGridViewTextBoxColumn26->HeaderText = L"Кількість ремонтних одиниць";
			this->dataGridViewTextBoxColumn26->Name = L"dataGridViewTextBoxColumn26";
			this->dataGridViewTextBoxColumn26->Width = 250;
			// 
			// dataGridViewTextBoxColumn27
			// 
			dataGridViewCellStyle82->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGridViewTextBoxColumn27->DefaultCellStyle = dataGridViewCellStyle82;
			this->dataGridViewTextBoxColumn27->HeaderText = L"Річні витрати, грн";
			this->dataGridViewTextBoxColumn27->Name = L"dataGridViewTextBoxColumn27";
			this->dataGridViewTextBoxColumn27->ReadOnly = true;
			this->dataGridViewTextBoxColumn27->Width = 150;
			// 
			// label103
			// 
			this->label103->AutoSize = true;
			this->label103->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label103->Location = System::Drawing::Point(128, 41);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(266, 20);
			this->label103->TabIndex = 2;
			this->label103->Text = L"Ремонт механічної частини";
			// 
			// label102
			// 
			this->label102->AutoSize = true;
			this->label102->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label102->Location = System::Drawing::Point(342, 10);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(441, 25);
			this->label102->TabIndex = 1;
			this->label102->Text = L"Витрати на поточний ремонт обладнання";
			// 
			// dataGridView18
			// 
			this->dataGridView18->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle83->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle83->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle83->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle83->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle83->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle83->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView18->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle83;
			this->dataGridView18->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView18->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->Column91, 
				this->Column92, this->Column93, this->Column94});
			this->dataGridView18->Location = System::Drawing::Point(132, 64);
			this->dataGridView18->Name = L"dataGridView18";
			this->dataGridView18->RowTemplate->Height = 24;
			this->dataGridView18->Size = System::Drawing::Size(1047, 268);
			this->dataGridView18->TabIndex = 0;
			// 
			// Column91
			// 
			this->Column91->HeaderText = L"Вид обладнання";
			this->Column91->Name = L"Column91";
			this->Column91->Width = 150;
			// 
			// Column92
			// 
			this->Column92->HeaderText = L"Річна норма витрат, грн";
			this->Column92->Name = L"Column92";
			this->Column92->Width = 200;
			// 
			// Column93
			// 
			this->Column93->HeaderText = L"Кількість ремонтних одиниць";
			this->Column93->Name = L"Column93";
			this->Column93->Width = 250;
			// 
			// Column94
			// 
			dataGridViewCellStyle84->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column94->DefaultCellStyle = dataGridViewCellStyle84;
			this->Column94->HeaderText = L"Річні витрати, грн";
			this->Column94->Name = L"Column94";
			this->Column94->ReadOnly = true;
			this->Column94->Width = 150;
			// 
			// tabPage25
			// 
			this->tabPage25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage25.BackgroundImage")));
			this->tabPage25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage25->Controls->Add(this->button88);
			this->tabPage25->Controls->Add(this->textBox122);
			this->tabPage25->Controls->Add(this->label186);
			this->tabPage25->Controls->Add(this->label185);
			this->tabPage25->Controls->Add(this->textBox121);
			this->tabPage25->Controls->Add(this->label184);
			this->tabPage25->Controls->Add(this->textBox120);
			this->tabPage25->Controls->Add(this->label176);
			this->tabPage25->Controls->Add(this->textBox115);
			this->tabPage25->Controls->Add(this->label174);
			this->tabPage25->Controls->Add(this->textBox114);
			this->tabPage25->Controls->Add(this->label175);
			this->tabPage25->Controls->Add(this->textBox113);
			this->tabPage25->Controls->Add(this->textBox112);
			this->tabPage25->Controls->Add(this->label173);
			this->tabPage25->Controls->Add(this->textBox111);
			this->tabPage25->Controls->Add(this->label172);
			this->tabPage25->Controls->Add(this->textBox110);
			this->tabPage25->Controls->Add(this->label171);
			this->tabPage25->Controls->Add(this->textBox109);
			this->tabPage25->Controls->Add(this->label170);
			this->tabPage25->Controls->Add(this->textBox108);
			this->tabPage25->Controls->Add(this->label169);
			this->tabPage25->Controls->Add(this->button66);
			this->tabPage25->Controls->Add(this->button58);
			this->tabPage25->Controls->Add(this->label149);
			this->tabPage25->Controls->Add(this->textBox92);
			this->tabPage25->Controls->Add(this->label148);
			this->tabPage25->Controls->Add(this->textBox91);
			this->tabPage25->Controls->Add(this->label147);
			this->tabPage25->Controls->Add(this->textBox90);
			this->tabPage25->Controls->Add(this->label146);
			this->tabPage25->Controls->Add(this->textBox89);
			this->tabPage25->Controls->Add(this->label145);
			this->tabPage25->Controls->Add(this->label144);
			this->tabPage25->Controls->Add(this->textBox88);
			this->tabPage25->Controls->Add(this->label143);
			this->tabPage25->Controls->Add(this->label142);
			this->tabPage25->Controls->Add(this->label140);
			this->tabPage25->Controls->Add(this->textBox86);
			this->tabPage25->Controls->Add(this->label141);
			this->tabPage25->Controls->Add(this->textBox87);
			this->tabPage25->Controls->Add(this->label139);
			this->tabPage25->Controls->Add(this->label138);
			this->tabPage25->Controls->Add(this->textBox85);
			this->tabPage25->Controls->Add(this->label137);
			this->tabPage25->Controls->Add(this->textBox84);
			this->tabPage25->Controls->Add(this->label136);
			this->tabPage25->Controls->Add(this->textBox83);
			this->tabPage25->Controls->Add(this->label135);
			this->tabPage25->Location = System::Drawing::Point(4, 25);
			this->tabPage25->Name = L"tabPage25";
			this->tabPage25->Size = System::Drawing::Size(1992, 1071);
			this->tabPage25->TabIndex = 8;
			this->tabPage25->Text = L"Кошторис адмінстративних(цехових) витрат";
			this->tabPage25->UseVisualStyleBackColor = true;
			// 
			// button88
			// 
			this->button88->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button88.BackgroundImage")));
			this->button88->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button88->FlatAppearance->BorderSize = 0;
			this->button88->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button88->Location = System::Drawing::Point(1396, 828);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(156, 100);
			this->button88->TabIndex = 83;
			this->button88->UseVisualStyleBackColor = true;
			this->button88->Click += gcnew System::EventHandler(this, &MyForm::button88_Click);
			// 
			// textBox122
			// 
			this->textBox122->Location = System::Drawing::Point(1418, 96);
			this->textBox122->Multiline = true;
			this->textBox122->Name = L"textBox122";
			this->textBox122->ReadOnly = true;
			this->textBox122->Size = System::Drawing::Size(119, 42);
			this->textBox122->TabIndex = 82;
			// 
			// label186
			// 
			this->label186->AutoSize = true;
			this->label186->BackColor = System::Drawing::Color::White;
			this->label186->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label186->Location = System::Drawing::Point(930, 113);
			this->label186->Name = L"label186";
			this->label186->Size = System::Drawing::Size(315, 25);
			this->label186->TabIndex = 81;
			this->label186->Text = L"Кількість освітлюваних точок";
			// 
			// label185
			// 
			this->label185->AutoSize = true;
			this->label185->BackColor = System::Drawing::Color::White;
			this->label185->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label185->Location = System::Drawing::Point(83, 227);
			this->label185->Name = L"label185";
			this->label185->Size = System::Drawing::Size(257, 20);
			this->label185->TabIndex = 80;
			this->label185->Text = L"Ват на 1 метр квадратний";
			// 
			// textBox121
			// 
			this->textBox121->Location = System::Drawing::Point(749, 227);
			this->textBox121->Multiline = true;
			this->textBox121->Name = L"textBox121";
			this->textBox121->Size = System::Drawing::Size(119, 42);
			this->textBox121->TabIndex = 79;
			// 
			// label184
			// 
			this->label184->AutoSize = true;
			this->label184->BackColor = System::Drawing::Color::White;
			this->label184->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label184->Location = System::Drawing::Point(82, 896);
			this->label184->Name = L"label184";
			this->label184->Size = System::Drawing::Size(383, 20);
			this->label184->TabIndex = 78;
			this->label184->Text = L"Вартість 1 кубометру  стислого повітря";
			// 
			// textBox120
			// 
			this->textBox120->Location = System::Drawing::Point(778, 886);
			this->textBox120->Multiline = true;
			this->textBox120->Name = L"textBox120";
			this->textBox120->Size = System::Drawing::Size(119, 42);
			this->textBox120->TabIndex = 77;
			// 
			// label176
			// 
			this->label176->AutoSize = true;
			this->label176->BackColor = System::Drawing::Color::White;
			this->label176->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label176->Location = System::Drawing::Point(930, 618);
			this->label176->Name = L"label176";
			this->label176->Size = System::Drawing::Size(271, 25);
			this->label176->TabIndex = 76;
			this->label176->Text = L"Сумарна вартість витрат";
			// 
			// textBox115
			// 
			this->textBox115->Location = System::Drawing::Point(1418, 612);
			this->textBox115->Multiline = true;
			this->textBox115->Name = L"textBox115";
			this->textBox115->ReadOnly = true;
			this->textBox115->Size = System::Drawing::Size(119, 42);
			this->textBox115->TabIndex = 75;
			// 
			// label174
			// 
			this->label174->AutoSize = true;
			this->label174->BackColor = System::Drawing::Color::White;
			this->label174->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label174->Location = System::Drawing::Point(930, 537);
			this->label174->Name = L"label174";
			this->label174->Size = System::Drawing::Size(377, 25);
			this->label174->TabIndex = 74;
			this->label174->Text = L"Вартість стисненого повітря (м/3)  ";
			// 
			// textBox114
			// 
			this->textBox114->Location = System::Drawing::Point(1418, 531);
			this->textBox114->Multiline = true;
			this->textBox114->Name = L"textBox114";
			this->textBox114->ReadOnly = true;
			this->textBox114->Size = System::Drawing::Size(119, 42);
			this->textBox114->TabIndex = 73;
			// 
			// label175
			// 
			this->label175->AutoSize = true;
			this->label175->BackColor = System::Drawing::Color::White;
			this->label175->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label175->Location = System::Drawing::Point(930, 465);
			this->label175->Name = L"label175";
			this->label175->Size = System::Drawing::Size(374, 25);
			this->label175->TabIndex = 72;
			this->label175->Text = L"Витрати стисненого повітря (м/3)  ";
			// 
			// textBox113
			// 
			this->textBox113->Location = System::Drawing::Point(1418, 459);
			this->textBox113->Multiline = true;
			this->textBox113->Name = L"textBox113";
			this->textBox113->ReadOnly = true;
			this->textBox113->Size = System::Drawing::Size(119, 42);
			this->textBox113->TabIndex = 71;
			// 
			// textBox112
			// 
			this->textBox112->Location = System::Drawing::Point(1418, 379);
			this->textBox112->Multiline = true;
			this->textBox112->Name = L"textBox112";
			this->textBox112->ReadOnly = true;
			this->textBox112->Size = System::Drawing::Size(119, 42);
			this->textBox112->TabIndex = 69;
			// 
			// label173
			// 
			this->label173->AutoSize = true;
			this->label173->BackColor = System::Drawing::Color::White;
			this->label173->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label173->Location = System::Drawing::Point(930, 379);
			this->label173->Name = L"label173";
			this->label173->Size = System::Drawing::Size(362, 50);
			this->label173->TabIndex = 68;
			this->label173->Text = L"Вартість води для господарсько - \r\nпобутових потреб";
			// 
			// textBox111
			// 
			this->textBox111->Location = System::Drawing::Point(1418, 307);
			this->textBox111->Multiline = true;
			this->textBox111->Name = L"textBox111";
			this->textBox111->ReadOnly = true;
			this->textBox111->Size = System::Drawing::Size(119, 42);
			this->textBox111->TabIndex = 67;
			// 
			// label172
			// 
			this->label172->AutoSize = true;
			this->label172->BackColor = System::Drawing::Color::White;
			this->label172->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label172->Location = System::Drawing::Point(930, 307);
			this->label172->Name = L"label172";
			this->label172->Size = System::Drawing::Size(353, 50);
			this->label172->TabIndex = 66;
			this->label172->Text = L"Витрати води для господарсько -\r\n побутових потреб ";
			// 
			// textBox110
			// 
			this->textBox110->Location = System::Drawing::Point(1418, 231);
			this->textBox110->Multiline = true;
			this->textBox110->Name = L"textBox110";
			this->textBox110->ReadOnly = true;
			this->textBox110->Size = System::Drawing::Size(119, 42);
			this->textBox110->TabIndex = 65;
			// 
			// label171
			// 
			this->label171->AutoSize = true;
			this->label171->BackColor = System::Drawing::Color::White;
			this->label171->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label171->Location = System::Drawing::Point(930, 248);
			this->label171->Name = L"label171";
			this->label171->Size = System::Drawing::Size(402, 25);
			this->label171->TabIndex = 64;
			this->label171->Text = L"Вартість води для виробничих потреб";
			// 
			// textBox109
			// 
			this->textBox109->Location = System::Drawing::Point(1418, 168);
			this->textBox109->Multiline = true;
			this->textBox109->Name = L"textBox109";
			this->textBox109->ReadOnly = true;
			this->textBox109->Size = System::Drawing::Size(119, 42);
			this->textBox109->TabIndex = 63;
			// 
			// label170
			// 
			this->label170->AutoSize = true;
			this->label170->BackColor = System::Drawing::Color::White;
			this->label170->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label170->Location = System::Drawing::Point(930, 185);
			this->label170->Name = L"label170";
			this->label170->Size = System::Drawing::Size(399, 25);
			this->label170->TabIndex = 62;
			this->label170->Text = L"Витрати води для виробничих потреб\r\n";
			// 
			// textBox108
			// 
			this->textBox108->Location = System::Drawing::Point(1418, 29);
			this->textBox108->Multiline = true;
			this->textBox108->Name = L"textBox108";
			this->textBox108->ReadOnly = true;
			this->textBox108->Size = System::Drawing::Size(119, 42);
			this->textBox108->TabIndex = 61;
			// 
			// label169
			// 
			this->label169->AutoSize = true;
			this->label169->BackColor = System::Drawing::Color::White;
			this->label169->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label169->Location = System::Drawing::Point(930, 39);
			this->label169->Name = L"label169";
			this->label169->Size = System::Drawing::Size(424, 25);
			this->label169->TabIndex = 60;
			this->label169->Text = L"Вартість електроенергії для освітлення";
			// 
			// button66
			// 
			this->button66->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button66.BackgroundImage")));
			this->button66->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button66->FlatAppearance->BorderSize = 0;
			this->button66->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button66->Location = System::Drawing::Point(1712, 834);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(155, 82);
			this->button66->TabIndex = 59;
			this->button66->Text = L"Далі";
			this->button66->UseVisualStyleBackColor = true;
			this->button66->Visible = false;
			this->button66->Click += gcnew System::EventHandler(this, &MyForm::button66_Click);
			// 
			// button58
			// 
			this->button58->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button58.BackgroundImage")));
			this->button58->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button58->FlatAppearance->BorderSize = 0;
			this->button58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button58->Location = System::Drawing::Point(1558, 834);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(155, 82);
			this->button58->TabIndex = 58;
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::button58_Click);
			// 
			// label149
			// 
			this->label149->AutoSize = true;
			this->label149->BackColor = System::Drawing::Color::White;
			this->label149->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label149->Location = System::Drawing::Point(82, 837);
			this->label149->Name = L"label149";
			this->label149->Size = System::Drawing::Size(417, 20);
			this->label149->TabIndex = 57;
			this->label149->Text = L"Коефіцієнт використання пневмопристроїв";
			// 
			// textBox92
			// 
			this->textBox92->Location = System::Drawing::Point(778, 827);
			this->textBox92->Multiline = true;
			this->textBox92->Name = L"textBox92";
			this->textBox92->Size = System::Drawing::Size(119, 42);
			this->textBox92->TabIndex = 56;
			// 
			// label148
			// 
			this->label148->AutoSize = true;
			this->label148->BackColor = System::Drawing::Color::White;
			this->label148->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label148->Location = System::Drawing::Point(82, 783);
			this->label148->Name = L"label148";
			this->label148->Size = System::Drawing::Size(439, 20);
			this->label148->TabIndex = 55;
			this->label148->Text = L"Кількість приймальникоів стисненого повітря";
			// 
			// textBox91
			// 
			this->textBox91->Location = System::Drawing::Point(778, 770);
			this->textBox91->Multiline = true;
			this->textBox91->Name = L"textBox91";
			this->textBox91->Size = System::Drawing::Size(119, 42);
			this->textBox91->TabIndex = 54;
			// 
			// label147
			// 
			this->label147->AutoSize = true;
			this->label147->BackColor = System::Drawing::Color::White;
			this->label147->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label147->Location = System::Drawing::Point(82, 726);
			this->label147->Name = L"label147";
			this->label147->Size = System::Drawing::Size(609, 20);
			this->label147->TabIndex = 53;
			this->label147->Text = L"Витрати повітря одним приймальником на один пневмоциліндр";
			// 
			// textBox90
			// 
			this->textBox90->Location = System::Drawing::Point(778, 714);
			this->textBox90->Multiline = true;
			this->textBox90->Name = L"textBox90";
			this->textBox90->Size = System::Drawing::Size(119, 42);
			this->textBox90->TabIndex = 52;
			// 
			// label146
			// 
			this->label146->AutoSize = true;
			this->label146->BackColor = System::Drawing::Color::White;
			this->label146->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label146->Location = System::Drawing::Point(82, 669);
			this->label146->Name = L"label146";
			this->label146->Size = System::Drawing::Size(468, 20);
			this->label146->TabIndex = 51;
			this->label146->Text = L"Коефіцієнт що враховує витоки повітря з мережі";
			// 
			// textBox89
			// 
			this->textBox89->Location = System::Drawing::Point(778, 657);
			this->textBox89->Multiline = true;
			this->textBox89->Name = L"textBox89";
			this->textBox89->Size = System::Drawing::Size(119, 42);
			this->textBox89->TabIndex = 50;
			// 
			// label145
			// 
			this->label145->AutoSize = true;
			this->label145->BackColor = System::Drawing::Color::White;
			this->label145->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label145->Location = System::Drawing::Point(49, 614);
			this->label145->Name = L"label145";
			this->label145->Size = System::Drawing::Size(374, 25);
			this->label145->TabIndex = 49;
			this->label145->Text = L"Витрати стисненого повітря (м/3)  ";
			// 
			// label144
			// 
			this->label144->AutoSize = true;
			this->label144->BackColor = System::Drawing::Color::White;
			this->label144->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label144->Location = System::Drawing::Point(82, 560);
			this->label144->Name = L"label144";
			this->label144->Size = System::Drawing::Size(478, 20);
			this->label144->TabIndex = 48;
			this->label144->Text = L"Норма витрат води за зміну на одного робітника ";
			// 
			// textBox88
			// 
			this->textBox88->Location = System::Drawing::Point(594, 549);
			this->textBox88->Multiline = true;
			this->textBox88->Name = L"textBox88";
			this->textBox88->Size = System::Drawing::Size(119, 42);
			this->textBox88->TabIndex = 47;
			// 
			// label143
			// 
			this->label143->AutoSize = true;
			this->label143->BackColor = System::Drawing::Color::White;
			this->label143->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label143->Location = System::Drawing::Point(49, 500);
			this->label143->Name = L"label143";
			this->label143->Size = System::Drawing::Size(549, 25);
			this->label143->TabIndex = 46;
			this->label143->Text = L"Витрати води для господарсько - побутових потреб ";
			// 
			// label142
			// 
			this->label142->AutoSize = true;
			this->label142->BackColor = System::Drawing::Color::White;
			this->label142->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label142->Location = System::Drawing::Point(39, 396);
			this->label142->Name = L"label142";
			this->label142->Size = System::Drawing::Size(402, 25);
			this->label142->TabIndex = 45;
			this->label142->Text = L"Вартість води для виробничих потреб";
			// 
			// label140
			// 
			this->label140->AutoSize = true;
			this->label140->BackColor = System::Drawing::Color::White;
			this->label140->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label140->Location = System::Drawing::Point(82, 444);
			this->label140->Name = L"label140";
			this->label140->Size = System::Drawing::Size(447, 20);
			this->label140->TabIndex = 44;
			this->label140->Text = L"Вартість 1 кубометру водопровідної води, грн";
			// 
			// textBox86
			// 
			this->textBox86->Location = System::Drawing::Point(594, 433);
			this->textBox86->Multiline = true;
			this->textBox86->Name = L"textBox86";
			this->textBox86->Size = System::Drawing::Size(119, 42);
			this->textBox86->TabIndex = 43;
			// 
			// label141
			// 
			this->label141->AutoSize = true;
			this->label141->BackColor = System::Drawing::Color::White;
			this->label141->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label141->Location = System::Drawing::Point(82, 339);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(356, 20);
			this->label141->TabIndex = 42;
			this->label141->Text = L"Річна витрата води на один верстат";
			// 
			// textBox87
			// 
			this->textBox87->Location = System::Drawing::Point(594, 330);
			this->textBox87->Multiline = true;
			this->textBox87->Name = L"textBox87";
			this->textBox87->Size = System::Drawing::Size(119, 42);
			this->textBox87->TabIndex = 41;
			// 
			// label139
			// 
			this->label139->AutoSize = true;
			this->label139->BackColor = System::Drawing::Color::White;
			this->label139->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label139->Location = System::Drawing::Point(39, 292);
			this->label139->Name = L"label139";
			this->label139->Size = System::Drawing::Size(790, 25);
			this->label139->TabIndex = 40;
			this->label139->Text = L"Витрати води для виробничих потреб що дорівнюють для виготовленя ЗОР";
			// 
			// label138
			// 
			this->label138->AutoSize = true;
			this->label138->BackColor = System::Drawing::Color::White;
			this->label138->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label138->Location = System::Drawing::Point(83, 179);
			this->label138->Name = L"label138";
			this->label138->Size = System::Drawing::Size(369, 20);
			this->label138->TabIndex = 39;
			this->label138->Text = L"Процент втрат енергії у мережі (4-5%)";
			// 
			// textBox85
			// 
			this->textBox85->Location = System::Drawing::Point(749, 179);
			this->textBox85->Multiline = true;
			this->textBox85->Name = L"textBox85";
			this->textBox85->Size = System::Drawing::Size(119, 42);
			this->textBox85->TabIndex = 38;
			// 
			// label137
			// 
			this->label137->AutoSize = true;
			this->label137->BackColor = System::Drawing::Color::White;
			this->label137->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label137->Location = System::Drawing::Point(83, 131);
			this->label137->Name = L"label137";
			this->label137->Size = System::Drawing::Size(175, 20);
			this->label137->TabIndex = 37;
			this->label137->Text = L"Потужність точки";
			// 
			// textBox84
			// 
			this->textBox84->Location = System::Drawing::Point(749, 131);
			this->textBox84->Multiline = true;
			this->textBox84->Name = L"textBox84";
			this->textBox84->Size = System::Drawing::Size(119, 42);
			this->textBox84->TabIndex = 36;
			// 
			// label136
			// 
			this->label136->AutoSize = true;
			this->label136->BackColor = System::Drawing::Color::White;
			this->label136->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label136->Location = System::Drawing::Point(83, 83);
			this->label136->Name = L"label136";
			this->label136->Size = System::Drawing::Size(314, 20);
			this->label136->TabIndex = 35;
			this->label136->Text = L"Коефіцієнт одночасного горіння";
			// 
			// textBox83
			// 
			this->textBox83->Location = System::Drawing::Point(749, 83);
			this->textBox83->Multiline = true;
			this->textBox83->Name = L"textBox83";
			this->textBox83->Size = System::Drawing::Size(119, 42);
			this->textBox83->TabIndex = 34;
			// 
			// label135
			// 
			this->label135->AutoSize = true;
			this->label135->BackColor = System::Drawing::Color::White;
			this->label135->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label135->Location = System::Drawing::Point(40, 25);
			this->label135->Name = L"label135";
			this->label135->Size = System::Drawing::Size(424, 25);
			this->label135->TabIndex = 33;
			this->label135->Text = L"Вартість електроенергії для освітлення";
			// 
			// tabPage28
			// 
			this->tabPage28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage28.BackgroundImage")));
			this->tabPage28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage28->Controls->Add(this->textBox1);
			this->tabPage28->Controls->Add(this->textBox2);
			this->tabPage28->Controls->Add(this->label4);
			this->tabPage28->Controls->Add(this->label5);
			this->tabPage28->Controls->Add(this->label6);
			this->tabPage28->Controls->Add(this->label3);
			this->tabPage28->Controls->Add(this->button78);
			this->tabPage28->Controls->Add(this->button4);
			this->tabPage28->Controls->Add(this->button90);
			this->tabPage28->Controls->Add(this->textBox123);
			this->tabPage28->Controls->Add(this->textBox124);
			this->tabPage28->Controls->Add(this->label187);
			this->tabPage28->Controls->Add(this->label188);
			this->tabPage28->Controls->Add(this->button71);
			this->tabPage28->Controls->Add(this->textBox118);
			this->tabPage28->Controls->Add(this->textBox119);
			this->tabPage28->Controls->Add(this->label181);
			this->tabPage28->Controls->Add(this->label182);
			this->tabPage28->Controls->Add(this->label183);
			this->tabPage28->Controls->Add(this->textBox116);
			this->tabPage28->Controls->Add(this->textBox117);
			this->tabPage28->Controls->Add(this->label178);
			this->tabPage28->Controls->Add(this->label179);
			this->tabPage28->Controls->Add(this->label180);
			this->tabPage28->Controls->Add(this->label177);
			this->tabPage28->Controls->Add(this->textBox71);
			this->tabPage28->Controls->Add(this->textBox72);
			this->tabPage28->Controls->Add(this->label120);
			this->tabPage28->Controls->Add(this->label121);
			this->tabPage28->Controls->Add(this->label122);
			this->tabPage28->Controls->Add(this->textBox68);
			this->tabPage28->Controls->Add(this->textBox70);
			this->tabPage28->Controls->Add(this->label115);
			this->tabPage28->Controls->Add(this->label118);
			this->tabPage28->Controls->Add(this->label119);
			this->tabPage28->Controls->Add(this->dataGridView26);
			this->tabPage28->Controls->Add(this->button56);
			this->tabPage28->Controls->Add(this->textBox69);
			this->tabPage28->Controls->Add(this->label117);
			this->tabPage28->Controls->Add(this->label116);
			this->tabPage28->Controls->Add(this->textBox67);
			this->tabPage28->Controls->Add(this->textBox66);
			this->tabPage28->Controls->Add(this->label114);
			this->tabPage28->Controls->Add(this->label113);
			this->tabPage28->Controls->Add(this->label112);
			this->tabPage28->Location = System::Drawing::Point(4, 25);
			this->tabPage28->Name = L"tabPage28";
			this->tabPage28->Size = System::Drawing::Size(1992, 1071);
			this->tabPage28->TabIndex = 9;
			this->tabPage28->Text = L"Річний ФОП доп. робітників";
			this->tabPage28->UseVisualStyleBackColor = true;
			this->tabPage28->Click += gcnew System::EventHandler(this, &MyForm::tabPage28_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(608, 510);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 80;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(608, 472);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 79;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(505, 510);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 18);
			this->label4->TabIndex = 78;
			this->label4->Text = L"ЄСВслюс";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(505, 472);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 18);
			this->label5->TabIndex = 77;
			this->label5->Text = L"ЗПслюс";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(505, 439);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(205, 20);
			this->label6->TabIndex = 76;
			this->label6->Text = L"Річний ФОП слюсаря";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(500, 398);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(389, 24);
			this->label3->TabIndex = 75;
			this->label3->Text = L"Якщо в розрахунках присутній слюсар";
			// 
			// button78
			// 
			this->button78->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button78.BackgroundImage")));
			this->button78->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button78->FlatAppearance->BorderSize = 0;
			this->button78->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button78->Location = System::Drawing::Point(441, 538);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(186, 75);
			this->button78->TabIndex = 74;
			this->button78->UseVisualStyleBackColor = true;
			this->button78->Click += gcnew System::EventHandler(this, &MyForm::button78_Click_1);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(1572, 793);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 112);
			this->button4->TabIndex = 73;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button90
			// 
			this->button90->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button90.BackgroundImage")));
			this->button90->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button90->FlatAppearance->BorderSize = 0;
			this->button90->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button90->Location = System::Drawing::Point(1710, 810);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(132, 79);
			this->button90->TabIndex = 72;
			this->button90->UseVisualStyleBackColor = true;
			this->button90->Click += gcnew System::EventHandler(this, &MyForm::button90_Click);
			// 
			// textBox123
			// 
			this->textBox123->Location = System::Drawing::Point(227, 524);
			this->textBox123->Name = L"textBox123";
			this->textBox123->Size = System::Drawing::Size(100, 22);
			this->textBox123->TabIndex = 71;
			// 
			// textBox124
			// 
			this->textBox124->Location = System::Drawing::Point(227, 486);
			this->textBox124->Name = L"textBox124";
			this->textBox124->Size = System::Drawing::Size(100, 22);
			this->textBox124->TabIndex = 70;
			// 
			// label187
			// 
			this->label187->AutoSize = true;
			this->label187->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label187->Location = System::Drawing::Point(98, 523);
			this->label187->Name = L"label187";
			this->label187->Size = System::Drawing::Size(87, 18);
			this->label187->TabIndex = 69;
			this->label187->Text = L"ЄСВкомір";
			// 
			// label188
			// 
			this->label188->AutoSize = true;
			this->label188->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label188->Location = System::Drawing::Point(114, 490);
			this->label188->Name = L"label188";
			this->label188->Size = System::Drawing::Size(75, 18);
			this->label188->TabIndex = 68;
			this->label188->Text = L"ЗПкомір";
			// 
			// button71
			// 
			this->button71->Location = System::Drawing::Point(541, 286);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(225, 55);
			this->button71->TabIndex = 67;
			this->button71->Text = L"Розрахувати обслуговуючий персонал";
			this->button71->UseVisualStyleBackColor = true;
			this->button71->Click += gcnew System::EventHandler(this, &MyForm::button71_Click);
			// 
			// textBox118
			// 
			this->textBox118->Location = System::Drawing::Point(640, 239);
			this->textBox118->Name = L"textBox118";
			this->textBox118->Size = System::Drawing::Size(100, 22);
			this->textBox118->TabIndex = 66;
			// 
			// textBox119
			// 
			this->textBox119->Location = System::Drawing::Point(640, 201);
			this->textBox119->Name = L"textBox119";
			this->textBox119->Size = System::Drawing::Size(100, 22);
			this->textBox119->TabIndex = 65;
			// 
			// label181
			// 
			this->label181->AutoSize = true;
			this->label181->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label181->Location = System::Drawing::Point(537, 239);
			this->label181->Name = L"label181";
			this->label181->Size = System::Drawing::Size(90, 18);
			this->label181->TabIndex = 64;
			this->label181->Text = L"ЄСВналад";
			// 
			// label182
			// 
			this->label182->AutoSize = true;
			this->label182->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label182->Location = System::Drawing::Point(537, 201);
			this->label182->Name = L"label182";
			this->label182->Size = System::Drawing::Size(78, 18);
			this->label182->TabIndex = 63;
			this->label182->Text = L"ЗПналад";
			// 
			// label183
			// 
			this->label183->AutoSize = true;
			this->label183->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label183->Location = System::Drawing::Point(537, 168);
			this->label183->Name = L"label183";
			this->label183->Size = System::Drawing::Size(232, 20);
			this->label183->TabIndex = 62;
			this->label183->Text = L"Річний ФОП наладчиків";
			// 
			// textBox116
			// 
			this->textBox116->Location = System::Drawing::Point(640, 118);
			this->textBox116->Name = L"textBox116";
			this->textBox116->Size = System::Drawing::Size(100, 22);
			this->textBox116->TabIndex = 61;
			// 
			// textBox117
			// 
			this->textBox117->Location = System::Drawing::Point(640, 80);
			this->textBox117->Name = L"textBox117";
			this->textBox117->Size = System::Drawing::Size(100, 22);
			this->textBox117->TabIndex = 60;
			// 
			// label178
			// 
			this->label178->AutoSize = true;
			this->label178->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label178->Location = System::Drawing::Point(537, 118);
			this->label178->Name = L"label178";
			this->label178->Size = System::Drawing::Size(80, 18);
			this->label178->TabIndex = 59;
			this->label178->Text = L"ЄСВелек";
			// 
			// label179
			// 
			this->label179->AutoSize = true;
			this->label179->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label179->Location = System::Drawing::Point(537, 80);
			this->label179->Name = L"label179";
			this->label179->Size = System::Drawing::Size(68, 18);
			this->label179->TabIndex = 58;
			this->label179->Text = L"ЗПелек";
			// 
			// label180
			// 
			this->label180->AutoSize = true;
			this->label180->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label180->Location = System::Drawing::Point(537, 47);
			this->label180->Name = L"label180";
			this->label180->Size = System::Drawing::Size(229, 20);
			this->label180->TabIndex = 57;
			this->label180->Text = L"Річний ФОП електриків";
			// 
			// label177
			// 
			this->label177->AutoSize = true;
			this->label177->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label177->Location = System::Drawing::Point(843, 22);
			this->label177->Name = L"label177";
			this->label177->Size = System::Drawing::Size(384, 20);
			this->label177->TabIndex = 56;
			this->label177->Text = L"Таблиця справка для заповнення даних";
			// 
			// textBox71
			// 
			this->textBox71->Location = System::Drawing::Point(133, 221);
			this->textBox71->Name = L"textBox71";
			this->textBox71->Size = System::Drawing::Size(100, 22);
			this->textBox71->TabIndex = 55;
			// 
			// textBox72
			// 
			this->textBox72->Location = System::Drawing::Point(133, 183);
			this->textBox72->Name = L"textBox72";
			this->textBox72->Size = System::Drawing::Size(100, 22);
			this->textBox72->TabIndex = 54;
			// 
			// label120
			// 
			this->label120->AutoSize = true;
			this->label120->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label120->Location = System::Drawing::Point(30, 221);
			this->label120->Name = L"label120";
			this->label120->Size = System::Drawing::Size(88, 18);
			this->label120->TabIndex = 53;
			this->label120->Text = L"ЄСВконтр";
			// 
			// label121
			// 
			this->label121->AutoSize = true;
			this->label121->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label121->Location = System::Drawing::Point(30, 183);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(76, 18);
			this->label121->TabIndex = 52;
			this->label121->Text = L"ЗПконтр";
			// 
			// label122
			// 
			this->label122->AutoSize = true;
			this->label122->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label122->Location = System::Drawing::Point(30, 150);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(236, 20);
			this->label122->TabIndex = 51;
			this->label122->Text = L"Річний ФОП контролера";
			// 
			// textBox68
			// 
			this->textBox68->Location = System::Drawing::Point(227, 438);
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(100, 22);
			this->textBox68->TabIndex = 50;
			// 
			// textBox70
			// 
			this->textBox70->BackColor = System::Drawing::Color::White;
			this->textBox70->Location = System::Drawing::Point(227, 400);
			this->textBox70->Name = L"textBox70";
			this->textBox70->Size = System::Drawing::Size(100, 22);
			this->textBox70->TabIndex = 49;
			// 
			// label115
			// 
			this->label115->AutoSize = true;
			this->label115->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label115->Location = System::Drawing::Point(98, 437);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(88, 18);
			this->label115->TabIndex = 48;
			this->label115->Text = L"ЄСВзаточ";
			// 
			// label118
			// 
			this->label118->AutoSize = true;
			this->label118->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label118->Location = System::Drawing::Point(114, 404);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(76, 18);
			this->label118->TabIndex = 47;
			this->label118->Text = L"ЗПзаточ";
			// 
			// label119
			// 
			this->label119->AutoSize = true;
			this->label119->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label119->Location = System::Drawing::Point(61, 362);
			this->label119->Name = L"label119";
			this->label119->Size = System::Drawing::Size(338, 20);
			this->label119->TabIndex = 46;
			this->label119->Text = L"Річний ФОП заточників, комірників";
			// 
			// dataGridView26
			// 
			this->dataGridView26->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle85->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle85->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle85->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle85->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle85->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle85->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView26->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle85;
			this->dataGridView26->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView26->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->Column103, 
				this->Column104, this->Column105});
			this->dataGridView26->Location = System::Drawing::Point(857, 68);
			this->dataGridView26->Name = L"dataGridView26";
			this->dataGridView26->RowTemplate->Height = 24;
			this->dataGridView26->Size = System::Drawing::Size(805, 314);
			this->dataGridView26->TabIndex = 45;
			// 
			// Column103
			// 
			dataGridViewCellStyle86->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column103->DefaultCellStyle = dataGridViewCellStyle86;
			this->Column103->HeaderText = L"Найменування професії";
			this->Column103->Name = L"Column103";
			this->Column103->ReadOnly = true;
			this->Column103->Width = 300;
			// 
			// Column104
			// 
			dataGridViewCellStyle87->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column104->DefaultCellStyle = dataGridViewCellStyle87;
			this->Column104->HeaderText = L"Річний фонд зар-плати";
			this->Column104->Name = L"Column104";
			this->Column104->ReadOnly = true;
			this->Column104->Width = 150;
			// 
			// Column105
			// 
			dataGridViewCellStyle88->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Column105->DefaultCellStyle = dataGridViewCellStyle88;
			this->Column105->HeaderText = L"ЄСВ";
			this->Column105->Name = L"Column105";
			this->Column105->ReadOnly = true;
			// 
			// button56
			// 
			this->button56->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button56.BackgroundImage")));
			this->button56->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button56->FlatAppearance->BorderSize = 0;
			this->button56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button56->Location = System::Drawing::Point(47, 569);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(186, 75);
			this->button56->TabIndex = 44;
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &MyForm::button56_Click_1);
			// 
			// textBox69
			// 
			this->textBox69->Location = System::Drawing::Point(329, 319);
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(100, 22);
			this->textBox69->TabIndex = 43;
			// 
			// label117
			// 
			this->label117->AutoSize = true;
			this->label117->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label117->Location = System::Drawing::Point(16, 319);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(237, 18);
			this->label117->TabIndex = 42;
			this->label117->Text = L"Витрати на одного робітника";
			// 
			// label116
			// 
			this->label116->AutoSize = true;
			this->label116->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label116->Location = System::Drawing::Point(77, 267);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(314, 24);
			this->label116->TabIndex = 41;
			this->label116->Text = L"Знос малоцінного інструменту";
			// 
			// textBox67
			// 
			this->textBox67->Location = System::Drawing::Point(112, 106);
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(100, 22);
			this->textBox67->TabIndex = 40;
			// 
			// textBox66
			// 
			this->textBox66->Location = System::Drawing::Point(112, 68);
			this->textBox66->Name = L"textBox66";
			this->textBox66->Size = System::Drawing::Size(100, 22);
			this->textBox66->TabIndex = 39;
			// 
			// label114
			// 
			this->label114->AutoSize = true;
			this->label114->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label114->Location = System::Drawing::Point(31, 106);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(60, 18);
			this->label114->TabIndex = 38;
			this->label114->Text = L"ЄСВтр";
			// 
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label113->Location = System::Drawing::Point(31, 68);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(48, 18);
			this->label113->TabIndex = 37;
			this->label113->Text = L"ЗПтр";
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label112->Location = System::Drawing::Point(31, 35);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(331, 20);
			this->label112->TabIndex = 36;
			this->label112->Text = L"Річний ФОП транспортних робочіх";
			// 
			// tabPage21
			// 
			this->tabPage21->BackColor = System::Drawing::Color::White;
			this->tabPage21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage21.BackgroundImage")));
			this->tabPage21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage21->Controls->Add(this->button110);
			this->tabPage21->Controls->Add(this->button109);
			this->tabPage21->Controls->Add(this->groupBox3);
			this->tabPage21->Controls->Add(this->groupBox2);
			this->tabPage21->Controls->Add(this->groupBox1);
			this->tabPage21->Controls->Add(this->button5);
			this->tabPage21->Controls->Add(this->button91);
			this->tabPage21->Controls->Add(this->button69);
			this->tabPage21->Controls->Add(this->button68);
			this->tabPage21->Controls->Add(this->textBox93);
			this->tabPage21->Controls->Add(this->label150);
			this->tabPage21->Controls->Add(this->textBox82);
			this->tabPage21->Controls->Add(this->label134);
			this->tabPage21->Controls->Add(this->dataGridView22);
			this->tabPage21->Controls->Add(this->label107);
			this->tabPage21->Controls->Add(this->dataGridView21);
			this->tabPage21->Controls->Add(this->label106);
			this->tabPage21->Location = System::Drawing::Point(4, 25);
			this->tabPage21->Name = L"tabPage21";
			this->tabPage21->Size = System::Drawing::Size(1992, 1071);
			this->tabPage21->TabIndex = 5;
			this->tabPage21->Text = L"Кошторис витрат";
			this->tabPage21->Click += gcnew System::EventHandler(this, &MyForm::tabPage21_Click);
			// 
			// button110
			// 
			this->button110->BackColor = System::Drawing::Color::Transparent;
			this->button110->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button110.BackgroundImage")));
			this->button110->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button110->FlatAppearance->BorderSize = 0;
			this->button110->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button110->Location = System::Drawing::Point(767, 870);
			this->button110->Name = L"button110";
			this->button110->Size = System::Drawing::Size(51, 48);
			this->button110->TabIndex = 81;
			this->button110->UseVisualStyleBackColor = false;
			this->button110->Click += gcnew System::EventHandler(this, &MyForm::button110_Click);
			// 
			// button109
			// 
			this->button109->BackColor = System::Drawing::Color::Transparent;
			this->button109->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button109.BackgroundImage")));
			this->button109->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button109->FlatAppearance->BorderSize = 0;
			this->button109->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button109->Location = System::Drawing::Point(776, 440);
			this->button109->Name = L"button109";
			this->button109->Size = System::Drawing::Size(51, 48);
			this->button109->TabIndex = 80;
			this->button109->UseVisualStyleBackColor = false;
			this->button109->Click += gcnew System::EventHandler(this, &MyForm::button109_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox134);
			this->groupBox3->Controls->Add(this->label208);
			this->groupBox3->Controls->Add(this->textBox130);
			this->groupBox3->Controls->Add(this->textBox131);
			this->groupBox3->Controls->Add(this->label202);
			this->groupBox3->Controls->Add(this->label203);
			this->groupBox3->Controls->Add(this->label204);
			this->groupBox3->Controls->Add(this->textBox132);
			this->groupBox3->Controls->Add(this->textBox133);
			this->groupBox3->Controls->Add(this->label205);
			this->groupBox3->Controls->Add(this->label206);
			this->groupBox3->Controls->Add(this->label207);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(963, 618);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(515, 307);
			this->groupBox3->TabIndex = 67;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Знос малоцінного інструменту";
			// 
			// textBox134
			// 
			this->textBox134->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox134->Location = System::Drawing::Point(409, 267);
			this->textBox134->Name = L"textBox134";
			this->textBox134->ReadOnly = true;
			this->textBox134->Size = System::Drawing::Size(100, 27);
			this->textBox134->TabIndex = 88;
			// 
			// label208
			// 
			this->label208->AutoSize = true;
			this->label208->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label208->Location = System::Drawing::Point(14, 267);
			this->label208->Name = L"label208";
			this->label208->Size = System::Drawing::Size(331, 20);
			this->label208->TabIndex = 87;
			this->label208->Text = L"Вартість малоцінного інструменту";
			// 
			// textBox130
			// 
			this->textBox130->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox130->Location = System::Drawing::Point(140, 228);
			this->textBox130->Name = L"textBox130";
			this->textBox130->ReadOnly = true;
			this->textBox130->Size = System::Drawing::Size(100, 27);
			this->textBox130->TabIndex = 86;
			// 
			// textBox131
			// 
			this->textBox131->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox131->Location = System::Drawing::Point(140, 190);
			this->textBox131->Name = L"textBox131";
			this->textBox131->ReadOnly = true;
			this->textBox131->Size = System::Drawing::Size(100, 27);
			this->textBox131->TabIndex = 85;
			// 
			// label202
			// 
			this->label202->AutoSize = true;
			this->label202->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label202->Location = System::Drawing::Point(15, 228);
			this->label202->Name = L"label202";
			this->label202->Size = System::Drawing::Size(87, 18);
			this->label202->TabIndex = 84;
			this->label202->Text = L"ЄСВкомір";
			// 
			// label203
			// 
			this->label203->AutoSize = true;
			this->label203->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label203->Location = System::Drawing::Point(15, 190);
			this->label203->Name = L"label203";
			this->label203->Size = System::Drawing::Size(75, 18);
			this->label203->TabIndex = 83;
			this->label203->Text = L"ЗПкомір";
			// 
			// label204
			// 
			this->label204->AutoSize = true;
			this->label204->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label204->Location = System::Drawing::Point(15, 157);
			this->label204->Name = L"label204";
			this->label204->Size = System::Drawing::Size(225, 20);
			this->label204->TabIndex = 82;
			this->label204->Text = L"Річний ФОП комірників";
			// 
			// textBox132
			// 
			this->textBox132->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox132->Location = System::Drawing::Point(144, 107);
			this->textBox132->Name = L"textBox132";
			this->textBox132->ReadOnly = true;
			this->textBox132->Size = System::Drawing::Size(100, 27);
			this->textBox132->TabIndex = 81;
			// 
			// textBox133
			// 
			this->textBox133->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox133->Location = System::Drawing::Point(144, 69);
			this->textBox133->Name = L"textBox133";
			this->textBox133->ReadOnly = true;
			this->textBox133->Size = System::Drawing::Size(100, 27);
			this->textBox133->TabIndex = 80;
			// 
			// label205
			// 
			this->label205->AutoSize = true;
			this->label205->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label205->Location = System::Drawing::Point(15, 107);
			this->label205->Name = L"label205";
			this->label205->Size = System::Drawing::Size(88, 18);
			this->label205->TabIndex = 79;
			this->label205->Text = L"ЄСВзаточ";
			// 
			// label206
			// 
			this->label206->AutoSize = true;
			this->label206->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label206->Location = System::Drawing::Point(15, 69);
			this->label206->Name = L"label206";
			this->label206->Size = System::Drawing::Size(76, 18);
			this->label206->TabIndex = 78;
			this->label206->Text = L"ЗПзаточ";
			// 
			// label207
			// 
			this->label207->AutoSize = true;
			this->label207->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label207->Location = System::Drawing::Point(15, 36);
			this->label207->Name = L"label207";
			this->label207->Size = System::Drawing::Size(229, 20);
			this->label207->TabIndex = 77;
			this->label207->Text = L"Річний ФОП заточників";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox129);
			this->groupBox2->Controls->Add(this->label201);
			this->groupBox2->Controls->Add(this->textBox127);
			this->groupBox2->Controls->Add(this->textBox128);
			this->groupBox2->Controls->Add(this->label198);
			this->groupBox2->Controls->Add(this->label199);
			this->groupBox2->Controls->Add(this->label200);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(963, 396);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(515, 216);
			this->groupBox2->TabIndex = 66;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Поточний ремонт обладнання";
			// 
			// textBox129
			// 
			this->textBox129->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox129->Location = System::Drawing::Point(380, 134);
			this->textBox129->Name = L"textBox129";
			this->textBox129->ReadOnly = true;
			this->textBox129->Size = System::Drawing::Size(100, 27);
			this->textBox129->TabIndex = 83;
			// 
			// label201
			// 
			this->label201->AutoSize = true;
			this->label201->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label201->Location = System::Drawing::Point(15, 143);
			this->label201->Name = L"label201";
			this->label201->Size = System::Drawing::Size(310, 18);
			this->label201->TabIndex = 82;
			this->label201->Text = L"Річні витрати, грн (всього по дільниці)";
			// 
			// textBox127
			// 
			this->textBox127->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox127->Location = System::Drawing::Point(140, 98);
			this->textBox127->Name = L"textBox127";
			this->textBox127->ReadOnly = true;
			this->textBox127->Size = System::Drawing::Size(100, 27);
			this->textBox127->TabIndex = 81;
			// 
			// textBox128
			// 
			this->textBox128->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox128->Location = System::Drawing::Point(140, 60);
			this->textBox128->Name = L"textBox128";
			this->textBox128->ReadOnly = true;
			this->textBox128->Size = System::Drawing::Size(100, 27);
			this->textBox128->TabIndex = 80;
			// 
			// label198
			// 
			this->label198->AutoSize = true;
			this->label198->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label198->Location = System::Drawing::Point(15, 102);
			this->label198->Name = L"label198";
			this->label198->Size = System::Drawing::Size(83, 18);
			this->label198->TabIndex = 79;
			this->label198->Text = L"ЄСВслюс";
			// 
			// label199
			// 
			this->label199->AutoSize = true;
			this->label199->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label199->Location = System::Drawing::Point(15, 64);
			this->label199->Name = L"label199";
			this->label199->Size = System::Drawing::Size(71, 18);
			this->label199->TabIndex = 78;
			this->label199->Text = L"ЗПслюс";
			// 
			// label200
			// 
			this->label200->AutoSize = true;
			this->label200->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label200->Location = System::Drawing::Point(15, 31);
			this->label200->Name = L"label200";
			this->label200->Size = System::Drawing::Size(205, 20);
			this->label200->TabIndex = 77;
			this->label200->Text = L"Річний ФОП слюсаря";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->textBox126);
			this->groupBox1->Controls->Add(this->textBox125);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label192);
			this->groupBox1->Controls->Add(this->label193);
			this->groupBox1->Controls->Add(this->label194);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label195);
			this->groupBox1->Controls->Add(this->label196);
			this->groupBox1->Controls->Add(this->label197);
			this->groupBox1->Controls->Add(this->label191);
			this->groupBox1->Controls->Add(this->label190);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(963, 53);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(573, 336);
			this->groupBox1->TabIndex = 65;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Експлуатація обладнання";
			// 
			// textBox126
			// 
			this->textBox126->Location = System::Drawing::Point(467, 65);
			this->textBox126->Name = L"textBox126";
			this->textBox126->ReadOnly = true;
			this->textBox126->Size = System::Drawing::Size(100, 27);
			this->textBox126->TabIndex = 78;
			// 
			// textBox125
			// 
			this->textBox125->Location = System::Drawing::Point(467, 30);
			this->textBox125->Name = L"textBox125";
			this->textBox125->ReadOnly = true;
			this->textBox125->Size = System::Drawing::Size(100, 27);
			this->textBox125->TabIndex = 77;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(164, 291);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 27);
			this->textBox3->TabIndex = 76;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(164, 253);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 27);
			this->textBox4->TabIndex = 75;
			// 
			// label192
			// 
			this->label192->AutoSize = true;
			this->label192->BackColor = System::Drawing::Color::White;
			this->label192->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label192->Location = System::Drawing::Point(35, 295);
			this->label192->Name = L"label192";
			this->label192->Size = System::Drawing::Size(90, 18);
			this->label192->TabIndex = 74;
			this->label192->Text = L"ЄСВналад";
			// 
			// label193
			// 
			this->label193->AutoSize = true;
			this->label193->BackColor = System::Drawing::Color::White;
			this->label193->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label193->Location = System::Drawing::Point(35, 257);
			this->label193->Name = L"label193";
			this->label193->Size = System::Drawing::Size(78, 18);
			this->label193->TabIndex = 73;
			this->label193->Text = L"ЗПналад";
			// 
			// label194
			// 
			this->label194->AutoSize = true;
			this->label194->BackColor = System::Drawing::Color::White;
			this->label194->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label194->Location = System::Drawing::Point(35, 224);
			this->label194->Name = L"label194";
			this->label194->Size = System::Drawing::Size(232, 20);
			this->label194->TabIndex = 72;
			this->label194->Text = L"Річний ФОП наладчиків";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(164, 170);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 27);
			this->textBox5->TabIndex = 71;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(164, 132);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 27);
			this->textBox6->TabIndex = 70;
			// 
			// label195
			// 
			this->label195->AutoSize = true;
			this->label195->BackColor = System::Drawing::Color::White;
			this->label195->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label195->Location = System::Drawing::Point(35, 174);
			this->label195->Name = L"label195";
			this->label195->Size = System::Drawing::Size(80, 18);
			this->label195->TabIndex = 69;
			this->label195->Text = L"ЄСВелек";
			// 
			// label196
			// 
			this->label196->AutoSize = true;
			this->label196->BackColor = System::Drawing::Color::White;
			this->label196->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label196->Location = System::Drawing::Point(35, 136);
			this->label196->Name = L"label196";
			this->label196->Size = System::Drawing::Size(68, 18);
			this->label196->TabIndex = 68;
			this->label196->Text = L"ЗПелек";
			// 
			// label197
			// 
			this->label197->AutoSize = true;
			this->label197->BackColor = System::Drawing::Color::White;
			this->label197->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label197->Location = System::Drawing::Point(35, 103);
			this->label197->Name = L"label197";
			this->label197->Size = System::Drawing::Size(229, 20);
			this->label197->TabIndex = 67;
			this->label197->Text = L"Річний ФОП електриків";
			// 
			// label191
			// 
			this->label191->AutoSize = true;
			this->label191->BackColor = System::Drawing::Color::White;
			this->label191->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label191->Location = System::Drawing::Point(35, 68);
			this->label191->Name = L"label191";
			this->label191->Size = System::Drawing::Size(393, 20);
			this->label191->TabIndex = 20;
			this->label191->Text = L"Річна сума витрат, грн. (доп. матеріалів)";
			// 
			// label190
			// 
			this->label190->AutoSize = true;
			this->label190->BackColor = System::Drawing::Color::White;
			this->label190->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label190->Location = System::Drawing::Point(35, 37);
			this->label190->Name = L"label190";
			this->label190->Size = System::Drawing::Size(239, 20);
			this->label190->TabIndex = 19;
			this->label190->Text = L"Вартість електроенергії";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(1691, 830);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(175, 99);
			this->button5->TabIndex = 64;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button91
			// 
			this->button91->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button91.BackgroundImage")));
			this->button91->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button91->FlatAppearance->BorderSize = 0;
			this->button91->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button91->Location = System::Drawing::Point(1158, 966);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(138, 63);
			this->button91->TabIndex = 63;
			this->button91->UseVisualStyleBackColor = true;
			this->button91->Click += gcnew System::EventHandler(this, &MyForm::button91_Click);
			// 
			// button69
			// 
			this->button69->BackColor = System::Drawing::Color::Transparent;
			this->button69->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button69.BackgroundImage")));
			this->button69->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button69->FlatAppearance->BorderSize = 0;
			this->button69->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button69->Location = System::Drawing::Point(824, 870);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(124, 59);
			this->button69->TabIndex = 13;
			this->button69->UseVisualStyleBackColor = false;
			this->button69->Visible = false;
			this->button69->Click += gcnew System::EventHandler(this, &MyForm::button69_Click);
			// 
			// button68
			// 
			this->button68->BackColor = System::Drawing::Color::Transparent;
			this->button68->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button68.BackgroundImage")));
			this->button68->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button68->FlatAppearance->BorderSize = 0;
			this->button68->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button68->Location = System::Drawing::Point(833, 438);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(115, 52);
			this->button68->TabIndex = 12;
			this->button68->UseVisualStyleBackColor = false;
			this->button68->Click += gcnew System::EventHandler(this, &MyForm::button68_Click);
			// 
			// textBox93
			// 
			this->textBox93->Location = System::Drawing::Point(393, 885);
			this->textBox93->Name = L"textBox93";
			this->textBox93->ReadOnly = true;
			this->textBox93->Size = System::Drawing::Size(113, 22);
			this->textBox93->TabIndex = 9;
			// 
			// label150
			// 
			this->label150->AutoSize = true;
			this->label150->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label150->Location = System::Drawing::Point(38, 885);
			this->label150->Name = L"label150";
			this->label150->Size = System::Drawing::Size(244, 20);
			this->label150->TabIndex = 8;
			this->label150->Text = L"Відсоток цехових витрат";
			// 
			// textBox82
			// 
			this->textBox82->Location = System::Drawing::Point(659, 443);
			this->textBox82->Name = L"textBox82";
			this->textBox82->ReadOnly = true;
			this->textBox82->Size = System::Drawing::Size(84, 22);
			this->textBox82->TabIndex = 7;
			// 
			// label134
			// 
			this->label134->AutoSize = true;
			this->label134->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label134->Location = System::Drawing::Point(18, 443);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(575, 20);
			this->label134->TabIndex = 6;
			this->label134->Text = L"Відсоток витрат на утримання та експлуатацію обладнання";
			// 
			// dataGridView22
			// 
			this->dataGridView22->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle89->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle89->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle89->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle89->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle89->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle89->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView22->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle89;
			this->dataGridView22->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView22->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->dataGridViewTextBoxColumn29, 
				this->dataGridViewTextBoxColumn30});
			this->dataGridView22->Location = System::Drawing::Point(31, 511);
			this->dataGridView22->Name = L"dataGridView22";
			this->dataGridView22->RowTemplate->Height = 24;
			this->dataGridView22->Size = System::Drawing::Size(917, 344);
			this->dataGridView22->TabIndex = 3;
			// 
			// dataGridViewTextBoxColumn29
			// 
			this->dataGridViewTextBoxColumn29->HeaderText = L"Найменування статті витрат ";
			this->dataGridViewTextBoxColumn29->Name = L"dataGridViewTextBoxColumn29";
			this->dataGridViewTextBoxColumn29->Width = 500;
			// 
			// dataGridViewTextBoxColumn30
			// 
			this->dataGridViewTextBoxColumn30->HeaderText = L"Сума витрат, грн";
			this->dataGridViewTextBoxColumn30->Name = L"dataGridViewTextBoxColumn30";
			this->dataGridViewTextBoxColumn30->Width = 150;
			// 
			// label107
			// 
			this->label107->AutoSize = true;
			this->label107->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label107->Location = System::Drawing::Point(158, 483);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(484, 25);
			this->label107->TabIndex = 2;
			this->label107->Text = L"Кошторис цехових (адміністративних) витрат";
			// 
			// dataGridView21
			// 
			this->dataGridView21->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle90->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle90->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle90->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle90->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle90->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle90->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView21->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle90;
			this->dataGridView21->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView21->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->Column95, 
				this->Column96});
			this->dataGridView21->Location = System::Drawing::Point(22, 38);
			this->dataGridView21->Name = L"dataGridView21";
			this->dataGridView21->RowTemplate->Height = 24;
			this->dataGridView21->Size = System::Drawing::Size(917, 394);
			this->dataGridView21->TabIndex = 1;
			// 
			// Column95
			// 
			this->Column95->HeaderText = L"Найменування статті витрат ";
			this->Column95->Name = L"Column95";
			this->Column95->Width = 500;
			// 
			// Column96
			// 
			this->Column96->HeaderText = L"Сума витрат, грн";
			this->Column96->Name = L"Column96";
			this->Column96->Width = 150;
			// 
			// label106
			// 
			this->label106->AutoSize = true;
			this->label106->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label106->Location = System::Drawing::Point(149, 10);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(634, 25);
			this->label106->TabIndex = 0;
			this->label106->Text = L"Кошторис витрат на утримання та експлутацію обладнання ";
			// 
			// tabPage29
			// 
			this->tabPage29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage29.BackgroundImage")));
			this->tabPage29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage29->Controls->Add(this->button111);
			this->tabPage29->Controls->Add(this->button73);
			this->tabPage29->Controls->Add(this->button7);
			this->tabPage29->Controls->Add(this->button70);
			this->tabPage29->Controls->Add(this->textBox94);
			this->tabPage29->Controls->Add(this->label151);
			this->tabPage29->Controls->Add(this->dataGridView23);
			this->tabPage29->Controls->Add(this->label108);
			this->tabPage29->Location = System::Drawing::Point(4, 25);
			this->tabPage29->Name = L"tabPage29";
			this->tabPage29->Size = System::Drawing::Size(1992, 1071);
			this->tabPage29->TabIndex = 10;
			this->tabPage29->Text = L"Кошторис (всього)";
			this->tabPage29->UseVisualStyleBackColor = true;
			// 
			// button111
			// 
			this->button111->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button111.BackgroundImage")));
			this->button111->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button111->FlatAppearance->BorderSize = 0;
			this->button111->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button111->Location = System::Drawing::Point(783, 571);
			this->button111->Name = L"button111";
			this->button111->Size = System::Drawing::Size(81, 48);
			this->button111->TabIndex = 81;
			this->button111->UseVisualStyleBackColor = true;
			this->button111->Click += gcnew System::EventHandler(this, &MyForm::button111_Click);
			// 
			// button73
			// 
			this->button73->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button73.BackgroundImage")));
			this->button73->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button73->FlatAppearance->BorderSize = 0;
			this->button73->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button73->Location = System::Drawing::Point(1545, 806);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(155, 120);
			this->button73->TabIndex = 21;
			this->button73->UseVisualStyleBackColor = true;
			this->button73->Click += gcnew System::EventHandler(this, &MyForm::button73_Click_1);
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(1706, 825);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(138, 88);
			this->button7->TabIndex = 20;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click_1);
			// 
			// button70
			// 
			this->button70->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button70.BackgroundImage")));
			this->button70->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button70->FlatAppearance->BorderSize = 0;
			this->button70->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button70->Location = System::Drawing::Point(870, 567);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(115, 56);
			this->button70->TabIndex = 19;
			this->button70->UseVisualStyleBackColor = true;
			this->button70->Click += gcnew System::EventHandler(this, &MyForm::button70_Click_1);
			// 
			// textBox94
			// 
			this->textBox94->Location = System::Drawing::Point(419, 601);
			this->textBox94->Name = L"textBox94";
			this->textBox94->ReadOnly = true;
			this->textBox94->Size = System::Drawing::Size(113, 22);
			this->textBox94->TabIndex = 18;
			// 
			// label151
			// 
			this->label151->AutoSize = true;
			this->label151->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label151->Location = System::Drawing::Point(64, 601);
			this->label151->Name = L"label151";
			this->label151->Size = System::Drawing::Size(259, 20);
			this->label151->TabIndex = 17;
			this->label151->Text = L"Відсоток непрямих витрат";
			// 
			// dataGridView23
			// 
			this->dataGridView23->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle91->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle91->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle91->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle91->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle91->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle91->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle91->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView23->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle91;
			this->dataGridView23->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView23->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->dataGridViewTextBoxColumn32, 
				this->dataGridViewTextBoxColumn33});
			this->dataGridView23->Location = System::Drawing::Point(68, 65);
			this->dataGridView23->Name = L"dataGridView23";
			this->dataGridView23->RowTemplate->Height = 24;
			this->dataGridView23->Size = System::Drawing::Size(955, 496);
			this->dataGridView23->TabIndex = 16;
			// 
			// dataGridViewTextBoxColumn32
			// 
			this->dataGridViewTextBoxColumn32->HeaderText = L"Найменування статті витрат ";
			this->dataGridViewTextBoxColumn32->Name = L"dataGridViewTextBoxColumn32";
			this->dataGridViewTextBoxColumn32->Width = 500;
			// 
			// dataGridViewTextBoxColumn33
			// 
			this->dataGridViewTextBoxColumn33->HeaderText = L"Сума витрат, грн";
			this->dataGridViewTextBoxColumn33->Name = L"dataGridViewTextBoxColumn33";
			this->dataGridViewTextBoxColumn33->Width = 150;
			// 
			// label108
			// 
			this->label108->AutoSize = true;
			this->label108->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label108->Location = System::Drawing::Point(195, 37);
			this->label108->Name = L"label108";
			this->label108->Size = System::Drawing::Size(507, 25);
			this->label108->TabIndex = 15;
			this->label108->Text = L"Кошторис непрямих витрат по дільниці (всього)";
			// 
			// tabPage22
			// 
			this->tabPage22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage22.BackgroundImage")));
			this->tabPage22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage22->Controls->Add(this->button112);
			this->tabPage22->Controls->Add(this->textBox148);
			this->tabPage22->Controls->Add(this->label222);
			this->tabPage22->Controls->Add(this->groupBox4);
			this->tabPage22->Controls->Add(this->textBox139);
			this->tabPage22->Controls->Add(this->textBox138);
			this->tabPage22->Controls->Add(this->textBox137);
			this->tabPage22->Controls->Add(this->textBox136);
			this->tabPage22->Controls->Add(this->textBox135);
			this->tabPage22->Controls->Add(this->label213);
			this->tabPage22->Controls->Add(this->label212);
			this->tabPage22->Controls->Add(this->label211);
			this->tabPage22->Controls->Add(this->label210);
			this->tabPage22->Controls->Add(this->label209);
			this->tabPage22->Controls->Add(this->button60);
			this->tabPage22->Controls->Add(this->textBox97);
			this->tabPage22->Controls->Add(this->label156);
			this->tabPage22->Controls->Add(this->textBox96);
			this->tabPage22->Controls->Add(this->label153);
			this->tabPage22->Controls->Add(this->label155);
			this->tabPage22->Controls->Add(this->button59);
			this->tabPage22->Controls->Add(this->textBox95);
			this->tabPage22->Controls->Add(this->label154);
			this->tabPage22->Controls->Add(this->label152);
			this->tabPage22->Controls->Add(this->label109);
			this->tabPage22->Controls->Add(this->dataGridView24);
			this->tabPage22->Location = System::Drawing::Point(4, 25);
			this->tabPage22->Name = L"tabPage22";
			this->tabPage22->Size = System::Drawing::Size(1992, 1071);
			this->tabPage22->TabIndex = 6;
			this->tabPage22->Text = L"Калькуляція собівартості виробу";
			this->tabPage22->UseVisualStyleBackColor = true;
			// 
			// button112
			// 
			this->button112->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button112.BackgroundImage")));
			this->button112->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button112->FlatAppearance->BorderSize = 0;
			this->button112->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button112->Location = System::Drawing::Point(1316, 490);
			this->button112->Name = L"button112";
			this->button112->Size = System::Drawing::Size(90, 67);
			this->button112->TabIndex = 81;
			this->button112->UseVisualStyleBackColor = true;
			this->button112->Click += gcnew System::EventHandler(this, &MyForm::button112_Click);
			// 
			// textBox148
			// 
			this->textBox148->Location = System::Drawing::Point(669, 127);
			this->textBox148->Name = L"textBox148";
			this->textBox148->Size = System::Drawing::Size(100, 22);
			this->textBox148->TabIndex = 25;
			// 
			// label222
			// 
			this->label222->AutoSize = true;
			this->label222->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label222->Location = System::Drawing::Point(159, 127);
			this->label222->Name = L"label222";
			this->label222->Size = System::Drawing::Size(217, 20);
			this->label222->TabIndex = 24;
			this->label222->Text = L"Введіть відсоток ЄСВ";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::White;
			this->groupBox4->Controls->Add(this->label217);
			this->groupBox4->Controls->Add(this->label216);
			this->groupBox4->Controls->Add(this->label215);
			this->groupBox4->Controls->Add(this->label214);
			this->groupBox4->Controls->Add(this->textBox140);
			this->groupBox4->Controls->Add(this->textBox141);
			this->groupBox4->Controls->Add(this->textBox143);
			this->groupBox4->Controls->Add(this->textBox142);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(949, 594);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(595, 235);
			this->groupBox4->TabIndex = 23;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ціна реалізації підприємства";
			// 
			// label217
			// 
			this->label217->AutoSize = true;
			this->label217->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label217->Location = System::Drawing::Point(40, 178);
			this->label217->Name = L"label217";
			this->label217->Size = System::Drawing::Size(286, 20);
			this->label217->TabIndex = 31;
			this->label217->Text = L"Відпускна ціна підприємства:\r\n";
			// 
			// label216
			// 
			this->label216->AutoSize = true;
			this->label216->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label216->Location = System::Drawing::Point(28, 132);
			this->label216->Name = L"label216";
			this->label216->Size = System::Drawing::Size(291, 20);
			this->label216->TabIndex = 30;
			this->label216->Text = L"  Податок на додану вартість";
			// 
			// label215
			// 
			this->label215->AutoSize = true;
			this->label215->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label215->Location = System::Drawing::Point(40, 82);
			this->label215->Name = L"label215";
			this->label215->Size = System::Drawing::Size(139, 20);
			this->label215->TabIndex = 29;
			this->label215->Text = L"Прибуток, грн";
			// 
			// label214
			// 
			this->label214->AutoSize = true;
			this->label214->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label214->Location = System::Drawing::Point(40, 38);
			this->label214->Name = L"label214";
			this->label214->Size = System::Drawing::Size(398, 20);
			this->label214->TabIndex = 28;
			this->label214->Text = L"Собівартість спроектованого виробу, грн";
			// 
			// textBox140
			// 
			this->textBox140->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox140->Location = System::Drawing::Point(476, 178);
			this->textBox140->Multiline = true;
			this->textBox140->Name = L"textBox140";
			this->textBox140->ReadOnly = true;
			this->textBox140->Size = System::Drawing::Size(100, 28);
			this->textBox140->TabIndex = 27;
			// 
			// textBox141
			// 
			this->textBox141->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox141->Location = System::Drawing::Point(476, 132);
			this->textBox141->Multiline = true;
			this->textBox141->Name = L"textBox141";
			this->textBox141->ReadOnly = true;
			this->textBox141->Size = System::Drawing::Size(100, 28);
			this->textBox141->TabIndex = 26;
			// 
			// textBox143
			// 
			this->textBox143->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox143->Location = System::Drawing::Point(476, 31);
			this->textBox143->Multiline = true;
			this->textBox143->Name = L"textBox143";
			this->textBox143->ReadOnly = true;
			this->textBox143->Size = System::Drawing::Size(100, 28);
			this->textBox143->TabIndex = 24;
			// 
			// textBox142
			// 
			this->textBox142->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox142->Location = System::Drawing::Point(476, 82);
			this->textBox142->Multiline = true;
			this->textBox142->Name = L"textBox142";
			this->textBox142->ReadOnly = true;
			this->textBox142->Size = System::Drawing::Size(100, 28);
			this->textBox142->TabIndex = 25;
			// 
			// textBox139
			// 
			this->textBox139->Location = System::Drawing::Point(821, 914);
			this->textBox139->Multiline = true;
			this->textBox139->Name = L"textBox139";
			this->textBox139->ReadOnly = true;
			this->textBox139->Size = System::Drawing::Size(100, 28);
			this->textBox139->TabIndex = 22;
			// 
			// textBox138
			// 
			this->textBox138->Location = System::Drawing::Point(821, 874);
			this->textBox138->Multiline = true;
			this->textBox138->Name = L"textBox138";
			this->textBox138->ReadOnly = true;
			this->textBox138->Size = System::Drawing::Size(100, 28);
			this->textBox138->TabIndex = 21;
			// 
			// textBox137
			// 
			this->textBox137->Location = System::Drawing::Point(821, 832);
			this->textBox137->Multiline = true;
			this->textBox137->Name = L"textBox137";
			this->textBox137->ReadOnly = true;
			this->textBox137->Size = System::Drawing::Size(100, 28);
			this->textBox137->TabIndex = 20;
			// 
			// textBox136
			// 
			this->textBox136->Location = System::Drawing::Point(821, 783);
			this->textBox136->Multiline = true;
			this->textBox136->Name = L"textBox136";
			this->textBox136->ReadOnly = true;
			this->textBox136->Size = System::Drawing::Size(100, 28);
			this->textBox136->TabIndex = 19;
			// 
			// textBox135
			// 
			this->textBox135->Location = System::Drawing::Point(821, 749);
			this->textBox135->Multiline = true;
			this->textBox135->Name = L"textBox135";
			this->textBox135->ReadOnly = true;
			this->textBox135->Size = System::Drawing::Size(100, 28);
			this->textBox135->TabIndex = 18;
			// 
			// label213
			// 
			this->label213->AutoSize = true;
			this->label213->BackColor = System::Drawing::Color::White;
			this->label213->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label213->Location = System::Drawing::Point(113, 922);
			this->label213->Name = L"label213";
			this->label213->Size = System::Drawing::Size(669, 20);
			this->label213->TabIndex = 17;
			this->label213->Text = L"Витрати по утриманню та експлуатації обладнання та цехові витрати";
			// 
			// label212
			// 
			this->label212->AutoSize = true;
			this->label212->BackColor = System::Drawing::Color::White;
			this->label212->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label212->Location = System::Drawing::Point(116, 882);
			this->label212->Name = L"label212";
			this->label212->Size = System::Drawing::Size(258, 20);
			this->label212->TabIndex = 16;
			this->label212->Text = L"Єдиний соціальний внесок";
			// 
			// label211
			// 
			this->label211->AutoSize = true;
			this->label211->BackColor = System::Drawing::Color::White;
			this->label211->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label211->Location = System::Drawing::Point(116, 840);
			this->label211->Name = L"label211";
			this->label211->Size = System::Drawing::Size(632, 20);
			this->label211->TabIndex = 15;
			this->label211->Text = L"Додаткова оплата праці основних робітників на одну деталь, грн.";
			// 
			// label210
			// 
			this->label210->AutoSize = true;
			this->label210->BackColor = System::Drawing::Color::White;
			this->label210->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label210->Location = System::Drawing::Point(113, 793);
			this->label210->Name = L"label210";
			this->label210->Size = System::Drawing::Size(511, 20);
			this->label210->TabIndex = 14;
			this->label210->Text = L"Пряма тарифна заробітна плата основних робітників";
			// 
			// label209
			// 
			this->label209->AutoSize = true;
			this->label209->BackColor = System::Drawing::Color::White;
			this->label209->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label209->Location = System::Drawing::Point(113, 757);
			this->label209->Name = L"label209";
			this->label209->Size = System::Drawing::Size(270, 20);
			this->label209->TabIndex = 13;
			this->label209->Text = L"Цехова собівартість виробу";
			// 
			// button60
			// 
			this->button60->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button60.BackgroundImage")));
			this->button60->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button60->FlatAppearance->BorderSize = 0;
			this->button60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button60->Location = System::Drawing::Point(1750, 832);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(131, 118);
			this->button60->TabIndex = 12;
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &MyForm::button60_Click);
			// 
			// textBox97
			// 
			this->textBox97->Location = System::Drawing::Point(417, 702);
			this->textBox97->Name = L"textBox97";
			this->textBox97->Size = System::Drawing::Size(100, 22);
			this->textBox97->TabIndex = 11;
			// 
			// label156
			// 
			this->label156->AutoSize = true;
			this->label156->BackColor = System::Drawing::Color::White;
			this->label156->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label156->Location = System::Drawing::Point(113, 702);
			this->label156->Name = L"label156";
			this->label156->Size = System::Drawing::Size(219, 20);
			this->label156->TabIndex = 10;
			this->label156->Text = L"Введіть відсоток ПДВ";
			// 
			// textBox96
			// 
			this->textBox96->Location = System::Drawing::Point(417, 651);
			this->textBox96->Name = L"textBox96";
			this->textBox96->Size = System::Drawing::Size(100, 22);
			this->textBox96->TabIndex = 9;
			// 
			// label153
			// 
			this->label153->AutoSize = true;
			this->label153->BackColor = System::Drawing::Color::White;
			this->label153->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label153->Location = System::Drawing::Point(113, 651);
			this->label153->Name = L"label153";
			this->label153->Size = System::Drawing::Size(261, 20);
			this->label153->TabIndex = 8;
			this->label153->Text = L"Введіть відсоток прибутку";
			// 
			// label155
			// 
			this->label155->AutoSize = true;
			this->label155->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label155->Location = System::Drawing::Point(59, 585);
			this->label155->Name = L"label155";
			this->label155->Size = System::Drawing::Size(421, 25);
			this->label155->TabIndex = 7;
			this->label155->Text = L"Розрахунок цехової собівартості виробу";
			// 
			// button59
			// 
			this->button59->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button59.BackgroundImage")));
			this->button59->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button59->FlatAppearance->BorderSize = 0;
			this->button59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button59->Location = System::Drawing::Point(1622, 855);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(122, 84);
			this->button59->TabIndex = 6;
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &MyForm::button59_Click);
			// 
			// textBox95
			// 
			this->textBox95->Location = System::Drawing::Point(669, 82);
			this->textBox95->Name = L"textBox95";
			this->textBox95->Size = System::Drawing::Size(100, 22);
			this->textBox95->TabIndex = 5;
			// 
			// label154
			// 
			this->label154->AutoSize = true;
			this->label154->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label154->Location = System::Drawing::Point(159, 82);
			this->label154->Name = L"label154";
			this->label154->Size = System::Drawing::Size(461, 20);
			this->label154->TabIndex = 4;
			this->label154->Text = L"Введіть відсоток доплат та додаткової оплати";
			// 
			// label152
			// 
			this->label152->AutoSize = true;
			this->label152->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label152->Location = System::Drawing::Point(112, 30);
			this->label152->Name = L"label152";
			this->label152->Size = System::Drawing::Size(733, 25);
			this->label152->TabIndex = 2;
			this->label152->Text = L"РОЗРАХУНОК СОБІВАРТОСТІ ТА УМОВНОЇ ЦІНИ ВИРОБУ НА ДІЛЬНИЦІ";
			// 
			// label109
			// 
			this->label109->AutoSize = true;
			this->label109->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label109->Location = System::Drawing::Point(412, 166);
			this->label109->Name = L"label109";
			this->label109->Size = System::Drawing::Size(345, 25);
			this->label109->TabIndex = 1;
			this->label109->Text = L"Калькуляція собівартості виробу";
			// 
			// dataGridView24
			// 
			this->dataGridView24->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle92->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle92->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle92->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle92->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle92->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle92->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle92->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView24->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle92;
			this->dataGridView24->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView24->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->Column97, 
				this->Column98, this->Column99});
			this->dataGridView24->Location = System::Drawing::Point(64, 194);
			this->dataGridView24->Name = L"dataGridView24";
			this->dataGridView24->RowTemplate->Height = 24;
			this->dataGridView24->Size = System::Drawing::Size(1246, 363);
			this->dataGridView24->TabIndex = 0;
			// 
			// Column97
			// 
			this->Column97->HeaderText = L"Найменування статей витрат";
			this->Column97->Name = L"Column97";
			this->Column97->Width = 600;
			// 
			// Column98
			// 
			this->Column98->HeaderText = L"Сума, грн на один виріб";
			this->Column98->Name = L"Column98";
			this->Column98->Width = 150;
			// 
			// Column99
			// 
			this->Column99->HeaderText = L"Сума, грн на річну программу ";
			this->Column99->Name = L"Column99";
			this->Column99->Width = 150;
			// 
			// tabPage23
			// 
			this->tabPage23->Controls->Add(this->tabControl5);
			this->tabPage23->Location = System::Drawing::Point(4, 25);
			this->tabPage23->Name = L"tabPage23";
			this->tabPage23->Size = System::Drawing::Size(1992, 1006);
			this->tabPage23->TabIndex = 7;
			this->tabPage23->Text = L"tabPage23";
			this->tabPage23->UseVisualStyleBackColor = true;
			// 
			// tabControl5
			// 
			this->tabControl5->Controls->Add(this->tabPage27);
			this->tabControl5->Controls->Add(this->tabPage26);
			this->tabControl5->Location = System::Drawing::Point(4, 4);
			this->tabControl5->Name = L"tabControl5";
			this->tabControl5->SelectedIndex = 0;
			this->tabControl5->Size = System::Drawing::Size(2000, 1092);
			this->tabControl5->TabIndex = 2;
			// 
			// tabPage27
			// 
			this->tabPage27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage27.BackgroundImage")));
			this->tabPage27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage27->Controls->Add(this->groupBox5);
			this->tabPage27->Controls->Add(this->button93);
			this->tabPage27->Controls->Add(this->button72);
			this->tabPage27->Controls->Add(this->button61);
			this->tabPage27->Controls->Add(this->textBox101);
			this->tabPage27->Controls->Add(this->label161);
			this->tabPage27->Controls->Add(this->textBox100);
			this->tabPage27->Controls->Add(this->label160);
			this->tabPage27->Controls->Add(this->textBox99);
			this->tabPage27->Controls->Add(this->label159);
			this->tabPage27->Controls->Add(this->textBox98);
			this->tabPage27->Controls->Add(this->label158);
			this->tabPage27->Controls->Add(this->label157);
			this->tabPage27->Location = System::Drawing::Point(4, 25);
			this->tabPage27->Name = L"tabPage27";
			this->tabPage27->Padding = System::Windows::Forms::Padding(3);
			this->tabPage27->Size = System::Drawing::Size(1992, 1063);
			this->tabPage27->TabIndex = 1;
			this->tabPage27->Text = L"Розрахунок показників економічної ефективності";
			this->tabPage27->UseVisualStyleBackColor = true;
			this->tabPage27->Click += gcnew System::EventHandler(this, &MyForm::tabPage27_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::White;
			this->groupBox5->Controls->Add(this->textBox147);
			this->groupBox5->Controls->Add(this->label221);
			this->groupBox5->Controls->Add(this->textBox146);
			this->groupBox5->Controls->Add(this->textBox145);
			this->groupBox5->Controls->Add(this->textBox144);
			this->groupBox5->Controls->Add(this->label220);
			this->groupBox5->Controls->Add(this->label219);
			this->groupBox5->Controls->Add(this->label218);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(86, 356);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(817, 288);
			this->groupBox5->TabIndex = 64;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"РОЗРАХУНОК ПОКАЗНИКІВ ЕКОНОМІЧНОЇ ЕФЕКТИВНОСТІ";
			// 
			// textBox147
			// 
			this->textBox147->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox147->Location = System::Drawing::Point(190, 209);
			this->textBox147->Multiline = true;
			this->textBox147->Name = L"textBox147";
			this->textBox147->ReadOnly = true;
			this->textBox147->Size = System::Drawing::Size(80, 41);
			this->textBox147->TabIndex = 71;
			// 
			// label221
			// 
			this->label221->AutoSize = true;
			this->label221->Location = System::Drawing::Point(39, 225);
			this->label221->Name = L"label221";
			this->label221->Size = System::Drawing::Size(85, 25);
			this->label221->TabIndex = 70;
			this->label221->Text = L"Місяців";
			// 
			// textBox146
			// 
			this->textBox146->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox146->Location = System::Drawing::Point(623, 158);
			this->textBox146->Multiline = true;
			this->textBox146->Name = L"textBox146";
			this->textBox146->ReadOnly = true;
			this->textBox146->Size = System::Drawing::Size(100, 40);
			this->textBox146->TabIndex = 69;
			// 
			// textBox145
			// 
			this->textBox145->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox145->Location = System::Drawing::Point(623, 95);
			this->textBox145->Multiline = true;
			this->textBox145->Name = L"textBox145";
			this->textBox145->ReadOnly = true;
			this->textBox145->Size = System::Drawing::Size(100, 31);
			this->textBox145->TabIndex = 68;
			// 
			// textBox144
			// 
			this->textBox144->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox144->Location = System::Drawing::Point(623, 44);
			this->textBox144->Multiline = true;
			this->textBox144->Name = L"textBox144";
			this->textBox144->ReadOnly = true;
			this->textBox144->Size = System::Drawing::Size(100, 31);
			this->textBox144->TabIndex = 65;
			// 
			// label220
			// 
			this->label220->AutoSize = true;
			this->label220->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label220->Location = System::Drawing::Point(40, 158);
			this->label220->Name = L"label220";
			this->label220->Size = System::Drawing::Size(487, 40);
			this->label220->TabIndex = 67;
			this->label220->Text = L"Термін окупності додаткових капіталовкладень на\r\n впровадження заходів по зниженн" 
				L"ю собівартості";
			// 
			// label219
			// 
			this->label219->AutoSize = true;
			this->label219->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label219->Location = System::Drawing::Point(40, 106);
			this->label219->Name = L"label219";
			this->label219->Size = System::Drawing::Size(264, 20);
			this->label219->TabIndex = 66;
			this->label219->Text = L" Річний економічний ефект";
			// 
			// label218
			// 
			this->label218->AutoSize = true;
			this->label218->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label218->Location = System::Drawing::Point(40, 53);
			this->label218->Name = L"label218";
			this->label218->Size = System::Drawing::Size(332, 20);
			this->label218->TabIndex = 65;
			this->label218->Text = L"Умовно річний економічний ефект";
			// 
			// button93
			// 
			this->button93->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button93.BackgroundImage")));
			this->button93->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button93->FlatAppearance->BorderSize = 0;
			this->button93->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button93->Location = System::Drawing::Point(1742, 804);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(137, 96);
			this->button93->TabIndex = 63;
			this->button93->UseVisualStyleBackColor = true;
			this->button93->Visible = false;
			this->button93->Click += gcnew System::EventHandler(this, &MyForm::button93_Click);
			// 
			// button72
			// 
			this->button72->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button72.BackgroundImage")));
			this->button72->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button72->FlatAppearance->BorderSize = 0;
			this->button72->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button72->Location = System::Drawing::Point(1437, 786);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(154, 132);
			this->button72->TabIndex = 10;
			this->button72->UseVisualStyleBackColor = true;
			this->button72->Click += gcnew System::EventHandler(this, &MyForm::button72_Click);
			// 
			// button61
			// 
			this->button61->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button61.BackgroundImage")));
			this->button61->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button61->FlatAppearance->BorderSize = 0;
			this->button61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button61->Location = System::Drawing::Point(1597, 804);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(139, 96);
			this->button61->TabIndex = 9;
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &MyForm::button61_Click);
			// 
			// textBox101
			// 
			this->textBox101->Location = System::Drawing::Point(551, 282);
			this->textBox101->Name = L"textBox101";
			this->textBox101->Size = System::Drawing::Size(100, 22);
			this->textBox101->TabIndex = 8;
			// 
			// label161
			// 
			this->label161->AutoSize = true;
			this->label161->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label161->Location = System::Drawing::Point(169, 282);
			this->label161->Name = L"label161";
			this->label161->Size = System::Drawing::Size(313, 20);
			this->label161->TabIndex = 7;
			this->label161->Text = L"Введіть капітоловкладення (К2)";
			// 
			// textBox100
			// 
			this->textBox100->Location = System::Drawing::Point(551, 226);
			this->textBox100->Name = L"textBox100";
			this->textBox100->Size = System::Drawing::Size(100, 22);
			this->textBox100->TabIndex = 6;
			// 
			// label160
			// 
			this->label160->AutoSize = true;
			this->label160->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label160->Location = System::Drawing::Point(169, 226);
			this->label160->Name = L"label160";
			this->label160->Size = System::Drawing::Size(313, 20);
			this->label160->TabIndex = 5;
			this->label160->Text = L"Введіть капітоловкладення (К1)";
			// 
			// textBox99
			// 
			this->textBox99->Location = System::Drawing::Point(992, 167);
			this->textBox99->Name = L"textBox99";
			this->textBox99->Size = System::Drawing::Size(100, 22);
			this->textBox99->TabIndex = 4;
			// 
			// label159
			// 
			this->label159->AutoSize = true;
			this->label159->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label159->Location = System::Drawing::Point(169, 167);
			this->label159->Name = L"label159";
			this->label159->Size = System::Drawing::Size(751, 20);
			this->label159->TabIndex = 3;
			this->label159->Text = L"Введіть нормативний коефіцієнт економічної ефективності капіталовкладень";
			// 
			// textBox98
			// 
			this->textBox98->Location = System::Drawing::Point(992, 113);
			this->textBox98->Name = L"textBox98";
			this->textBox98->Size = System::Drawing::Size(100, 22);
			this->textBox98->TabIndex = 2;
			// 
			// label158
			// 
			this->label158->AutoSize = true;
			this->label158->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label158->Location = System::Drawing::Point(169, 115);
			this->label158->Name = L"label158";
			this->label158->Size = System::Drawing::Size(391, 20);
			this->label158->TabIndex = 1;
			this->label158->Text = L"Введіть відсоток зниження собівартості";
			// 
			// label157
			// 
			this->label157->AutoSize = true;
			this->label157->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label157->Location = System::Drawing::Point(110, 29);
			this->label157->Name = L"label157";
			this->label157->Size = System::Drawing::Size(665, 50);
			this->label157->TabIndex = 0;
			this->label157->Text = L"РОЗРАХУНОК ПОКАЗНИКІВ ЕКОНОМІЧНОЇ ЕФЕКТИВНОСТІ ВІД \r\nВПРОВАДЖЕННЯ ЗАХОДІВ ПО ЗНИЖ" 
				L"ЕННЮ СОБІВАРТОСТІ";
			// 
			// tabPage26
			// 
			this->tabPage26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage26.BackgroundImage")));
			this->tabPage26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage26->Controls->Add(this->button113);
			this->tabPage26->Controls->Add(this->button95);
			this->tabPage26->Controls->Add(this->button94);
			this->tabPage26->Controls->Add(this->label110);
			this->tabPage26->Controls->Add(this->dataGridView25);
			this->tabPage26->Location = System::Drawing::Point(4, 25);
			this->tabPage26->Name = L"tabPage26";
			this->tabPage26->Padding = System::Windows::Forms::Padding(3);
			this->tabPage26->Size = System::Drawing::Size(1992, 1063);
			this->tabPage26->TabIndex = 0;
			this->tabPage26->Text = L"Техніко-економічні показники роботи дільниці";
			this->tabPage26->UseVisualStyleBackColor = true;
			// 
			// button113
			// 
			this->button113->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button113.BackgroundImage")));
			this->button113->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button113->FlatAppearance->BorderSize = 0;
			this->button113->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button113->Location = System::Drawing::Point(1466, 842);
			this->button113->Name = L"button113";
			this->button113->Size = System::Drawing::Size(94, 102);
			this->button113->TabIndex = 81;
			this->button113->UseVisualStyleBackColor = true;
			this->button113->Click += gcnew System::EventHandler(this, &MyForm::button113_Click);
			// 
			// button95
			// 
			this->button95->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button95.BackgroundImage")));
			this->button95->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button95->FlatAppearance->BorderSize = 0;
			this->button95->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button95->Location = System::Drawing::Point(1566, 825);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(145, 125);
			this->button95->TabIndex = 64;
			this->button95->UseVisualStyleBackColor = true;
			this->button95->Click += gcnew System::EventHandler(this, &MyForm::button95_Click);
			// 
			// button94
			// 
			this->button94->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button94.BackgroundImage")));
			this->button94->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button94->FlatAppearance->BorderSize = 0;
			this->button94->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button94->Location = System::Drawing::Point(1717, 851);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(132, 84);
			this->button94->TabIndex = 63;
			this->button94->UseVisualStyleBackColor = true;
			this->button94->Click += gcnew System::EventHandler(this, &MyForm::button94_Click);
			// 
			// label110
			// 
			this->label110->AutoSize = true;
			this->label110->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label110->Location = System::Drawing::Point(198, 29);
			this->label110->Name = L"label110";
			this->label110->Size = System::Drawing::Size(726, 25);
			this->label110->TabIndex = 0;
			this->label110->Text = L"Техніко-економічні показники роботи дільниці по виробництву деталі\r\n";
			// 
			// dataGridView25
			// 
			this->dataGridView25->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle93->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle93->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle93->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle93->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle93->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle93->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle93->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView25->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle93;
			this->dataGridView25->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView25->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->Column100, 
				this->Column101});
			this->dataGridView25->Location = System::Drawing::Point(31, 75);
			this->dataGridView25->Name = L"dataGridView25";
			this->dataGridView25->RowTemplate->Height = 24;
			this->dataGridView25->Size = System::Drawing::Size(1196, 874);
			this->dataGridView25->TabIndex = 1;
			// 
			// Column100
			// 
			this->Column100->HeaderText = L"Показники";
			this->Column100->Name = L"Column100";
			this->Column100->Width = 500;
			// 
			// Column101
			// 
			this->Column101->HeaderText = L"По проекту";
			this->Column101->Name = L"Column101";
			this->Column101->Width = 350;
			// 
			// printDialog2
			// 
			this->printDialog2->Document = this->printDocument2;
			this->printDialog2->UseEXDialog = true;
			// 
			// printDocument2
			// 
			this->printDocument2->BeginPrint += gcnew System::Drawing::Printing::PrintEventHandler(this, &MyForm::printDocument2_BeginPrint_1);
			this->printDocument2->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument2_PrintPage);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1906, 1037);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Техніко-економічний розрахунок";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView10))->EndInit();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			this->tabPage17->ResumeLayout(false);
			this->tabPage17->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			this->tabPage6->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage11->ResumeLayout(false);
			this->tabPage11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			this->tabPage12->ResumeLayout(false);
			this->tabPage12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView5))->EndInit();
			this->tabPage13->ResumeLayout(false);
			this->tabPage13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView6))->EndInit();
			this->tabPage14->ResumeLayout(false);
			this->tabControl4->ResumeLayout(false);
			this->tabPage15->ResumeLayout(false);
			this->tabPage15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView4))->EndInit();
			this->tabPage16->ResumeLayout(false);
			this->tabPage16->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView7))->EndInit();
			this->tabPage18->ResumeLayout(false);
			this->tabPage18->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView13))->EndInit();
			this->tabPage19->ResumeLayout(false);
			this->tabPage19->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView15))->EndInit();
			this->tabPage30->ResumeLayout(false);
			this->tabPage30->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView16))->EndInit();
			this->tabPage24->ResumeLayout(false);
			this->tabPage24->PerformLayout();
			this->tabPage20->ResumeLayout(false);
			this->tabPage20->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView18))->EndInit();
			this->tabPage25->ResumeLayout(false);
			this->tabPage25->PerformLayout();
			this->tabPage28->ResumeLayout(false);
			this->tabPage28->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView26))->EndInit();
			this->tabPage21->ResumeLayout(false);
			this->tabPage21->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView21))->EndInit();
			this->tabPage29->ResumeLayout(false);
			this->tabPage29->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView23))->EndInit();
			this->tabPage22->ResumeLayout(false);
			this->tabPage22->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView24))->EndInit();
			this->tabPage23->ResumeLayout(false);
			this->tabControl5->ResumeLayout(false);
			this->tabPage27->ResumeLayout(false);
			this->tabPage27->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->tabPage26->ResumeLayout(false);
			this->tabPage26->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView25))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			   Nvip=Convert::ToDouble(textBox13->Text);
B=Convert::ToDouble(textBox12->Text);
Nzap=Nvip*(1+B/100);
Nzap = ((int)(Nzap*100 + (Nzap >= 0 ? 0.5 : -0.5))/100.0);
//Nzap=Math::Round(Nzap);
            Dk=Convert::ToDouble(textBox11->Text);
			Dv=Convert::ToDouble(textBox10->Text);
            Dsv=Convert::ToDouble(textBox9->Text);
			Dpsv=Convert::ToDouble(textBox8->Text);
			Tzm=Convert::ToDouble(textBox7->Text);
			Tnc=Convert::ToDouble(textBox18->Text);
			Kzm=Convert::ToDouble(textBox17->Text);
			Krem=Convert::ToDouble(textBox16->Text);
            
            t=Convert::ToDouble(textBox15->Text);
			
			int i;

			for(i=1;i<=12;i++){
				if(i==NULL)
					MessageBox::Show("Введені не всі данні, будь-ласка повторіть ввод даних");
			}
			Frd=Dk-Dv-Dsv;
			Fdo=((Dk-Dv-Dsv)*Tzm*Kzm-Dpsv*Tnc)*Krem;
            takt=(Fdo*60)/Nzap;
			 nd=(Nzap*t)/Frd;
			 nd=ceil(nd);
			 Ndob=Nzap/Frd;
			 Rzap=nd/Ndob;
			 Snraz=Frd/Rzap;
			 Fdo = ((int)(Fdo*1 + (Fdo >= 0 ? 0.5 : -0.5))/1.0);



			 Rzap = ((int)(Rzap*1 + (Rzap >= 0 ? 0.5 : -0.5))/1.0);
			 Snraz = ((int)(Snraz*1 + (Snraz >= 0 ? 0.5 : -0.5))/1.0);



			 takt = ((int)(takt*100 + (takt >= 0 ? 0.5 : -0.5))/100.0);
			 Ndob = ((int)(Ndob*1 + (Ndob >= 0 ? 0.5 : -0.5))/1.0);


			 
			 //nd=ceil(nd);
			 //Fdo=Math::Round(Fdo,2);
			 //Rzap=Math::Round(Rzap);
			 //Snraz=Math::Round(Snraz);
			   //takt=Math::Round(takt,2);
			 
			 this->textBox14->Text=Convert::ToString (Frd);
			 this->textBox24->Text=Convert::ToString (Nzap);
			 this->textBox25->Text=Convert::ToString (Fdo);
			 this->textBox26->Text=Convert::ToString (takt);
			 this->textBox27->Text=Convert::ToString (nd);
			 this->textBox28->Text=Convert::ToString (Ndob);
			 this->textBox29->Text=Convert::ToString (Rzap);
			 this->textBox30->Text=Convert::ToString (Snraz);
			 button15->BackColor = Color::Blue;

		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
this->tabControl1->SelectedTab=tabPage5;		 }












private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
kiloperation1=Convert::ToDouble(textBox19->Text);
			kiloperation=kiloperation1-1;
			
			for (o=0; o<=kiloperation;o++){
				dataGridView10->Rows[o]->Cells[1]->Value = Convert::ToString(Nzap);
tsht = Convert::ToDouble(dataGridView10->Rows[o]->Cells[2]->FormattedValue->ToString());
tst=tsht/kiloperation;
double Tpi1;
				Tpi=(Nzap*tsht)/60;
				Tpi = ((int)(Tpi*100 + (Tpi >= 0 ? 0.5 : -0.5))/100.0);
				/*Tpi=Math::Round(Tpi1,2);
				
	 double xy;
				xy=Tpi1-Tpi;
				xy=xy*1000;
			if(xy=5)
			{
				//MessageBox::Show("true");
			Tpi=(Tpi1*1000)+1;
				Tpi=Tpi/1000;
					Tpi=Math::Round(Tpi,2);
				dataGridView10->Rows[o]->Cells[3]->Value = Convert::ToString(Tpi);
			}*/
				dataGridView10->Rows[o]->Cells[3]->Value = Convert::ToString(Tpi);
				


				pic1=pic1+tsht;
				pic2=pic2+Tpi;

				}

			sum1=pic1;
			sum2=pic2;
			thtser=sum1/kiloperation1;
			thtser = ((int)(thtser*100 + (thtser >= 0 ? 0.5 : -0.5))/100.0);
			 //thtser=Math::Round(thtser,2);
			Kzo=takt/thtser;


			if(Kzo<1)
					label38->Text="масове виробництво";

				else
				if(Kzo<10&&Kzo>1)
					label38->Text="крупносерійне виробництво";
				else 
				if(Kzo>10&&Kzo<20)
					label38->Text="серійне виробництво";
				else
					if(Kzo>20&&Kzo<40)
						label38->Text="дрібносерійне виробництво";
					else
						if(Kzo>40)
							label38->Text="одиничне виробництво";




			if(Kzo<1)
					label38->Text="масове виробництво";

				else
				if(Kzo<10&&Kzo>1)
					label38->Text="крупносерійне виробництво";
				else 
				if(Kzo>10&&Kzo<20)
					label38->Text="серійне виробництво";
				else
					if(Kzo>20&&Kzo<40)
						label38->Text="дрібносерійне виробництво";
					else
						if(Kzo>40)
							label38->Text="одиничне виробництво";

			//dataGridView10->Rows->Add();
			dataGridView10->Rows[kiloperation+1]->Cells[0]->Value = "Всього";
			dataGridView10->Rows[kiloperation+1]->Cells[2]->Value = pic1;
			dataGridView10->Rows[kiloperation+1]->Cells[3]->Value = pic2;
		    dataGridView10->Rows[kiloperation+1]->Cells[2]->Style->BackColor = Color::Yellow;
			dataGridView10->Rows[kiloperation+1]->Cells[0]->Style->BackColor = Color::Yellow;
		    dataGridView10->Rows[kiloperation+1]->Cells[3]->Style->BackColor = Color::Yellow;
				pic1=0;
				pic2=0;
				
			
			

			Kzo = ((int)(Kzo*100 + (Kzo >= 0 ? 0.5 : -0.5))/100.0);
			 //Kzo=Math::Round(Kzo,2);
			this->textBox31->Text=Convert::ToString (Kzo);
			//sum1=0;
			//sum2=0;
			button18->Visible=true;
			
		 }






private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl2->SelectedTab=tabPage8;
			 if(Kzo<1)
					label73->Text="масове виробництво (0,65...0,75)";

				else
				if(Kzo<10&&Kzo>1)
					label73->Text="крупносерійне виробництво (0,65...0,75)";
				else 
				if(Kzo>10&&Kzo<20)
					label73->Text="серійне виробництво (0,75...0,8)";
				else
					if(Kzo>20&&Kzo<40)
						label73->Text="дрібносерійне виробництво (0,8...0,9)";
					else
						if(Kzo>40)
							label73->Text="одиничне виробництво";
			 int i;int w;
for ( i = 0; i<=kiloperation; i++){
	dataGridView1->Rows->Add();
	operation = Convert::ToString(dataGridView10->Rows[i]->Cells[0]->FormattedValue->ToString());
    dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(operation);
	tsht = Convert::ToDouble(dataGridView10->Rows[i]->Cells[2]->FormattedValue->ToString());
    dataGridView1->Rows[i]->Cells[2]->Value = Convert::ToString(tsht);
	Tpi = Convert::ToDouble(dataGridView10->Rows[i]->Cells[3]->FormattedValue->ToString());
   dataGridView1->Rows[i]->Cells[3]->Value = Convert::ToString(Tpi);
	dataGridView1->Rows[i]->Cells[6]->Value = Convert::ToString(Fdo);
	}
		 }









private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i;
			for ( i = 0; i<=kiloperation; i++){
	modelverst=Convert::ToString(dataGridView1->Rows[i]->Cells[1]->FormattedValue->ToString());
	Tpi = Convert::ToDouble(dataGridView10->Rows[i]->Cells[3]->FormattedValue->ToString());
	Kvn=Convert::ToDouble(dataGridView1->Rows[i]->Cells[7]->FormattedValue->ToString());
	double Kz1;
	Viroz=Tpi/(Fdo*Kvn);
	//Vinp=ceil(Viroz);
	Viroz = ((int)(Viroz*100 + (Viroz >= 0 ? 0.5 : -0.5))/100.0);
	//Viroz=Math::Round(Viroz,2);
	
	Vinp=ceil(Viroz);
	if (Viroz>1){
		Viroz=Viroz/Vinp;
		Viroz = ((int)(Viroz*100 + (Viroz >= 0 ? 0.5 : -0.5))/100.0);
	}
	dataGridView1->Rows[i]->Cells[10]->Value = Convert::ToString(Vinp);
	dataGridView1->Rows[i]->Cells[8]->Value = Convert::ToString(Viroz);
	
	//Kz1=Viroz/Vinp;



	//Kzi = ((int)(Kz1*100 + (Kz1 >= 0 ? 0.5 : -0.5))/100.0);
	 /*Kzi=Math::Round(Kz1,2);
	 double xy;
				xy=Kz1-Kzi;
				xy=xy*1000;
			if(xy=5)
			{
				//MessageBox::Show("true");
			Kzi=(Kz1*1000)+1;
				Kzi=Kzi/1000;
					Kzi=Math::Round(Kzi,2);
				dataGridView1->Rows[i]->Cells[11]->Value = Convert::ToString(Kzi);
			}*/
			//dataGridView1->Rows[i]->Cells[11]->Value = Convert::ToString(Kzi);
				
	dataGridView1->Rows[i]->Cells[9]->Style->BackColor = Color::White;
			}
			button20->Visible=true;
			button47->Visible=true;
			button21->Visible=true;
		 }









private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i;
			for ( i = 0; i<=kiloperation; i++){
				Virozprin=Convert::ToDouble(dataGridView1->Rows[i]->Cells[9]->FormattedValue->ToString());
	//Vinp=ceil(Virozprin);
				//dataGridView2->Rows[i]->Cells[10]->Value = Convert::ToString(Vinp);


				Kzi=Virozprin;
				dataGridView1->Rows[i]->Cells[11]->Value = Convert::ToString(Kzi);




				//Kzi=Convert::ToDouble(dataGridView1->Rows[i]->Cells[11]->FormattedValue->ToString());



				Vinp=Convert::ToDouble(dataGridView1->Rows[i]->Cells[10]->FormattedValue->ToString());
				//Kzi=Convert::ToDouble(dataGridView2->Rows[i]->Cells[11]->FormattedValue->ToString());




	modelverst=Convert::ToString(dataGridView1->Rows[i]->Cells[1]->FormattedValue->ToString());
	Tpi = Convert::ToDouble(dataGridView10->Rows[i]->Cells[3]->FormattedValue->ToString());
	Kvn=Convert::ToDouble(dataGridView1->Rows[i]->Cells[7]->FormattedValue->ToString());
	double qwe;
	qwe=Fdo*Kvn*Vinp;
	qwe = ((int)(qwe*100 + (qwe >= 0 ? 0.5 : -0.5))/100.0);
	Viroz = Convert::ToDouble(dataGridView1->Rows[i]->Cells[8]->FormattedValue->ToString());
	Tdov=qwe*(Virozprin-Viroz);
	Tdov = ((int)(Tdov*100 + (Tdov >= 0 ? 0.5 : -0.5))/100.0);
	 dataGridView1->Rows[i]->Cells[4]->Value = Convert::ToString(Tdov);
    Trzach=Tpi+Tdov;
	Trzach = ((int)(Trzach*100 + (Trzach >= 0 ? 0.5 : -0.5))/100.0);
	dataGridView1->Rows[i]->Cells[5]->Value = Convert::ToString(Trzach);
	

			}

			//dataGridView2->Rows->Add();
			dataGridView1->Rows[kiloperation+1]->Cells[0]->Value = "Всього";
			for ( i = 0; i<=kiloperation; i++){
				Tdov = Convert::ToDouble(dataGridView1->Rows[i]->Cells[4]->FormattedValue->ToString());
				Trzach = Convert::ToDouble(dataGridView1->Rows[i]->Cells[5]->FormattedValue->ToString());
				Viroz = Convert::ToDouble(dataGridView1->Rows[i]->Cells[8]->FormattedValue->ToString());
				Virozprin = Convert::ToDouble(dataGridView1->Rows[i]->Cells[9]->FormattedValue->ToString());
				//real1 = Convert::ToDouble(dataGridView1->Rows[i]->Cells[9]->FormattedValue->ToString());
				Vinp = Convert::ToDouble(dataGridView1->Rows[i]->Cells[10]->FormattedValue->ToString());
				
				if (Vinp>1)
				{
					real=Vinp*Virozprin;
					real = ((int)(real*100 + (real >= 0 ? 0.5 : -0.5))/100.0);
					//real=real-Virozprin;
					//real1=Virozprin*2;
					//real=real-1,6;


				}
				pic3=pic3+Tdov;
				pic4=pic4+Trzach;
				pic5=pic5+Viroz;
				pic6=pic6+Virozprin;
				pic7=pic7+Vinp;
				}

			for ( i = 0; i<=kiloperation; i++)
			{
				Vinp = Convert::ToDouble(dataGridView1->Rows[i]->Cells[10]->FormattedValue->ToString());
				Virozprin = Convert::ToDouble(dataGridView1->Rows[i]->Cells[9]->FormattedValue->ToString());

				if (Vinp>1)
				{
					real=Vinp*Virozprin;
					real = ((int)(real*100 + (real >= 0 ? 0.5 : -0.5))/100.0);
					BBC[i]=real-Virozprin;
			}
				real1=real1+BBC[i];
			}
			pic6=pic6+real1;
			
			sum3=pic3;
			sum4=pic4;
			sum5=pic5;



			sum6=pic6;
			sum7=pic7;
			serkoefobl=sum6/sum7;
			serkoefobl = ((int)(serkoefobl*100 + (serkoefobl >= 0 ? 0.5 : -0.5))/100.0);

			this->textBox51->Text=Convert::ToString (serkoefobl);



			dataGridView1->Rows[kiloperation+1]->Cells[2]->Value = sum1;
			dataGridView1->Rows[kiloperation+1]->Cells[3]->Value = sum2;
			dataGridView1->Rows[kiloperation+1]->Cells[4]->Value = pic3;
			dataGridView1->Rows[kiloperation+1]->Cells[5]->Value = pic4;
			//dataGridView2->Rows[kiloperation+1]->Cells[8]->Value = sum5;
			dataGridView1->Rows[kiloperation+1]->Cells[9]->Value = pic6;
			dataGridView1->Rows[kiloperation+1]->Cells[10]->Value = pic7;
			//dataGridView2->Rows[kiloperation+1]->Cells[11]->Value = sumkz;
			
				dataGridView1->Rows[kiloperation+1]->Cells[0]->Style->BackColor = Color::Yellow;
				dataGridView1->Rows[kiloperation+1]->Cells[2]->Style->BackColor = Color::Yellow;
				dataGridView1->Rows[kiloperation+1]->Cells[3]->Style->BackColor = Color::Yellow;
				dataGridView1->Rows[kiloperation+1]->Cells[4]->Style->BackColor = Color::Yellow;
				dataGridView1->Rows[kiloperation+1]->Cells[5]->Style->BackColor = Color::Yellow;
				//dataGridVi1w2->Rows[kiloperation+1]->Cells[8]->Style->BackColor = Color::Yellow;
				dataGridView1->Rows[kiloperation+1]->Cells[9]->Style->BackColor = Color::Yellow;
				dataGridView1->Rows[kiloperation+1]->Cells[10]->Style->BackColor = Color::Yellow;
				//dataGridView2->Rows[kiloperation+1]->Cells[11]->Style->BackColor = Color::Yellow;
				real1=0;
				
			pic3=0;
			pic4=0;
			pic5=0;
			pic6=0;
			pic7=0;
				
				
		 }














private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl2->SelectedTab=tabPage9;
			 int i;
			 for ( i = 0; i<=kiloperation; i++){
				 
	dataGridView2->Rows->Add();
	kilverst= Convert::ToDouble(dataGridView1->Rows[i]->Cells[10]->FormattedValue->ToString());
	dataGridView2->Rows[i]->Cells[2]->Value = Convert::ToString(kilverst);
			 operation = Convert::ToString(dataGridView1->Rows[i]->Cells[0]->FormattedValue->ToString());
			 dataGridView2->Rows[i]->Cells[0]->Value = Convert::ToString(operation);

			 modelverst=Convert::ToString(dataGridView1->Rows[i]->Cells[1]->FormattedValue->ToString());
			 dataGridView2->Rows[i]->Cells[1]->Value = Convert::ToString(modelverst);}
		 }










private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i;
			 vidsotokTMV=Convert::ToDouble(textBox20->Text);
			 vidsotokTMV=vidsotokTMV/100;
			 for ( i = 0; i<=kiloperation; i++){
			 kilverst= Convert::ToDouble(dataGridView2->Rows[i]->Cells[2]->FormattedValue->ToString());
			 Pobl=Convert::ToDouble(dataGridView2->Rows[i]->Cells[3]->FormattedValue->ToString());
			 mex=Convert::ToDouble(dataGridView2->Rows[i]->Cells[4]->FormattedValue->ToString());
			 elektr=Convert::ToDouble(dataGridView2->Rows[i]->Cells[5]->FormattedValue->ToString());
			 zagalnavar=Convert::ToDouble(dataGridView2->Rows[i]->Cells[6]->FormattedValue->ToString());
			 vitratuTMV=zagalnavar*vidsotokTMV;
	          dataGridView2->Rows[i]->Cells[7]->Value = Convert::ToString(vitratuTMV);
			 balvart=vitratuTMV+zagalnavar;
			 dataGridView2->Rows[i]->Cells[8]->Value = Convert::ToString(balvart);
			 //расчёт суммы по таблице
 }
			 //
			 ///
			 ///




			 //dataGridView3->Rows->Add();
			dataGridView2->Rows[kiloperation+1]->Cells[0]->Value = "Всього";
			for ( i = 0; i<=kiloperation; i++){
			kilverst= Convert::ToDouble(dataGridView2->Rows[i]->Cells[2]->FormattedValue->ToString());
			 Pobl=Convert::ToDouble(dataGridView2->Rows[i]->Cells[3]->FormattedValue->ToString());
			 mex=Convert::ToDouble(dataGridView2->Rows[i]->Cells[4]->FormattedValue->ToString());
			 elektr=Convert::ToDouble(dataGridView2->Rows[i]->Cells[5]->FormattedValue->ToString());
			 zagalnavar=Convert::ToDouble(dataGridView2->Rows[i]->Cells[6]->FormattedValue->ToString());
			 vitratuTMV=Convert::ToDouble(dataGridView2->Rows[i]->Cells[7]->FormattedValue->ToString());
			 balvart=Convert::ToDouble(dataGridView2->Rows[i]->Cells[8]->FormattedValue->ToString());
			 pic8=pic8+kilverst;
			 pic9=pic9+Pobl;
			 pic10=pic10+mex;
			 pic11=pic11+elektr;
			 pic12=pic12+zagalnavar;
			 pic13=pic13+vitratuTMV;
			 pic14=pic14+balvart;
				

			}
			sum8=pic8;
			sum9=pic9;
			sum10=pic10;
			sum11=pic11;
			sum12=pic12;
			sum13=pic13;
			sum14=pic14;

			dataGridView2->Rows[kiloperation+1]->Cells[2]->Value = pic8;
			dataGridView2->Rows[kiloperation+1]->Cells[3]->Value = pic9;
			dataGridView2->Rows[kiloperation+1]->Cells[4]->Value = pic10;
			dataGridView2->Rows[kiloperation+1]->Cells[5]->Value = pic11;
			dataGridView2->Rows[kiloperation+1]->Cells[6]->Value = pic12;
			dataGridView2->Rows[kiloperation+1]->Cells[7]->Value = pic13;
			dataGridView2->Rows[kiloperation+1]->Cells[8]->Value = pic14;
			
				dataGridView2->Rows[kiloperation+1]->Cells[2]->Style->BackColor = Color::Yellow;
				dataGridView2->Rows[kiloperation+1]->Cells[3]->Style->BackColor = Color::Yellow;
				dataGridView2->Rows[kiloperation+1]->Cells[4]->Style->BackColor = Color::Yellow;
				dataGridView2->Rows[kiloperation+1]->Cells[5]->Style->BackColor = Color::Yellow;
				dataGridView2->Rows[kiloperation+1]->Cells[6]->Style->BackColor = Color::Yellow;
				dataGridView2->Rows[kiloperation+1]->Cells[7]->Style->BackColor = Color::Yellow;
				dataGridView2->Rows[kiloperation+1]->Cells[8]->Style->BackColor = Color::Yellow;
				pic8=0;
				pic9=0;
				pic10=0;
				pic11=0;
				pic12=0;
				pic13=0;
				pic14=0;

		 }
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
			 vidsotokTMV1=Convert::ToDouble(textBox21->Text);
			 vidsotokTMV1=vidsotokTMV1/100;
			  
			int i,j;
 
			 /*int cc = 0;
			 while(cc==0){
				 try{
					 if(dataGridView27->Rows[i]->Cells[2]->Value != "" && cc ==0)
					 {
						 j++;
					 }
				 } 
				 catch (Exception ^e){
					 cc =1; 
				  }
					 
			 i++;
			 
			 }
			 i=0;
			 j--;
			 //MessageBox::Show(j+"");
			 
			  f1=j;
			 
			  //f1=f1-1;
			  f1=f1*(-1);
			  //MessageBox::Show(f1+"");
			 f1+"";
			*/
			  int f;
			 for ( f = 0; f<=h111; f++){
			 


zagalnavar1=Convert::ToDouble(dataGridView27->Rows[f]->Cells[5]->FormattedValue->ToString());
vitratuTMV1=zagalnavar1*vidsotokTMV1;
			 dataGridView27->Rows[f]->Cells[6]->Value = Convert::ToString(vitratuTMV1);
			 balvart1=vitratuTMV1+zagalnavar1;
			 dataGridView27->Rows[f]->Cells[7]->Value = Convert::ToString(balvart1);
			kilverst1= Convert::ToDouble(dataGridView27->Rows[f]->Cells[2]->FormattedValue->ToString());
			 Pobl1=Convert::ToDouble(dataGridView27->Rows[f]->Cells[3]->FormattedValue->ToString());
			 balvart1=Convert::ToDouble(dataGridView27->Rows[f]->Cells[7]->FormattedValue->ToString());
			 

			 pic15=pic15+kilverst1;
              pic16=pic16+Pobl1;
			 pic17=pic17+zagalnavar1;
			 pic18=pic18+vitratuTMV1;
			 pic19=pic19+balvart1;
			 }
			 sum15=pic15;
			 sum16=pic16;
			 sum17=pic17;
			 sum18=pic18;
			 sum19=pic19;

			 dataGridView27->Rows->Add();
			 
			dataGridView27->Rows[h111+1]->Cells[0]->Value = "Всього";
			dataGridView27->Rows[h111+1]->Cells[2]->Value = pic15;
			dataGridView27->Rows[h111+1]->Cells[3]->Value = pic16;
			dataGridView27->Rows[h111+1]->Cells[5]->Value = pic17;
			dataGridView27->Rows[h111+1]->Cells[6]->Value = pic18;
			dataGridView27->Rows[h111+1]->Cells[7]->Value = pic19;
			 
				dataGridView27->Rows[h111+1]->Cells[2]->Style->BackColor = Color::Yellow;
				dataGridView27->Rows[h111+1]->Cells[3]->Style->BackColor = Color::Yellow;
				dataGridView27->Rows[h111+1]->Cells[5]->Style->BackColor = Color::Yellow;
				dataGridView27->Rows[h111+1]->Cells[6]->Style->BackColor = Color::Yellow;
				dataGridView27->Rows[h111+1]->Cells[7]->Style->BackColor = Color::Yellow;


		
			



			pic20=sum15+sum8;
			pic21=sum16+sum9;
			pic22=sum17+sum12;
			pic23=sum18+sum13;
			pic24=sum19+sum14;

			
				dataGridView27->Rows->Add();
				dataGridView27->Rows[h111+3]->Cells[0]->Value = "Разом";
			dataGridView27->Rows[h111+3]->Cells[2]->Value = pic20;
			dataGridView27->Rows[h111+3]->Cells[3]->Value = pic21;
			dataGridView27->Rows[h111+3]->Cells[5]->Value = pic22;
			dataGridView27->Rows[h111+3]->Cells[6]->Value = pic23;
			dataGridView27->Rows[h111+3]->Cells[7]->Value = pic24;
			
				dataGridView27->Rows[h111+3]->Cells[2]->Style->BackColor = Color::Yellow;
				dataGridView27->Rows[h111+3]->Cells[3]->Style->BackColor = Color::Yellow;
				dataGridView27->Rows[h111+3]->Cells[5]->Style->BackColor = Color::Yellow;
				dataGridView27->Rows[h111+3]->Cells[6]->Style->BackColor = Color::Yellow;
				dataGridView27->Rows[h111+3]->Cells[7]->Style->BackColor = Color::Yellow;
				
				pic15=0;
				pic16=0;
				pic17=0;
				pic18=0;
				pic19=0;
				pic20=0;
				pic21=0;
				pic22=0;
				pic23=0;
				pic24=0;
		 }





private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
			 //обрахувати площю
			 vidsbalvart=Convert::ToDouble(textBox32->Text);
			 vidsbalvart=vidsbalvart/100;
			 Vdopi=sum14*vidsbalvart;
			 Vdopi = ((int)(Vdopi*100 + (Vdopi >= 0 ? 0.5 : -0.5))/100.0);
			 //Vdopi=Math::Round(Vdopi,2);
			 koefic=Convert::ToDouble(textBox22->Text);
			 koefic1=Convert::ToDouble(textBox23->Text);
			 this->textBox33->Text=Convert::ToString (Vdopi);
			 Pserobl=sum9/sum8;
			// Pserobl=Math::Round(Pserobl,1);

			 Pserobl = ((int)(Pserobl*1 + (Pserobl >= 0 ? 0.5 : -0.5))/1.0);
             this->textBox34->Text=Convert::ToString (Pserobl);
             Sput=Convert::ToDouble(textBox35->Text);
			 Sputd=Sput*sum8;
 			 this->textBox36->Text=Convert::ToString (Sputd);
              Szag=koefic*Sputd;
			  Szag = ((int)(Szag*1 + (Szag >= 0 ? 0.5 : -0.5))/1.0);
			 this->textBox37->Text=Convert::ToString (Szag);
             h=Convert::ToDouble(textBox38->Text);
			 Vbud=h*Szag*koefic1;

			  //Vbud=Math::Round(Vbud);
			 Vbud = ((int)(Vbud*1 + (Vbud >= 0 ? 0.5 : -0.5))/1.0);
			 this->textBox39->Text=Convert::ToString (Vbud);
              Cbud=Convert::ToDouble(textBox41->Text);
			 Bbud=Cbud*Vbud;
			 //Bbud=Math::Round(Bbud,2);
			 Bbud = ((int)(Bbud*100 + (Bbud >= 0 ? 0.5 : -0.5))/100.0);
			 this->textBox40->Text=Convert::ToString (Bbud);
			 button14->BackColor = Color::Blue;
			 button26->Visible=true;
		 }
private: System::Void label59_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
			 Fnom=(Dk-Dv-Dsv)*Tzm-Dpsv*Tnc;
			 Fnom = ((int)(Fnom*1 + (Fnom >= 0 ? 0.5 : -0.5))/1.0);
			 this->textBox46->Text=Convert::ToString (Fnom);
             Dchv=Convert::ToDouble(textBox42->Text);
			 Ddv=Convert::ToDouble(textBox43->Text);
			 Dlik=Convert::ToDouble(textBox44->Text);
			 Ddo=Convert::ToDouble(textBox45->Text);
			 Fef=Fnom-(Dchv+Ddv+Dlik+Ddo)*Tzm;
			 Fef = ((int)(Fef*1 + (Fef >= 0 ? 0.5 : -0.5))/1.0);
			 this->textBox47->Text=Convert::ToString (Fef);
			 button28->Visible=true;
		 }




private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl3->SelectedTab=tabPage12;
			  int i;
			 for(i=0;i<=kiloperation;i++){
				 dataGridView5->Rows->Add();

			 Trzach=Convert::ToDouble(dataGridView1->Rows[i]->Cells[5]->FormattedValue->ToString());
			 dataGridView5->Rows[i]->Cells[2]->Value = Convert::ToString(Trzach);
			 }
		 }



private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i,j;
			
for ( i = 0; i<=kiloperation; i++){
			 
	Trzach=Convert::ToDouble(dataGridView5->Rows[i]->Cells[2]->FormattedValue->ToString());
			  dataGridView5->Rows[i]->Cells[3]->Value = Convert::ToString(Fef);
				Kvn1=Convert::ToDouble(dataGridView5->Rows[i]->Cells[4]->FormattedValue->ToString());
				 Rvsp=Trzach/Fef*Kvn1;
				 Rvsp = ((int)(Rvsp*100 + (Rvsp >= 0 ? 0.5 : -0.5))/100.0);
				 //Rvsp=Math::Round(Rvsp,2);
				 dataGridView5->Rows[i]->Cells[5]->Value = Convert::ToString(Rvsp);
//testtttttttttttttttttttt
				  double c, b;
   int a;
   
   
   a=(int)Rvsp;
   b=Rvsp-a;
   Rvspokrugl=b*10;
   
   if(Rvspokrugl==1)
	   {
		  
		   Rvinp=ceil(Rvsp);
		   dataGridView5->Rows[i]->Cells[6]->Value = Convert::ToString(Rvinp);
	   }
   else
   
	   if(Rvspokrugl<1)
	   {
		   Rvinp = ((int)(Rvsp*1 + (Rvsp >= 0 ? 0.5 : -0.5))/1.0);
		   //Rvinp=Math::Round(Rvsp);
		dataGridView5->Rows[i]->Cells[6]->Value = Convert::ToString(Rvinp);
		  
	   }
	   else
	    if(Rvspokrugl>1)
   {
	   Rvinp=ceil(Rvsp);
	 dataGridView5->Rows[i]->Cells[6]->Value = Convert::ToString(Rvinp);
	   
   }

Kz1=Rvsp/Rvinp;
Kz1 = ((int)(Kz1*100 + (Kz1 >= 0 ? 0.5 : -0.5))/100.0);
			 //Kz1=Math::Round(Kz1,2);
			 dataGridView5->Rows[i]->Cells[7]->Value = Convert::ToString(Kz1);
			pic25=pic25+Trzach;
				pic26=pic26+Rvsp;
				pic27=pic27+Rvinp;
				
			 }
			 

			 //dataGridView5->Rows->Add();
			 dataGridView5->Rows[kiloperation+1]->Cells[0]->Value = "Всього";
			 
			 sum20=pic25;
			 sum21=pic26;
			 sum22=pic27;

			 
				Kz1sum=sum21/sum22;
				Kz1sum = ((int)(Kz1sum*100 + (Kz1sum >= 0 ? 0.5 : -0.5))/100.0);
				//Kz1sum=Math::Round(Kz1sum,2);
			 dataGridView5->Rows[kiloperation+1]->Cells[2]->Value = pic25;
			dataGridView5->Rows[kiloperation+1]->Cells[5]->Value = pic26;
			dataGridView5->Rows[kiloperation+1]->Cells[6]->Value = pic27;
			dataGridView5->Rows[kiloperation+1]->Cells[7]->Value = Kz1sum;


			
				dataGridView5->Rows[kiloperation+1]->Cells[2]->Style->BackColor = Color::Yellow;
				dataGridView5->Rows[kiloperation+1]->Cells[5]->Style->BackColor = Color::Yellow;
				dataGridView5->Rows[kiloperation+1]->Cells[6]->Style->BackColor = Color::Yellow;
				dataGridView5->Rows[kiloperation+1]->Cells[7]->Style->BackColor = Color::Yellow;
				
				pic25=0;
				pic26=0;
				pic27=0;
				button30->Visible=true;
			
				
		 }
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl3->SelectedTab=tabPage13;
			 int i;
			 for ( i = 0; i<=kiloperation; i++){
				 dataGridView6->Rows->Add();
				
				 profesion=Convert::ToString(dataGridView5->Rows[i]->Cells[0]->FormattedValue->ToString());
				 dataGridView6->Rows[i]->Cells[0]->Value = (profesion);

				 Rvinp=Convert::ToDouble(dataGridView5->Rows[i]->Cells[6]->FormattedValue->ToString());
				 dataGridView6->Rows[i]->Cells[1]->Value = (Rvinp);

				 rozradrob =Convert::ToDouble(dataGridView5->Rows[i]->Cells[1]->FormattedValue->ToString());
				 dataGridView6->Rows[i]->Cells[2]->Value = (rozradrob);
			 }
			// dataGridView6->Rows->Add();
			 dataGridView6->Rows[kiloperation+1]->Cells[0]->Value = "Всього";
			 dataGridView6->Rows[kiloperation+1]->Cells[1]->Value = sum22;
			 dataGridView6->Rows[kiloperation+1]->Cells[0]->Style->BackColor = Color::Yellow;
			 dataGridView6->Rows[kiloperation+1]->Cells[1]->Style->BackColor = Color::Yellow;
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage4;
		 }
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl2->SelectedTab=tabPage10;
		 }
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }


private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage6;
		 }
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage2;
		 }
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Критерії що до встновлення Кофіцієта завантаження без довантаження: дрібносерійе виробництво – 0,8...0,9;   серійне виробництво – 0,75...0,8;  масове або крупносерійне виробництво – 0,65...0,75.,");
		 }
private: System::Void textBox28_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox36_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
			vidosnitr=Convert::ToDouble(textBox103->Text);
					  vidosnitr=vidosnitr/100;
					  int i;
					   for (i=0;i<=kilchol;i++)
					   {
				 profesion2=Convert::ToString(dataGridView8->Rows[i]->Cells[0]->FormattedValue->ToString());	
				 tarufrozrad=Convert::ToDouble(dataGridView8->Rows[i]->Cells[2]->FormattedValue->ToString());
				 stavka=Convert::ToDouble(dataGridView8->Rows[i]->Cells[3]->FormattedValue->ToString());
					   }
					   kilchol3=(sum22+sum23)*vidosnitr;
					   kilchol3=ceil(kilchol3);
					   kilchol3=kilchol3-1;
					   formform=kilchol3;
					   for (i=0;i<=kilchol3;i++)
					   {
						   dataGridView9->Rows->Add();

						   dataGridView9->Rows[i]->Cells[1]->Value = 1;
						   

					   }
					   sum24=kilchol3+1;
			dataGridView9->Rows[kilchol3+1]->Cells[0]->Value = "Всього";
			dataGridView9->Rows[kilchol3+1]->Cells[1]->Value = sum24;
		
			 
				dataGridView9->Rows[kilchol3+1]->Cells[0]->Style->BackColor = Color::Yellow;
				dataGridView9->Rows[kilchol3+1]->Cells[1]->Style->BackColor = Color::Yellow;
				 
			 }


			
		 private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
					  vidosn=Convert::ToDouble(textBox102->Text);
					  vidosn=vidosn/100;
					  kilchol=sum22*vidosn;
					  kilchol=ceil(kilchol);
					  kilchol=kilchol-1;
					  MessageBox::Show(kilchol+"");
					  int i;
					   for (i=0;i<=kilchol;i++)
					   {
						   dataGridView8->Rows->Add();
						   //tarufrozrad=Convert::ToDouble(dataGridView8->Rows[i]->Cells[2]->FormattedValue->ToString());
						   dataGridView8->Rows[i]->Cells[1]->Value = 1;
						   
					   }
					   sum23=kilchol+1;
					   dataGridView8->Rows[kilchol+1]->Cells[0]->Value = "Всього";
			dataGridView8->Rows[kilchol+1]->Cells[1]->Value = sum23;
		
			 
				dataGridView8->Rows[kilchol+1]->Cells[0]->Style->BackColor = Color::Yellow;
				dataGridView8->Rows[kilchol+1]->Cells[1]->Style->BackColor = Color::Yellow;

				  }

private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
			 chpk=Convert::ToDouble(textBox104->Text);
			 koefchpk=Convert::ToDouble(textBox105->Text);
			
			 kilchol222=chpk*koefchpk;
			 kilchol222=ceil(kilchol222);
			 formform=kilchol3+1;
			 dataGridView9->Rows->Add();

						   dataGridView9->Rows[kilchol3+1]->Cells[1]->Value = 1;
						   sum24=sum24+kilchol222;
			dataGridView9->Rows[kilchol3+2]->Cells[0]->Value = "Всього";
			dataGridView9->Rows[kilchol3+2]->Cells[1]->Value = sum24;

		 }








private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
			 tzv=Convert::ToDouble(textBox48->Text);
			 vidsotokvidhodiv=Convert::ToDouble(textBox49->Text);
			 tzv=tzv/100;
			 vidsotokvidhodiv=vidsotokvidhodiv/100;
			 int rows = dataGridView4->Rows->Count;
				 x=rows-2;
			  int f;
			 for ( f = 0; f<=f4; f++){
			 

//vitratuTMV1 = Convert::ToDouble(dataGridView4->Rows[f]->Cells[2]->FormattedValue->ToString());
				 zagotovka=Convert::ToDouble(dataGridView4->Rows[f]->Cells[2]->FormattedValue->ToString());
				 detal=Convert::ToDouble(dataGridView4->Rows[f]->Cells[3]->FormattedValue->ToString());
				 cinazamaterial=Convert::ToDouble(dataGridView4->Rows[f]->Cells[5]->FormattedValue->ToString());
					
				 massvidhodiv=zagotovka-detal;
				 massvidhodiv = ((int)(massvidhodiv*100 + (massvidhodiv >= 0 ? 0.5 : -0.5))/100.0);

				 vartistmaterial=(zagotovka*cinazamaterial)*tzv;
				 //+(massvidhodiv*cinazamaterial)
				 vartistmaterial = ((int)(vartistmaterial*100 + (vartistmaterial >= 0 ? 0.5 : -0.5))/100.0);

				 cinazavidhod=cinazamaterial*vidsotokvidhodiv;
				 cinazavidhod = ((int)(cinazavidhod*100 + (cinazavidhod >= 0 ? 0.5 : -0.5))/100.0);

				 vartistmaterialnavidhodi=cinazavidhod*massvidhodiv;
				 vartistmaterialnavidhodi = ((int)(vartistmaterialnavidhodi*100 + (vartistmaterialnavidhodi >= 0 ? 0.5 : -0.5))/100.0);

				 vartistmaterialzvidhod=vartistmaterial-vartistmaterialnavidhodi;
				 vartistmaterialzvidhod = ((int)(vartistmaterialzvidhod*100 + (vartistmaterialzvidhod >= 0 ? 0.5 : -0.5))/100.0);

				  //vmrichhelp=(vartistmaterialzvidhod*Nvip);
				 //Vmrich = ((int)(Vmrich*100 + (Vmrich >= 0 ? 0.5 : -0.5))/100.0);
				 // double hui=vmrichhelp;
				
				
			 dataGridView4->Rows[f]->Cells[4]->Value = Convert::ToString(massvidhodiv);
			 dataGridView4->Rows[f]->Cells[6]->Value = Convert::ToString(vartistmaterial);
			 dataGridView4->Rows[f]->Cells[7]->Value = Convert::ToString(cinazavidhod);
			 dataGridView4->Rows[f]->Cells[8]->Value = Convert::ToString(vartistmaterialnavidhodi);
			 dataGridView4->Rows[f]->Cells[9]->Value = Convert::ToString(vartistmaterialzvidhod);
			 vartmatr=vartistmaterialzvidhod*Nvip;
			 vartmatr = ((int)(vartmatr*100 + (vartmatr >= 0 ? 0.5 : -0.5))/100.0);
			//dataGridView5->Rows[f]->Cells[1]->Value = Convert::ToString(vartmatr);


				 
			 }
			 //vartmatr=vartistmaterialzvidhod*Nvip;
			 //vartmatr = ((int)(vartmatr*100 + (vartmatr >= 0 ? 0.5 : -0.5))/100.0);
			 //this->textBox49->Text=Convert::ToString (vartmatr);
			 //dataGridView4->Rows[0]->Cells[10]->Value = Convert::ToString(2);
			 button43->Visible=true;
		 }
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl4->SelectedTab=tabPage16;
		 }
private: System::Void tabPage16_Click(System::Object^  sender, System::EventArgs^  e) {
		 }




private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 tablee=gcnew array<DataGridView^> (30);
			 tablee[1]=dataGridView10;
			 tablee[2]=dataGridView1;
			 tablee[3]=dataGridView2;
			 tablee[4]=dataGridView27;
			 tablee[5]=dataGridView5;
			 tablee[6]=dataGridView6;
			 tablee[7]=dataGridView8;
			 tablee[8]=dataGridView9;
			 tablee[9]=dataGridView7;
			 tablee[10]=dataGridView11;
			 tablee[11]=dataGridView13;
			 tablee[12]=dataGridView14;
			 tablee[13]=dataGridView15;
			 tablee[14]=dataGridView17;
			 tablee[15]=dataGridView16;
			 tablee[16]=dataGridView18;
			 tablee[17]=dataGridView19;
			 tablee[18]=dataGridView21;
			 tablee[19]=dataGridView22;
			 tablee[20]=dataGridView23;
			 tablee[21]=dataGridView24;
			 tablee[22]=dataGridView25;
			 

			 int i,j,l;
			 for ( i = 0; i<=6; i++){
				 
				
				 dataGridView11->Rows->Add();
			 }
				 dataGridView11->Rows[0]->Cells[0]->Value = ("Всього прямий фонд зарплати розрахунковий");

				 dataGridView11->Rows[1]->Cells[0]->Value = ("Зарплата по довантаженню");
				 dataGridView11->Rows[2]->Cells[0]->Value = ("Всього зарплата з довантаженням");
				 dataGridView11->Rows[3]->Cells[0]->Value = ("Доплати до прямої зарплати");
				 dataGridView11->Rows[4]->Cells[0]->Value = ("Всього основний фонд зарплати");
				 dataGridView11->Rows[5]->Cells[0]->Value = ("Додаткова зарплата");
				 dataGridView11->Rows[6]->Cells[0]->Value = ("Всього річний фонд зарплати");
				 dataGridView11->Rows[7]->Cells[0]->Value = ("Єдиний соціальний внесок");
				 for (j=0;j<=3;j++){
					 dataGridView15->Rows->Add();
				 }
				 dataGridView15->Rows[0]->Cells[0]->Value = ("Основнi виробничі робітники");
				 dataGridView15->Rows[1]->Cells[0]->Value = ("Допоміжні робітники");
				 dataGridView15->Rows[2]->Cells[0]->Value = ("Спеціалісти та керівники");
				 dataGridView15->Rows[3]->Cells[0]->Value = ("Всього");


				 for (l=0;l<=7;l++){
					 dataGridView17->Rows->Add();
				 }
				 dataGridView17->Rows[0]->Cells[0]->Value = ("Основне обладнання");
				 dataGridView17->Rows[1]->Cells[0]->Value = ("Допоміжне обладнання");
				 dataGridView17->Rows[2]->Cells[0]->Value = ("Підйомно-транспортне обладнання");
				 dataGridView17->Rows[3]->Cells[0]->Value = ("Разом");
				 dataGridView17->Rows[4]->Cells[0]->Value = ("Дорогоцінний інструмент");
				 dataGridView17->Rows[5]->Cells[0]->Value = ("Будови та спорудження");
				 dataGridView17->Rows[6]->Cells[0]->Value = ("Разом");
				 dataGridView17->Rows[7]->Cells[0]->Value = ("Всього");
			 dataGridView17->Rows[1]->Cells[1]->Value = ("-");
			  dataGridView17->Rows[1]->Cells[2]->Value = ("-");
			   dataGridView17->Rows[1]->Cells[3]->Value = ("-");
			    dataGridView17->Rows[3]->Cells[2]->Value = ("-");
				 dataGridView17->Rows[6]->Cells[2]->Value = ("-");
				  dataGridView17->Rows[7]->Cells[2]->Value = ("-");

				 
			

				   for (i12=0;i12<=7;+i12++){
					 dataGridView21->Rows->Add();
				 }
				   dataGridView21->Rows[0]->Cells[0]->Value = ("4.3 Витрати на утримання та експлуатацію обладнання");
				   dataGridView21->Rows[1]->Cells[0]->Value = ("4.3.1 Амортизація обладнання та транспортних засобів");
				   dataGridView21->Rows[2]->Cells[0]->Value = ("4.3.2 Експлуатація обладнання");
				   dataGridView21->Rows[3]->Cells[0]->Value = ("4.3.3 Поточний ремонт обладнання");
				   dataGridView21->Rows[4]->Cells[0]->Value = ("4.3.4 Внутрішні та міжцехові приміщення");
				   dataGridView21->Rows[5]->Cells[0]->Value = ("4.3.5 Знос малоцінного інструменту");
				   dataGridView21->Rows[6]->Cells[0]->Value = ("4.3.6 Інші витрати");
				   dataGridView21->Rows[7]->Cells[0]->Value = ("Всього витрат на утримання та експлуатацію обладнання");



				   for (i13=0;i13<=5;+i13++){
					 dataGridView22->Rows->Add();
				 }
				   dataGridView22->Rows[0]->Cells[0]->Value = ("4.4 Цехові витрати");
				   dataGridView22->Rows[1]->Cells[0]->Value = ("4.4.1 Амортизація будівель та споруд");
				   dataGridView22->Rows[2]->Cells[0]->Value = ("4.4.2 Річний фонд оплати ІТР");
				   dataGridView22->Rows[3]->Cells[0]->Value = ("4.4.3. Відрахування на соціальні потреби (ЕСВ)");
				   dataGridView22->Rows[4]->Cells[0]->Value = ("4.4.4. Інші витрати");
				   dataGridView22->Rows[5]->Cells[0]->Value = ("Всього цехових витрат");


				   for (i14=0;i14<=14;+i14++){
					 dataGridView23->Rows->Add();
				 }
				   dataGridView23->Rows[0]->Cells[0]->Value = ("4.3 Витрати на утримання та експлуатацію обладнання");
				   dataGridView23->Rows[1]->Cells[0]->Value = ("4.3.1 Амортизація обладнання та транспортних засобів");
				   dataGridView23->Rows[2]->Cells[0]->Value = ("4.3.2 Експлуатація обладнання");
				   dataGridView23->Rows[3]->Cells[0]->Value = ("4.3.3 Поточний ремонт обладнання");
				   dataGridView23->Rows[4]->Cells[0]->Value = ("4.3.4 Внутрішні та міжцехові приміщення");
				   dataGridView23->Rows[5]->Cells[0]->Value = ("4.3.5 Знос малоцінного інструменту");
				   dataGridView23->Rows[6]->Cells[0]->Value = ("4.3.6 Інші витрати");
				   dataGridView23->Rows[7]->Cells[0]->Value = ("Всього витрат на утримання та експлуатацію обладнання:");
				   dataGridView23->Rows[8]->Cells[0]->Value = ("4.4  Цехові витрати");
				   dataGridView23->Rows[9]->Cells[0]->Value = ("4.4.1 Амортизація будівель та споруд");
				   dataGridView23->Rows[10]->Cells[0]->Value = ("4.4.2 Річний фонд оплати ІТР");
				   dataGridView23->Rows[11]->Cells[0]->Value = ("4.4.3. Відрахування на соціальні потреби (ЕСВ)");
				   dataGridView23->Rows[12]->Cells[0]->Value = ("4.4.4. Інші витрати");
				   dataGridView23->Rows[13]->Cells[0]->Value = ("Всього цехових витрат");
				   dataGridView23->Rows[14]->Cells[0]->Value = ("Всього непрямих витрат (Внепр)");


				    for (i15=0;i15<=5;+i15++){
					 dataGridView24->Rows->Add();
				 }
					dataGridView24->Rows[0]->Cells[0]->Value = ("Сировина та матеріали, покупні вироби та напівфабрикати власного виробництва");
					dataGridView24->Rows[1]->Cells[0]->Value = ("Пряма тарифна заробітна плата виробничих робітників, не враховуючи довантаження");
					dataGridView24->Rows[2]->Cells[0]->Value = ("Доплати та додаткова заробітна плата основних робітників, не враховуючи довантаження");
					dataGridView24->Rows[3]->Cells[0]->Value = ("ЕСВ основних робітників, не враховуючи довантаження");
					dataGridView24->Rows[4]->Cells[0]->Value = ("Витрати на утримання і експлуатацію обладнання та цехові витрати (непрямі витрати)");
					dataGridView24->Rows[5]->Cells[0]->Value = ("Собівартість виробу (Сцех)");

					for (i16=0;i16<=41;+i16++){
					 dataGridView25->Rows->Add();
				 }
					dataGridView25->Rows[0]->Cells[0]->Value = ("1 Випуск продукції");
					dataGridView25->Rows[1]->Cells[0]->Value = ("1.1 Річні витрати на обсяг випуску деталей, н-годин");
					dataGridView25->Rows[2]->Cells[0]->Value = ("1.2  Річні витрати на обсяг випуску деталей, грн.");
					dataGridView25->Rows[3]->Cells[0]->Value = ("1.3 Річний обсяг випуску виробу, шт.");
					dataGridView25->Rows[4]->Cells[0]->Value = ("2 Основні фонди");
					dataGridView25->Rows[5]->Cells[0]->Value = ("2.1 Кількість обладнання, шт. ");
					dataGridView25->Rows[6]->Cells[0]->Value = ("2.2 Середній коефіцієнт завантаження обладнання");
					dataGridView25->Rows[7]->Cells[0]->Value = ("2.3 Початкова вартість обладнання, грн.");
					dataGridView25->Rows[8]->Cells[0]->Value = ("2.4 Середня вартість одиниці обладнання, грн.");
					dataGridView25->Rows[9]->Cells[0]->Value = ("2.5 Число робочих змін обладнання");
					dataGridView25->Rows[10]->Cells[0]->Value = ("2.6 Загальна встановлена потужність, кВт ");
					dataGridView25->Rows[11]->Cells[0]->Value = ("2.7 Середня потужність одного верстату, кВт");
					dataGridView25->Rows[12]->Cells[0]->Value = ("2.8 Випуск продукції на одиницю обладнання, нормо-годин");
					dataGridView25->Rows[13]->Cells[0]->Value = ("2.9  Випуск продукції на одиницю обладнання, грн.");
					dataGridView25->Rows[14]->Cells[0]->Value = ("2.10 Фондовіддача обладнання");
					dataGridView25->Rows[15]->Cells[0]->Value = ("2.11 Виробнича площа дільниці, м2");
					dataGridView25->Rows[16]->Cells[0]->Value = ("2.12 Випуск продукції на 1 м2 площі, грн.");
					dataGridView25->Rows[17]->Cells[0]->Value = ("2.13 Вартість основних фондів на дільниці (Вділ – вартість дільниці,)");
					dataGridView25->Rows[18]->Cells[0]->Value = ("2.14 Фондовіддача основних фондів, грн/грн");
					dataGridView25->Rows[19]->Cells[0]->Value = ("2.15 Фондомісткість основних фондів,  грн/грн");
					dataGridView25->Rows[20]->Cells[0]->Value = ("3 Оплата праці");
					dataGridView25->Rows[21]->Cells[0]->Value = ("3.1 Кількість працюючих всього");
					dataGridView25->Rows[22]->Cells[0]->Value = ("У тому числі:");
					dataGridView25->Rows[23]->Cells[0]->Value = ("- основних виробничих робітників");
					dataGridView25->Rows[24]->Cells[0]->Value = ("- допоміжних робітників");
					dataGridView25->Rows[25]->Cells[0]->Value = ("- ІТР");
					dataGridView25->Rows[26]->Cells[0]->Value = ("3.2 Річний фонд оплати всього, грн.");
					dataGridView25->Rows[27]->Cells[0]->Value = ("в тому числі:");
					dataGridView25->Rows[28]->Cells[0]->Value = ("- основних робітників");
					dataGridView25->Rows[29]->Cells[0]->Value = ("- допоміжних робітників");
					dataGridView25->Rows[30]->Cells[0]->Value = ("- ІТР");
					dataGridView25->Rows[31]->Cells[0]->Value = ("3.3 Середньомісячна оплата праці, грн.");
					dataGridView25->Rows[32]->Cells[0]->Value = ("у тому числі:");
					dataGridView25->Rows[33]->Cells[0]->Value = ("- основних робітників");
					dataGridView25->Rows[34]->Cells[0]->Value = ("- допоміжних робітників");
					dataGridView25->Rows[35]->Cells[0]->Value = ("- ІТР");
					dataGridView25->Rows[36]->Cells[0]->Value = ("4 Собівартість продукції");
					dataGridView25->Rows[37]->Cells[0]->Value = ("4.1  Цехова собівартість виробу , грн.");
					dataGridView25->Rows[38]->Cells[0]->Value = ("4.2  Прибуток виробу , грн.");
					dataGridView25->Rows[39]->Cells[0]->Value = ("4.3 Ціна реалізації виробу, грн");
					dataGridView25->Rows[40]->Cells[0]->Value = ("4.4 Відпускна ціна виробу, грн ");
					dataGridView25->Rows[41]->Cells[0]->Value = ("5 Економічний річний ефект, грн");


		 }
private: System::Void label78_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button47_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 chart1->Series["Коефіцієнт довантаження"]->Points->Clear();
			 chart1->Series["Середній коефіцієнт завантаження обладнання"]->Points->Clear();
			 this->tabControl2->SelectedTab=tabPage17;
			 this->textBox52->Text=Convert::ToString (serkoefobl);
			 if(Kzo<1)
					label79->Text="масове виробництво (0,65...0,75)";

				else
				if(Kzo<10&&Kzo>1)
					label79->Text="крупносерійне виробництво (0,65...0,75)";
				else 
				if(Kzo>10&&Kzo<20)
					label79->Text="серійне виробництво (0,75...0,8)";
				else
					if(Kzo>20&&Kzo<40)
						label79->Text="дрібносерійне виробництво (0,8...0,9)";
					else
						if(Kzo>40)
							label79->Text="одиничне виробництво";
			
			 
			 //MessageBox::Show(xy+"");
			 int i;
			 for ( i = 0; i<=kiloperation; i++){
				 Virozprin=Convert::ToDouble(dataGridView1->Rows[i]->Cells[9]->FormattedValue->ToString());
		
		modelverst=Convert::ToString(dataGridView1->Rows[i]->Cells[1]->FormattedValue->ToString());
		chart1->Series["Коефіцієнт довантаження"]->Points->AddXY(modelverst,Virozprin);
		chart1->Series["Середній коефіцієнт завантаження обладнання"]->Points->AddXY("Середній коефійієнт обладнання",serkoefobl);
		//modelverst=Convert::ToString(dataGridView1->Rows[i]->Cells[1]->FormattedValue->ToString());
			 
				 
		//Kzi=Convert::ToDouble(dataGridView1->Rows[j]->Cells[11]->FormattedValue->ToString());
		Vinp=Convert::ToDouble(dataGridView1->Rows[i]->Cells[10]->FormattedValue->ToString());


		dataGridView12->Rows->Add();
		dataGridView12->Rows[i]->Cells[0]->Value = Convert::ToString(modelverst);
		dataGridView12->Rows[i]->Cells[1]->Value = Convert::ToString(Vinp);
	dataGridView12->Rows[i]->Cells[2]->Value = Convert::ToString(Virozprin);
			 }

		 }
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl4->SelectedTab=tabPage16;
			 int i;
			 for ( i = 0; i<=kiloperation; i++){
				 dataGridView7->Rows->Add();
	operation = Convert::ToString(dataGridView10->Rows[i]->Cells[0]->FormattedValue->ToString());
    dataGridView7->Rows[i]->Cells[0]->Value = Convert::ToString(operation);

	rozradrob =Convert::ToDouble(dataGridView5->Rows[i]->Cells[1]->FormattedValue->ToString());
				 dataGridView7->Rows[i]->Cells[1]->Value = (rozradrob);


	tsht = Convert::ToDouble(dataGridView10->Rows[i]->Cells[2]->FormattedValue->ToString());
    dataGridView7->Rows[i]->Cells[2]->Value = Convert::ToString(tsht);

	godtarifstavka = Convert::ToDouble(dataGridView6->Rows[i]->Cells[3]->FormattedValue->ToString());
    dataGridView7->Rows[i]->Cells[3]->Value = Convert::ToString(godtarifstavka);
	dataGridView7->Rows[i]->Cells[5]->Value = Convert::ToString(Nzap);


			 }
		 }
/*private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }*/
private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i;
			 for ( i = 0; i<=kiloperation; i++){
		
	tsht = Convert::ToDouble(dataGridView7->Rows[i]->Cells[2]->FormattedValue->ToString());
    godtarifstavka = Convert::ToDouble(dataGridView7->Rows[i]->Cells[3]->FormattedValue->ToString());
	rozcinka=(godtarifstavka*tsht)/60;
	rozcinka = ((int)(rozcinka*100 + (rozcinka >= 0 ? 0.5 : -0.5))/100.0);
	dataGridView7->Rows[i]->Cells[4]->Value = Convert::ToString(rozcinka);
	richniyfondzp=Nzap*rozcinka;
	richniyfondzp = ((int)(richniyfondzp*100 + (richniyfondzp >= 0 ? 0.5 : -0.5))/100.0);
	dataGridView7->Rows[i]->Cells[6]->Value = Convert::ToString(richniyfondzp);
	zpprroz=zpprroz+richniyfondzp;
	zpprroz = ((int)(zpprroz*100 + (zpprroz >= 0 ? 0.5 : -0.5))/100.0);

			 }
			 button48->Visible=true;
			 button62->Visible=true;

		 }
private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {

			 
		 }
private: System::Void button48_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView11->Rows[0]->Cells[2]->Value = Convert::ToString(zpprroz);
			 dodzpvidsotok=Convert::ToDouble(textBox54->Text);
			 dodzpvidsotok=dodzpvidsotok/100;

			 zpvidsotok=Convert::ToDouble(textBox55->Text);
			 zpvidsotok=zpvidsotok/100;

			 esvvidsotok=Convert::ToDouble(textBox56->Text);
			 esvvidsotok=esvvidsotok/100;
			 
			 int i,j;
			 int f;
			 for ( f = 0; f<=kiloperation; f++){
			 

//vitratuTMV1 = Convert::ToDouble(dataGridView4->Rows[f]->Cells[2]->FormattedValue->ToString());
				 sumpiple=Convert::ToDouble(dataGridView6->Rows[f]->Cells[1]->FormattedValue->ToString());
					
				 tariftest=Convert::ToDouble(dataGridView6->Rows[f]->Cells[2]->FormattedValue->ToString());

				 summapiple=sumpiple*tariftest;
				 sumpipletest=sumpipletest+summapiple;

			 
				 sumchelovek=sumchelovek+sumpiple;
				 Chosnrob=Chosnrob+summapiple;
				 
			 }
			 sumpipletest=sumpipletest/sumchelovek;
			 sumpipletest = ((int)(sumpipletest*100 + (sumpipletest >= 0 ? 0.5 : -0.5))/100.0);
			 this->textBox57->Text=Convert::ToString (sumpipletest);
			 
			 
			 int xy;
			 min=100000;
			// min=A[0];
			 max=A[0];
			 
			 for (f=0;f<=kiloperation;f++){
				 //x=Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->FormattedValue->ToString());
				 A[f]=Convert::ToDouble(dataGridView6->Rows[f]->Cells[2]->FormattedValue->ToString());
				 //prin=Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->FormattedValue->ToString());
				 //kz=Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->FormattedValue->ToString());
				 //sum=kz*prin;
				 //sum1=sum1+sum;
				 //y=y+x;
			 }
			 
			 for (f = 0; f <=kiloperation; f++)
	{
		if(A[f]>0 && A[f]<min){
			min=A[f]; indexmin=f;}
		
		if(max < A[f]) {max = A[f]; indexmax=f;}
			   
		 }	 
			znach=sumpipletest-min;
			
			
			maxpipl=Convert::ToDouble(dataGridView6->Rows[indexmax]->Cells[3]->FormattedValue->ToString());
			minpipl=Convert::ToDouble(dataGridView6->Rows[indexmin]->Cells[3]->FormattedValue->ToString());
			tstser=(maxpipl-minpipl)*znach+minpipl;
			tstser = ((int)(tstser*100 + (tstser >= 0 ? 0.5 : -0.5))/100.0);
			//tstser = ((int)(tstser*100 + (tstser >= 0 ? 0.5 : -0.5))/100.0);
			this->textBox53->Text=Convert::ToString (tstser);
			//MessageBox::Show(maxpipl+"");
			//MessageBox::Show(minpipl+"");


			 
            zpprdov=tstser*sum3;
			zpprdov = ((int)(zpprdov*100 + (zpprdov >= 0 ? 0.5 : -0.5))/100.0);
			dataGridView11->Rows[1]->Cells[2]->Value = Convert::ToString(zpprdov);

			zppr=zpprdov+zpprroz;
			dataGridView11->Rows[2]->Cells[2]->Value = Convert::ToString(zppr);

			dopl=zppr*dodzpvidsotok;
			dopl = ((int)(dopl*100 + (dopl >= 0 ? 0.5 : -0.5))/100.0);
			dataGridView11->Rows[3]->Cells[2]->Value = Convert::ToString(dopl);

			zposn=zppr+dopl;
			dataGridView11->Rows[4]->Cells[2]->Value = Convert::ToString(zposn);

			zpdod=zposn*zpvidsotok;
			zpdod = ((int)(zpdod*100 + (zpdod >= 0 ? 0.5 : -0.5))/100.0);
			dataGridView11->Rows[5]->Cells[2]->Value = Convert::ToString(zpdod);

			zprechosn=zposn+zpdod;
			dataGridView11->Rows[6]->Cells[2]->Value = Convert::ToString(zprechosn);

			esv=zprechosn*esvvidsotok;
			esv = ((int)(esv*100 + (esv >= 0 ? 0.5 : -0.5))/100.0);
			dataGridView11->Rows[7]->Cells[2]->Value = Convert::ToString(esv);


			serzaponerob=zprechosn/(sum22*12);
			serzaponerob = ((int)(serzaponerob*100 + (serzaponerob >= 0 ? 0.5 : -0.5))/100.0);
			this->textBox58->Text=Convert::ToString (serzaponerob);

		 }









private: System::Void button49_Click(System::Object^  sender, System::EventArgs^  e) {
			 

		 }
private: System::Void button44_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 dodzpvidsotok2=Convert::ToDouble(textBox61->Text);
			 dodzpvidsotok2=dodzpvidsotok2/100;

			 zpvidsotok2=Convert::ToDouble(textBox60->Text);
			 zpvidsotok2=zpvidsotok2/100;

             esvvidsotok2=Convert::ToDouble(textBox59->Text);
			 esvvidsotok2=esvvidsotok2/100;
			  int i;
			  for (i=0; i<=kilchol; i++)
			  {
				  

				  kilchol2=Convert::ToDouble(dataGridView8->Rows[i]->Cells[1]->FormattedValue->ToString());
			

				

				  stavka=Convert::ToDouble(dataGridView8->Rows[i]->Cells[3]->FormattedValue->ToString());
				  

				  zppr2=Fef*stavka;
				  zppr2 = ((int)(zppr2*100 + (zppr2 >= 0 ? 0.5 : -0.5))/100.0);
				  dataGridView13->Rows[i]->Cells[5]->Value = Convert::ToString(zppr2);

				  dopl2=zppr2*dodzpvidsotok2;
				  dopl2 = ((int)(dopl2*100 + (dopl2 >= 0 ? 0.5 : -0.5))/100.0);
				  dataGridView13->Rows[i]->Cells[6]->Value = Convert::ToString(dopl2);

				  zposn2=zppr2+dopl2;
				  zposn2 = ((int)(zposn2*100 + (zposn2 >= 0 ? 0.5 : -0.5))/100.0);
				  dataGridView13->Rows[i]->Cells[7]->Value = Convert::ToString(zposn2);

				  zpdod2= zposn2*zpvidsotok2;
				  zpdod2 = ((int)(zpdod2*100 + (zpdod2 >= 0 ? 0.5 : -0.5))/100.0);
				  dataGridView13->Rows[i]->Cells[8]->Value = Convert::ToString(zpdod2);

				  zprichdop=zposn2+zpdod2;
				  zprichdop = ((int)(zprichdop*100 + (zprichdop >= 0 ? 0.5 : -0.5))/100.0);
				  dataGridView13->Rows[i]->Cells[9]->Value = Convert::ToString(zprichdop);

				  esv2=zprichdop*esvvidsotok2;
				  esv2 = ((int)(esv2*100 + (esv2 >= 0 ? 0.5 : -0.5))/100.0);
				  dataGridView13->Rows[i]->Cells[10]->Value = Convert::ToString(esv2);

				  pic28=pic28+zppr2;
				  pic29=pic29+dopl2;
				  pic30=pic30+zposn2;
				  pic31=pic31+zpdod2;
				  pic32=pic32+zprichdop;
				  pic33=pic33+esv2;
				  //для вспомогательной таблицы



				  dataGridView26->Rows->Add();
				  profesion2=Convert::ToString(dataGridView13->Rows[i]->Cells[0]->FormattedValue->ToString());
				  dataGridView26->Rows[i]->Cells[0]->Value = Convert::ToString(profesion2);

				  

				  zprichdop=Convert::ToDouble(dataGridView13->Rows[i]->Cells[1]->FormattedValue->ToString());
				  dataGridView26->Rows[i]->Cells[1]->Value = Convert::ToString(zprichdop);

				  esv2=Convert::ToDouble(dataGridView13->Rows[i]->Cells[2]->FormattedValue->ToString());
				  dataGridView26->Rows[i]->Cells[2]->Value = Convert::ToString(esv2);

				  





			  }
			  sumdop1=pic28;
			  sumdop2=pic29;
			  sumdop3=pic30;
			  sumdop4=pic31;
			  sumdop5=pic32;
			  sumdop6=pic33;

			  dataGridView13->Rows[kilchol+1]->Cells[0]->Value = "Всього";
			 dataGridView13->Rows[kilchol+1]->Cells[5]->Value = pic28;
			 dataGridView13->Rows[kilchol+1]->Cells[6]->Value = pic29;
			 dataGridView13->Rows[kilchol+1]->Cells[7]->Value = pic30;
			 dataGridView13->Rows[kilchol+1]->Cells[8]->Value = pic31;
			 dataGridView13->Rows[kilchol+1]->Cells[9]->Value = pic32;
			 dataGridView13->Rows[kilchol+1]->Cells[10]->Value = pic33;
			 dataGridView13->Rows[kilchol+1]->Cells[1]->Value = sum23;

			serzpdop= (sum23*12);
			serzpdop= sumdop5/serzpdop;
			serzpdop = ((int)(serzpdop*100 + (serzpdop >= 0 ? 0.5 : -0.5))/100.0);
			 this->textBox50->Text=Convert::ToString (serzpdop);
			 pic28=0;
			 pic29=0;
			 pic30=0;
			 pic31=0;
			 pic32=0;
			 pic33=0;

			 button49->Visible=true;
		 }
private: System::Void button49_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 dodzpvidsotok3=Convert::ToDouble(textBox64->Text);
			 dodzpvidsotok3=dodzpvidsotok3/100;

			 zpvidsotok3=Convert::ToDouble(textBox63->Text);
			 zpvidsotok3=zpvidsotok3/100;

             esvvidsotok3=Convert::ToDouble(textBox62->Text);
			 esvvidsotok3=esvvidsotok3/100;
			  int i;
			  for (i=0; i<=formform; i++)
			  {
				  //profesion3=Convert::ToString(dataGridView9->Rows[i]->Cells[0]->FormattedValue->ToString());
				  

				  kilchol3=Convert::ToDouble(dataGridView9->Rows[i]->Cells[1]->FormattedValue->ToString());
				  

				  oklad=Convert::ToDouble(dataGridView9->Rows[i]->Cells[2]->FormattedValue->ToString());
				  

				  fondprimzp=kilchol3*oklad*12;
				  fondprimzp = ((int)(fondprimzp*100 + (fondprimzp >= 0 ? 0.5 : -0.5))/100.0);
				  dataGridView14->Rows[i]->Cells[3]->Value = Convert::ToString(fondprimzp);

				  dopl3=fondprimzp*dodzpvidsotok3;
				  dopl3 = ((int)(dopl3*100 + (dopl3 >= 0 ? 0.5 : -0.5))/100.0);
				  dataGridView14->Rows[i]->Cells[4]->Value = Convert::ToString(dopl3);

				  fondosnzp=fondprimzp+dopl3;
				  fondosnzp = ((int)(fondosnzp*100 + (fondosnzp >= 0 ? 0.5 : -0.5))/100.0);
				  dataGridView14->Rows[i]->Cells[5]->Value = Convert::ToString(fondosnzp);

				  zpdod3=fondosnzp*zpvidsotok3;
				  zpdod3 = ((int)(zpdod3*100 + (zpdod3 >= 0 ? 0.5 : -0.5))/100.0);
				  dataGridView14->Rows[i]->Cells[6]->Value = Convert::ToString(zpdod3);

				  richniyfondzp3=fondosnzp+zpdod3;
				  richniyfondzp3 = ((int)(richniyfondzp3*100 + (richniyfondzp3 >= 0 ? 0.5 : -0.5))/100.0);
				  dataGridView14->Rows[i]->Cells[7]->Value = Convert::ToString(richniyfondzp3);

				  esv3=richniyfondzp3*esvvidsotok3;
				  esv3 = ((int)(esv3*100 + (esv3 >= 0 ? 0.5 : -0.5))/100.0);
				  dataGridView14->Rows[i]->Cells[8]->Value = Convert::ToString(esv3);

				  pic34=pic34+oklad;
					  pic35=pic35+fondprimzp;
					  pic36=pic36+dopl3;
					  pic37=pic37+fondosnzp;
					  pic38=pic38+zpdod3;
					  pic39=pic39+richniyfondzp3;
					  pic40=pic40+esv3;
			  }
			  sumin1=pic34;
			  sumin2=pic35;
			  sumin3=pic36;
			  sumin4=pic37;
			  sumin5=pic38;
			  sumin6=pic39;
			  sumin7=pic40;
			  dataGridView14->Rows[formform+1]->Cells[0]->Value = "Всього";
			 dataGridView14->Rows[formform+1]->Cells[2]->Value = pic34;
			 dataGridView14->Rows[formform+1]->Cells[3]->Value = pic35;
			 dataGridView14->Rows[formform+1]->Cells[4]->Value = pic36;
			 dataGridView14->Rows[formform+1]->Cells[5]->Value = pic37;
			 dataGridView14->Rows[formform+1]->Cells[6]->Value = pic38;
			 dataGridView14->Rows[formform+1]->Cells[7]->Value = pic39;
			 dataGridView14->Rows[formform+1]->Cells[8]->Value = pic40;

			 dataGridView14->Rows[formform+1]->Cells[1]->Value = sum24;

			serzpitr= (sum24*12);
			serzpitr= sumin6/serzpitr;
			 serzpitr = ((int)(serzpitr*100 + (serzpitr >= 0 ? 0.5 : -0.5))/100.0);
			 this->textBox106->Text=Convert::ToString (serzpitr);

			 pic34=0;
			 pic35=0;
			 pic36=0;
			 pic37=0;
			 pic38=0;
			 pic39=0;
			 pic40=0;
			 button46->Visible=true;
		 }
private: System::Void button50_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView15->Rows[0]->Cells[1]->Value = sum22;
			 dataGridView15->Rows[1]->Cells[1]->Value = sum23;
			 dataGridView15->Rows[2]->Cells[1]->Value = sum24;

			 dataGridView15->Rows[0]->Cells[2]->Value = zppr;
			 dataGridView15->Rows[1]->Cells[2]->Value = sumdop1;
			 dataGridView15->Rows[2]->Cells[2]->Value = sumin2;

			 dataGridView15->Rows[0]->Cells[3]->Value = dopl;
			 dataGridView15->Rows[1]->Cells[3]->Value = sumdop2;
			 dataGridView15->Rows[2]->Cells[3]->Value = sumin3;

			 dataGridView15->Rows[0]->Cells[4]->Value = zposn;
			 dataGridView15->Rows[1]->Cells[4]->Value = sumdop3;
			 dataGridView15->Rows[2]->Cells[4]->Value = sumin4;

			 dataGridView15->Rows[0]->Cells[5]->Value = zpdod;
			 dataGridView15->Rows[1]->Cells[5]->Value = sumdop4;
			 dataGridView15->Rows[2]->Cells[5]->Value = sumin5;

			 dataGridView15->Rows[0]->Cells[6]->Value = zprechosn;
			 dataGridView15->Rows[1]->Cells[6]->Value = sumdop5;
			 dataGridView15->Rows[2]->Cells[6]->Value = sumin6;

			 dataGridView15->Rows[0]->Cells[7]->Value = esv;
			 dataGridView15->Rows[1]->Cells[7]->Value = sumdop6;
			 dataGridView15->Rows[2]->Cells[7]->Value = sumin7;

			 sumzag1=sum22+sum23+sum24;
			 sumzag2=zppr+sumdop1+sumin2;
			 sumzag3=dopl+sumdop2+sumin3;
			 sumzag4=zposn+sumdop3+sumin4;
			 sumzag5=zpdod+sumdop4+sumin5;
			 sumzag6=zprechosn+sumdop5+sumin6;
			 sumzag7=esv+sumdop6+sumin7;

			 dataGridView15->Rows[3]->Cells[1]->Value = sumzag1;
			 dataGridView15->Rows[3]->Cells[2]->Value = sumzag2;
			 dataGridView15->Rows[3]->Cells[3]->Value = sumzag3;
			 dataGridView15->Rows[3]->Cells[4]->Value = sumzag4;
			 dataGridView15->Rows[3]->Cells[5]->Value = sumzag5;
			 dataGridView15->Rows[3]->Cells[6]->Value = sumzag6;
			 dataGridView15->Rows[3]->Cells[7]->Value = sumzag7;
			 button51->Visible=true;
			 
		 }
private: System::Void button51_Click(System::Object^  sender, System::EventArgs^  e) { 
			 dataGridView17->Rows[0]->Cells[1]->Value = sum14;
			 dataGridView17->Rows[2]->Cells[1]->Value = sum19;

			 dataGridView17->Rows[3]->Cells[1]->Value = sum14+sum19;
			 dataGridView17->Rows[4]->Cells[1]->Value = Vdopi;
			 dataGridView17->Rows[5]->Cells[1]->Value = Bbud;
			 dataGridView17->Rows[6]->Cells[1]->Value = Vdopi+Bbud;
			 dataGridView17->Rows[7]->Cells[1]->Value = sum14+sum19+Vdopi+Bbud;


			 Normaamort1=Convert::ToDouble(dataGridView17->Rows[0]->Cells[2]->FormattedValue->ToString());
			 Normaamort2=Convert::ToDouble(dataGridView17->Rows[2]->Cells[2]->FormattedValue->ToString());
			 Normaamort3=Convert::ToDouble(dataGridView17->Rows[4]->Cells[2]->FormattedValue->ToString());
			 Normaamort4=Convert::ToDouble(dataGridView17->Rows[5]->Cells[2]->FormattedValue->ToString());

			 Normaamort1=Normaamort1/100;
			 Normaamort2=Normaamort2/100;
			 Normaamort3=Normaamort3/100;
			 Normaamort4=Normaamort4/100;

			 richsum1=sum14*Normaamort1;
			 richsum1 = ((int)(richsum1*100 + (richsum1 >= 0 ? 0.5 : -0.5))/100.0);

			 richsum2=sum19*Normaamort2;
			 richsum2 = ((int)(richsum2*100 + (richsum2 >= 0 ? 0.5 : -0.5))/100.0);

			 richsum3=Vdopi*Normaamort3;
			 richsum3 = ((int)(richsum3*100 + (richsum3 >= 0 ? 0.5 : -0.5))/100.0);

			 richsum4=Bbud*Normaamort4;
			 richsum4 = ((int)(richsum4*100 + (richsum4 >= 0 ? 0.5 : -0.5))/100.0);

			 richsumsum1=richsum1+richsum2;
			 richsumsum2=richsum3+richsum4;
			 richsumsum3=richsumsum1+richsumsum2;

			 dataGridView17->Rows[0]->Cells[3]->Value = richsum1;
			 dataGridView17->Rows[2]->Cells[3]->Value = richsum2;
			 dataGridView17->Rows[3]->Cells[3]->Value = richsumsum1;
			 dataGridView17->Rows[4]->Cells[3]->Value = richsum3;

			 dataGridView17->Rows[5]->Cells[3]->Value = richsum4;
			 dataGridView17->Rows[6]->Cells[3]->Value = richsumsum2;

			 dataGridView17->Rows[7]->Cells[3]->Value = richsumsum3;
			 button65->Visible=true;
		 }


private: System::Void button52_Click(System::Object^  sender, System::EventArgs^  e) {
			 int rows = dataGridView16->Rows->Count;
				 x=rows-2;
 /*int i,j;
 
			 int cc = 0;
			 while(cc==0){
				 try{
					 if(dataGridView16->Rows[i]->Cells[2]->Value != "" && cc ==0)
					 {
						 j++;
					 }
				 } 
				 catch (Exception ^e){
					 cc =1; 
				  }
					 
			 i++;
			 
			 }
			 i=0;
			 j--;
			 //MessageBox::Show(j+"");
			 
			  x=j;
			  //f1++;
			  //f1=f1+1;
			  //x+"";
			  x=x-1;
			 x+"";
		
			 */
			  int f;
			 for ( f = 0; f<=x; f++){			 


				 normavitrat=Convert::ToDouble(dataGridView16->Rows[f]->Cells[1]->FormattedValue->ToString());
				 kilkistverst=Convert::ToDouble(dataGridView16->Rows[f]->Cells[2]->FormattedValue->ToString());
				 richsumvitrat=normavitrat*kilkistverst;
				 richsumvitrat = ((int)(richsumvitrat*100 + (richsumvitrat >= 0 ? 0.5 : -0.5))/100.0);
				 
				 dataGridView16->Rows[f]->Cells[3]->Value = Convert::ToString(richsumvitrat);
				 pic41=pic41+kilkistverst;
				 pic42=pic42+richsumvitrat;
			 }
			 sumx1=pic41;
			 sumx2=pic42;
			 dataGridView16->Rows[x+1]->Cells[2]->Value = pic41;
			dataGridView16->Rows[x+1]->Cells[3]->Value = pic42;
			pic41=0;
			pic42=0;
//следующая страница

			
			 
			  
			  

		 }
private: System::Void button53_Click(System::Object^  sender, System::EventArgs^  e) {
int rows = dataGridView18->Rows->Count;
				 f4=rows-2;			  

			/* int i,j;
			 int cc = 0;
			 while(cc==0){
				 try{
					 if(dataGridView18->Rows[i]->Cells[2]->Value != "" && cc ==0)
					 {
						 j++;
					 }
				 } 
				 catch (Exception ^e){
					 cc =1; 
				  }
					 
			 i++;
			 
			 }
			 i=0;
			 j--;
			 //MessageBox::Show(j+"");
			 
			  f4=j;
			  f4--;
			  //f1=f1+1;
			  f4+"";
			 //MessageBox::Show(f2+"");
			 */
			  int f;
			 for ( f = 0; f<=f4; f++){
			 

//vitratuTMV1 = Convert::ToDouble(dataGridView4->Rows[f]->Cells[2]->FormattedValue->ToString());
				 richnormmeh=Convert::ToDouble(dataGridView18->Rows[f]->Cells[1]->FormattedValue->ToString());
				 kilremmeh=Convert::ToDouble(dataGridView18->Rows[f]->Cells[2]->FormattedValue->ToString());
				 richvitratimeh=richnormmeh*kilremmeh;
				 richvitratimeh = ((int)(richvitratimeh*100 + (richvitratimeh >= 0 ? 0.5 : -0.5))/100.0);
				 dataGridView18->Rows[f]->Cells[3]->Value = Convert::ToString(richvitratimeh);

				 

				 pic43=pic43+kilremmeh;
				 pic44=pic44+richvitratimeh;
			 }
			 vsigomeh=pic43;
				 vsigo1meh=pic44;
			 dataGridView18->Rows[f4+1]->Cells[2]->Value = Convert::ToString(vsigomeh);
			 dataGridView18->Rows[f4+1]->Cells[3]->Value = Convert::ToString(vsigo1meh);
				 button54->Visible=true;
				 pic43=0;
				 pic44=0;
		 }
private: System::Void button54_Click(System::Object^  sender, System::EventArgs^  e) {
			 int rows = dataGridView19->Rows->Count;
				 f4=rows-2;
				 /*
			 int i,j;
			 int cc = 0;
			 while(cc==0){
				 try{
					 if(dataGridView19->Rows[i]->Cells[2]->Value != "" && cc ==0)
					 {
						 j++;
					 }
				 } 
				 catch (Exception ^e){
					 cc =1; 
				  }
					 
			 i++;
			 
			 }
			 i=0;
			 j--;
			 //MessageBox::Show(j+"");
			 
			  f4=j;
			  f4--;
			  //f1=f1+1;
			  f4+"";
			 //MessageBox::Show(f2+"");
			  */
			  int f;
			 for ( f = 0; f<=f4; f++){
			 

//vitratuTMV1 = Convert::ToDouble(dataGridView4->Rows[f]->Cells[2]->FormattedValue->ToString());
				 richnormelec=Convert::ToDouble(dataGridView19->Rows[f]->Cells[1]->FormattedValue->ToString());
				 kilremelec=Convert::ToDouble(dataGridView19->Rows[f]->Cells[2]->FormattedValue->ToString());
				 richvitratielec=richnormelec*kilremelec;
				 richvitratielec = ((int)(richvitratielec*100 + (richvitratielec >= 0 ? 0.5 : -0.5))/100.0);
				 dataGridView19->Rows[f]->Cells[3]->Value = Convert::ToString(richvitratielec);

				 pic45=pic45+kilremelec;
				 pic46=pic46+richvitratielec;


				
			 }
			 vsigoelec=pic45;
				 vsigo1elec=pic46;
			 dataGridView19->Rows[f4+1]->Cells[2]->Value = Convert::ToString(vsigoelec);
			 dataGridView19->Rows[f4+1]->Cells[3]->Value = Convert::ToString(vsigo1elec);
			 button55->Visible=true;
			 pic45=0;
			 pic46=0;
		 }
private: System::Void button55_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView20->Rows->Add();
			 dataGridView20->Rows->Add();
			 visotokinstrument=Convert::ToDouble(textBox65->Text);
			 visotokinstrument=visotokinstrument/100;
			 instrument=visotokinstrument*Vdopi;
			 instrument = ((int)(instrument*100 + (instrument >= 0 ? 0.5 : -0.5))/100.0);
			 dataGridView20->Rows[0]->Cells[1]->Value = Convert::ToString(instrument);
			 Bpotoch=vsigo1elec+vsigo1meh+instrument;
			 Bpotoch = ((int)(Bpotoch*100 + (Bpotoch >= 0 ? 0.5 : -0.5))/100.0);
			 dataGridView20->Rows[1]->Cells[1]->Value = Convert::ToString(Bpotoch);
			 button89->Visible=true;


		 }
private: System::Void button56_Click(System::Object^  sender, System::EventArgs^  e) {
			 


		 }
private: System::Void label123_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabPage24_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button57_Click(System::Object^  sender, System::EventArgs^  e) {
			// Kzzzz=Convert::ToDouble(textBox73->Text);
			 Ko=Convert::ToDouble(textBox74->Text);
			 Kt=Convert::ToDouble(textBox78->Text);
			 Kc=Convert::ToDouble(textBox75->Text);
			 Kk=Convert::ToDouble(textBox76->Text);
			 Cec=Convert::ToDouble(textBox77->Text);

			 Wobl=(sum9*Fdo*serkoefobl*Ko)/(Kc*Kk);
			 Wobl = ((int)(Wobl*1 + (Wobl >= 0 ? 0.5 : -0.5))/1.0);
			 //per2=Kc*Kk;
			 //Wobl=per1/per2;
			 //Wobl = ((int)(Wobl*1 + (Wobl >= 0 ? 0.5 : -0.5))/1.0);
			 this->textBox79->Text=Convert::ToString (Wobl);

			 
			 Wtr=(sum16*Fdo*Kt)/(Kc*Kk);
			 
			 Wtr = ((int)(Wtr*1 + (Wtr >= 0 ? 0.5 : -0.5))/1.0);
			 this->textBox80->Text=Convert::ToString (Wtr);

			 sumWobl=Wtr+Wobl;
			 this->textBox73->Text=Convert::ToString (sumWobl);

			 Bee=sumWobl*Cec;
			 Bee = ((int)(Bee*100 + (Bee >= 0 ? 0.5 : -0.5))/100.0);
			 this->textBox81->Text=Convert::ToString (Bee);

			 button64->Visible=true;
			 Beskp;
		 }
private: System::Void button58_Click(System::Object^  sender, System::EventArgs^  e) {
			 vatone=Convert::ToDouble(textBox121->Text);
			  Ko1=Convert::ToDouble(textBox83->Text);
			   W1=Convert::ToDouble(textBox84->Text);
			    Pv1=Convert::ToDouble(textBox85->Text);
				Cvpov=Convert::ToDouble(textBox120->Text);
				n111=(Szag*vatone)/W1;
				n111 = ((int)(n111*1 + (n111 >= 0 ? 0.5 : -0.5))/1.0);
				this->textBox122->Text=Convert::ToString (n111);

				Pv1=Pv1/100;
				Pv1=1-Pv1;
				per5=(Fdo*Ko1*W1*n111*Cec);
				per6=1000*Pv1;
				Beeosv=per5/per6;
				Beeosv = ((int)(Beeosv*100 + (Beeosv >= 0 ? 0.5 : -0.5))/100.0);
				this->textBox108->Text=Convert::ToString (Beeosv);

				 Qv=Convert::ToDouble(textBox87->Text);
				 Qohol=Qv*serkoefobl*Kzm*sum8;
				 Qohol = ((int)(Qohol*1 + (Qohol >= 0 ? 0.5 : -0.5))/1.0);
				 this->textBox109->Text=Convert::ToString (Qohol);

				 Cv=Convert::ToDouble(textBox86->Text);
				 Bvurpot=Qohol*Cv;
				 Bvurpot = ((int)(Bvurpot*100 + (Bvurpot >= 0 ? 0.5 : -0.5))/100.0);
				 this->textBox110->Text=Convert::ToString (Bvurpot);


				 qgosp=Convert::ToDouble(textBox88->Text);
				 per7=qgosp*sumzag1*Frd*Kzm;
				 Qgosp=per7/1000;
				 Qgosp = ((int)(Qgosp*1 + (Qgosp >= 0 ? 0.5 : -0.5))/1.0);
				 this->textBox111->Text=Convert::ToString (Qgosp);

				 Bvutgosp=Qgosp*Cv;
				 Bvutgosp = ((int)(Bvutgosp*100 + (Bvutgosp >= 0 ? 0.5 : -0.5))/100.0);
					 this->textBox112->Text=Convert::ToString (Bvutgosp);

				 koefpov=Convert::ToDouble(textBox89->Text);
				 Qgod=Convert::ToDouble(textBox90->Text);
				 kilprim=Convert::ToDouble(textBox91->Text);
				 Kvuk=Convert::ToDouble(textBox92->Text);
				 Qstpov=koefpov*Qgod*kilprim*Fdo*Kvuk;
				 Qstpov = ((int)(Qstpov*1 + (Qstpov >= 0 ? 0.5 : -0.5))/1.0);
				 this->textBox113->Text=Convert::ToString (Qstpov);

				 Bpov=Qstpov*Cvpov;
				 Bpov = ((int)(Bpov*100 + (Bpov >= 0 ? 0.5 : -0.5))/100.0);
				 this->textBox114->Text=Convert::ToString (Bpov);

				 Binh=Beeosv+Bvurpot+Bvutgosp+Bpov;
				 Binh = ((int)(Binh*100 + (Binh >= 0 ? 0.5 : -0.5))/100.0);
				 this->textBox115->Text=Convert::ToString (Binh);

				 button66->Visible=true;


				 



		 }
private: System::Void button59_Click(System::Object^  sender, System::EventArgs^  e) {
			 Pdop=Convert::ToDouble(textBox95->Text);
			 esvrezerv=Convert::ToDouble(textBox148->Text);
			 //Pdop=Pdop/100;
			 ZPtar=sum1/60*tstser;
			 ZPtar= ((int)(ZPtar*100 + (ZPtar >= 0 ? 0.5 : -0.5))/100.0);

			 //ZPtar=ZPtar*tstser;
			 //ZPtar= ((int)(ZPtar*100 + (ZPtar >= 0 ? 0.5 : -0.5))/100.0);


			 ZPdop=(ZPtar*Pdop)/100;
			 ZPdop= ((int)(ZPdop*100 + (ZPdop >= 0 ? 0.5 : -0.5))/100.0);


			 esvform=((ZPtar+ZPdop)*esvrezerv)/100;
			 esvform= ((int)(esvform*100 + (esvform >= 0 ? 0.5 : -0.5))/100.0);

			 Hvup=(ZPtar*Pneprv)/100;
			 Hvup= ((int)(Hvup*100 + (Hvup >= 0 ? 0.5 : -0.5))/100.0);

			 Cceh=vartistmaterialzvidhod+ZPtar+ZPdop+esvform+Hvup;
			 Cceh= ((int)(Cceh*100 + (Cceh >= 0 ? 0.5 : -0.5))/100.0);

			 this->textBox135->Text=Convert::ToString (Cceh);
			 this->textBox136->Text=Convert::ToString (ZPtar);
			 this->textBox137->Text=Convert::ToString (ZPdop);
			 this->textBox138->Text=Convert::ToString (esvform);
			 this->textBox139->Text=Convert::ToString (Hvup);

			 dataGridView24->Rows[0]->Cells[1]->Value = Convert::ToString(vartistmaterialzvidhod);
			 dataGridView24->Rows[1]->Cells[1]->Value = Convert::ToString(ZPtar);
			 dataGridView24->Rows[2]->Cells[1]->Value = Convert::ToString(ZPdop);
			 dataGridView24->Rows[3]->Cells[1]->Value = Convert::ToString(esvform);
			 dataGridView24->Rows[4]->Cells[1]->Value = Convert::ToString(Hvup);
			 dataGridView24->Rows[5]->Cells[1]->Value = Convert::ToString(Cceh);


			 Nvip1=vartistmaterialzvidhod*Nvip;
			 Nvip2=ZPtar*Nvip;
			 Nvip3=ZPdop*Nvip;
			 Nvip4=esvform*Nvip;
			 Nvip5=Hvup*Nvip;
			 Nvip6=Nvip1+Nvip2+Nvip3+Nvip4+Nvip5;


			 dataGridView24->Rows[0]->Cells[2]->Value = Convert::ToString(Nvip1);
			 dataGridView24->Rows[1]->Cells[2]->Value = Convert::ToString(Nvip2);
			 dataGridView24->Rows[2]->Cells[2]->Value = Convert::ToString(Nvip3);
			 dataGridView24->Rows[3]->Cells[2]->Value = Convert::ToString(Nvip4);
			 dataGridView24->Rows[4]->Cells[2]->Value = Convert::ToString(Nvip5);
			 dataGridView24->Rows[5]->Cells[2]->Value = Convert::ToString(Nvip6);




			 Pform=Convert::ToDouble(textBox96->Text);
			 Pform=Pform/100;
			 pdv=Convert::ToDouble(textBox97->Text);
			 pdv=pdv/100;

			 Pform1=Cceh*Pform;
			 Pform1= ((int)(Pform1*100 + (Pform1 >= 0 ? 0.5 : -0.5))/100.0);
			 this->textBox142->Text=Convert::ToString (Pform1);
			 
			 Cpn=Cceh+Pform1;
			 Cpn= ((int)(Cpn*100 + (Cpn >= 0 ? 0.5 : -0.5))/100.0);
			 this->textBox143->Text=Convert::ToString (Cpn);

			 sumpdv=Cpn*pdv;
			 sumpdv= ((int)(sumpdv*100 + (sumpdv >= 0 ? 0.5 : -0.5))/100.0);
			 this->textBox141->Text=Convert::ToString (sumpdv);

			 Cvidc=Cpn+sumpdv;
			 Cvidc= ((int)(Cvidc*100 + (Cvidc >= 0 ? 0.5 : -0.5))/100.0);
			 this->textBox140->Text=Convert::ToString (Cvidc);


			 button12->BackColor = Color::Blue;








		 }
private: System::Void button60_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 this->tabControl1->SelectedTab=tabPage3;


		 }
private: System::Void button61_Click(System::Object^  sender, System::EventArgs^  e) {
			 Eymrich1=Convert::ToDouble(textBox98->Text);


			 C2=(Cceh*Eymrich1)/100;
			 C2= ((int)(C2*100 + (C2 >= 0 ? 0.5 : -0.5))/100.0);
			 Eymrich=C2*Nvip;
			 Eymrich= ((int)(Eymrich*100 + (Eymrich >= 0 ? 0.5 : -0.5))/100.0);

             En=Convert::ToDouble(textBox99->Text);
			 K1=Convert::ToDouble(textBox100->Text);
			 K2=Convert::ToDouble(textBox101->Text);

			 

			 Erich2=(K2-K1)/Nvip;
			 Erich2= ((int)(Erich2*100 + (Erich2 >= 0 ? 0.5 : -0.5))/100.0);

			 x2=Erich2*En;
			 x2= ((int)(x2*100 + (x2 >= 0 ? 0.5 : -0.5))/100.0);

			 Erich1=C2-x2;
			 Erich1= ((int)(Erich1*100 + (Erich1 >= 0 ? 0.5 : -0.5))/100.0);

			 Erich=Erich1*Nvip;
			 Erich= ((int)(Erich*100 + (Erich >= 0 ? 0.5 : -0.5))/100.0);

			 Tok=(K2-K1)/Erich;
			 Tok= ((int)(Tok*10 + (Tok >= 0 ? 0.5 : -0.5))/10.0);
			 manth=Tok*12;


			 ///////////////////////////////////////
			 num10=zprechosn/(sum22*12);
			 num10= ((int)(num10*100 + (num10 >= 0 ? 0.5 : -0.5))/100.0);

			 num11=sumdop5/(sum23*12);
			 num11= ((int)(num11*100 + (num11 >= 0 ? 0.5 : -0.5))/100.0);

			 num12=sumin6/(sum24*12);
			 num12= ((int)(num12*100 + (num12 >= 0 ? 0.5 : -0.5))/100.0);

			 num1=sum14/sum8;
			 num1= ((int)(num1*100 + (num1 >= 0 ? 0.5 : -0.5))/100.0);

			 num2=sum4/sum8;
			 num2= ((int)(num2*100 + (num2 >= 0 ? 0.5 : -0.5))/100.0);

			 num3=Nvip6/sum8;
			 num3= ((int)(num3*100 + (num3 >= 0 ? 0.5 : -0.5))/100.0);

			 num4=Nvip6/sum14;
			 num4= ((int)(num4*100 + (num4 >= 0 ? 0.5 : -0.5))/100.0);

			 num5=Nvip6/Szag;
			 num5= ((int)(num5*100 + (num5 >= 0 ? 0.5 : -0.5))/100.0);

			 num6=sum14+Bbud;
			 num6= ((int)(num6*100 + (num6 >= 0 ? 0.5 : -0.5))/100.0);

			 num7=Nvip6/num6;
			 num7= ((int)(num7*100 + (num7 >= 0 ? 0.5 : -0.5))/100.0);

			 num8=num6/Nvip6;
			 num8= ((int)(num8*100 + (num8 >= 0 ? 0.5 : -0.5))/100.0);

			 this->textBox144->Text=Convert::ToString (Eymrich);
			 this->textBox145->Text=Convert::ToString (Erich);
			 this->textBox146->Text=Convert::ToString (Tok);
			 this->textBox147->Text=Convert::ToString (manth);
			 
			 

			 //технико економпаказатели
			 dataGridView25->Rows[1]->Cells[1]->Value = Convert::ToString(sum4);
			 dataGridView25->Rows[2]->Cells[1]->Value = Convert::ToString(Nvip6);
			 dataGridView25->Rows[3]->Cells[1]->Value = Convert::ToString(Nvip);

			 dataGridView25->Rows[5]->Cells[1]->Value = Convert::ToString(sum8);
			 dataGridView25->Rows[6]->Cells[1]->Value = Convert::ToString(serkoefobl);
			 dataGridView25->Rows[7]->Cells[1]->Value = Convert::ToString(sum14);
			 dataGridView25->Rows[8]->Cells[1]->Value = Convert::ToString(num1);
			 dataGridView25->Rows[9]->Cells[1]->Value = Convert::ToString(Kzm);
			 dataGridView25->Rows[10]->Cells[1]->Value = Convert::ToString(sum9);
			 dataGridView25->Rows[11]->Cells[1]->Value = Convert::ToString(Pserobl);
			 dataGridView25->Rows[12]->Cells[1]->Value = Convert::ToString(num2);
			 dataGridView25->Rows[13]->Cells[1]->Value = Convert::ToString(num3);
			 dataGridView25->Rows[14]->Cells[1]->Value = Convert::ToString(num4);
			 dataGridView25->Rows[15]->Cells[1]->Value = Convert::ToString(Szag);


			 dataGridView25->Rows[16]->Cells[1]->Value = Convert::ToString(num5);
			 dataGridView25->Rows[17]->Cells[1]->Value = Convert::ToString(num6);
			 dataGridView25->Rows[18]->Cells[1]->Value = Convert::ToString(num7);
			 dataGridView25->Rows[19]->Cells[1]->Value = Convert::ToString(num8);
			 dataGridView25->Rows[21]->Cells[1]->Value = Convert::ToString(sumzag1);
			 dataGridView25->Rows[23]->Cells[1]->Value = Convert::ToString(sum22);
			 dataGridView25->Rows[24]->Cells[1]->Value = Convert::ToString(sum23);
			 dataGridView25->Rows[25]->Cells[1]->Value = Convert::ToString(sum24);
			 dataGridView25->Rows[26]->Cells[1]->Value = Convert::ToString(sumzag6);
			 dataGridView25->Rows[28]->Cells[1]->Value = Convert::ToString(zprechosn);
			 dataGridView25->Rows[29]->Cells[1]->Value = Convert::ToString(sumdop5);
			 dataGridView25->Rows[30]->Cells[1]->Value = Convert::ToString(sumin6);
			 dataGridView25->Rows[33]->Cells[1]->Value = Convert::ToString(num10);
			 dataGridView25->Rows[34]->Cells[1]->Value = Convert::ToString(num11);
			 dataGridView25->Rows[35]->Cells[1]->Value = Convert::ToString(num12);
			 dataGridView25->Rows[37]->Cells[1]->Value = Convert::ToString(Cceh);
			 dataGridView25->Rows[38]->Cells[1]->Value = Convert::ToString(Pform1);
			 dataGridView25->Rows[39]->Cells[1]->Value = Convert::ToString(Cpn);
			 dataGridView25->Rows[40]->Cells[1]->Value = Convert::ToString(Cvidc);
			 dataGridView25->Rows[41]->Cells[1]->Value = Convert::ToString(Erich);
			
			 

			 button11->BackColor = Color::Blue;
			 button93->Visible=true;
			 
		 }
private: System::Void tabPage13_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button62_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl4->SelectedTab=tabPage18;
			 int i;
			 for (i=0; i<=kilchol; i++)
			  {
				  dataGridView13->Rows->Add();
				  profesion2=Convert::ToString(dataGridView8->Rows[i]->Cells[0]->FormattedValue->ToString());
				  dataGridView13->Rows[i]->Cells[0]->Value = Convert::ToString(profesion2);

				  kilchol2=Convert::ToDouble(dataGridView8->Rows[i]->Cells[1]->FormattedValue->ToString());
				  dataGridView13->Rows[i]->Cells[1]->Value = Convert::ToString(kilchol2);

				  dataGridView13->Rows[i]->Cells[2]->Value = Convert::ToString(Fef);
				  dataGridView13->Rows[i]->Cells[3]->Value = Convert::ToString(Fef);
				  stavka=Convert::ToDouble(dataGridView8->Rows[i]->Cells[3]->FormattedValue->ToString());
				  dataGridView13->Rows[i]->Cells[4]->Value = Convert::ToString(stavka);
				  

			  }


			  //ITR
			  //int i;
			  for (i=0; i<=formform; i++)
			  {
				  dataGridView14->Rows->Add();
				  profesion3=Convert::ToString(dataGridView9->Rows[i]->Cells[0]->FormattedValue->ToString());
				  dataGridView14->Rows[i]->Cells[0]->Value = Convert::ToString(profesion3);

				  kilchol3=Convert::ToDouble(dataGridView9->Rows[i]->Cells[1]->FormattedValue->ToString());
				  dataGridView14->Rows[i]->Cells[1]->Value = Convert::ToString(kilchol3);

				  oklad=Convert::ToDouble(dataGridView9->Rows[i]->Cells[2]->FormattedValue->ToString());
				  dataGridView14->Rows[i]->Cells[2]->Value = Convert::ToString(oklad);
			  }

		 }
private: System::Void button46_Click_1(System::Object^  sender, System::EventArgs^  e) {
			  this->tabControl4->SelectedTab=tabPage19;
		 }
private: System::Void button63_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i;
			// formform=formform+2;
			 for (i=0;i<=formform;i++)
			 {
				 oklad=Convert::ToDouble(dataGridView9->Rows[i]->Cells[2]->FormattedValue->ToString());
				 sumokl=sumokl+oklad;

			 }
			 dataGridView9->Rows[formform+1]->Cells[2]->Value = Convert::ToString(sumokl);
			 button13->BackColor = Color::Blue;
		 }
private: System::Void button65_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl4->SelectedTab=tabPage30;
		 }
private: System::Void button64_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl4->SelectedTab=tabPage20;
		 }
private: System::Void button67_Click(System::Object^  sender, System::EventArgs^  e) {
			 h111=Convert::ToDouble(textBox107->Text);
			 h111=h111-1;
			 int i;
			 for (i=0;i<=h111;i++)
			 {
				 dataGridView27->Rows->Add();
			 }
			 button23->Visible=true;
			 button24->Visible=true;
		 }
private: System::Void button66_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl4->SelectedTab=tabPage28;
		 }
private: System::Void tabPage28_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void button56_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 ZPtr=Convert::ToDouble(textBox66->Text);
			 ESVtr=Convert::ToDouble(textBox67->Text);
			 ZPkomir=Convert::ToDouble(textBox124->Text);
			 ESVkomir=Convert::ToDouble(textBox123->Text);
			 Bbn=ZPtr+ESVtr;
			 Bbn = ((int)(Bbn*100 + (Bbn >= 0 ? 0.5 : -0.5))/100.0);

			 Bi=Convert::ToDouble(textBox69->Text);
			 Bmalinst=Bi*sum22;
			 Bmalinst = ((int)(Bmalinst*100 + (Bmalinst >= 0 ? 0.5 : -0.5))/100.0);

			 ZPzatoch=Convert::ToDouble(textBox70->Text);
			 ESVzatoch=Convert::ToDouble(textBox68->Text);
			 Binst=Bmalinst+ZPzatoch+ESVzatoch+ZPkomir+ESVkomir;
			 Binst = ((int)(Binst*100 + (Binst >= 0 ? 0.5 : -0.5))/100.0);

			 ZPcontr=Convert::ToDouble(textBox72->Text);
			 ESVcontr=Convert::ToDouble(textBox71->Text);
			 Binhi=ZPcontr+ESVcontr;
			 Binhi = ((int)(Binhi*100 + (Binhi >= 0 ? 0.5 : -0.5))/100.0);

			


			 richsumsum3;

			 //схранение в таблицу14
			 
		 }
private: System::Void button71_Click(System::Object^  sender, System::EventArgs^  e) {
			  ZPelekt=Convert::ToDouble(textBox117->Text);
			 ESVelekt=Convert::ToDouble(textBox116->Text);
			 Belekt=ZPelekt+ESVelekt;
			 Belekt = ((int)(Belekt*100 + (Belekt >= 0 ? 0.5 : -0.5))/100.0);

			 ZPnalad=Convert::ToDouble(textBox119->Text);
			 ESVnalad=Convert::ToDouble(textBox118->Text);
			 Bnalad=ZPnalad+ESVnalad;
			 Bnalad = ((int)(Bnalad*100 + (Bnalad >= 0 ? 0.5 : -0.5))/100.0);

			 sumpers=Bnalad+Belekt;
		 }
private: System::Void button68_Click(System::Object^  sender, System::EventArgs^  e) {
			 ekspobl=sumx2+sumpers+Bee;
			 ekspobl = ((int)(ekspobl*100 + (ekspobl >= 0 ? 0.5 : -0.5))/100.0);
			 summasum=richsum1+richsum2+richsum3;

			 this->textBox125->Text=Convert::ToString (Bee);
			 this->textBox126->Text=Convert::ToString (sumx2);
			 this->textBox6->Text=Convert::ToString (ZPelekt);
			 this->textBox5->Text=Convert::ToString (ESVelekt);
			 this->textBox4->Text=Convert::ToString (ZPnalad);
			 this->textBox3->Text=Convert::ToString (ESVnalad);
			 dataGridView21->Rows[1]->Cells[1]->Value = Convert::ToString(richsumsum1);
			 dataGridView21->Rows[2]->Cells[1]->Value = Convert::ToString(ekspobl);
			 Bpotoch1=Bpotoch1+Bpotoch;
			 dataGridView21->Rows[3]->Cells[1]->Value = Convert::ToString(Bpotoch1);
			 dataGridView21->Rows[4]->Cells[1]->Value = Convert::ToString(Bbn);
			 dataGridView21->Rows[5]->Cells[1]->Value = Convert::ToString(Binst);
			 dataGridView21->Rows[6]->Cells[1]->Value = Convert::ToString(Binhi);
			 
			 sumtabl14=summasum+Bpotoch+Bbn+Bmalinst+Binhi+ekspobl;
				 dataGridView21->Rows[7]->Cells[1]->Value = Convert::ToString(sumtabl14);

				 Puprobl=sumtabl14/zppr;
				 Puprobl = ((int)(Puprobl*100 + (Puprobl >= 0 ? 0.5 : -0.5))/100.0);
				 Puprobl=Puprobl*100;
				 this->textBox82->Text=Convert::ToString (Puprobl);
				 ///////////////////////////
				 this->textBox128->Text=Convert::ToString (ZPslus);
				 this->textBox127->Text=Convert::ToString (ESVslus);
				 this->textBox129->Text=Convert::ToString (Bpotoch);
				 this->textBox133->Text=Convert::ToString (ZPzatoch);
				 this->textBox132->Text=Convert::ToString (ESVzatoch);
				 this->textBox131->Text=Convert::ToString (ZPkomir);
				 this->textBox130->Text=Convert::ToString (ESVkomir);
				 this->textBox134->Text=Convert::ToString (Bmalinst);
				 button69->Visible=true;
				 button5->Visible=true;


		 }
private: System::Void button69_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView22->Rows[1]->Cells[1]->Value = Convert::ToString(richsum4);
				 dataGridView22->Rows[2]->Cells[1]->Value = Convert::ToString(sumin6);
				 dataGridView22->Rows[3]->Cells[1]->Value = Convert::ToString(sumin7);
				 dataGridView22->Rows[4]->Cells[1]->Value = Convert::ToString(Binh);
				 sumtabl15=richsumsum2+richsum4+sumin7+Binh;
				 dataGridView22->Rows[5]->Cells[1]->Value = Convert::ToString(sumtabl15);


				 Pceh=sumtabl15/zppr;
				 Pceh = ((int)(Pceh*100 + (Pceh >= 0 ? 0.5 : -0.5))/100.0);
				 Pceh=Pceh*100;
				 this->textBox93->Text=Convert::ToString (Pceh);
		 }
private: System::Void button70_Click(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView23->Rows[1]->Cells[1]->Value = Convert::ToString(summasum);
			 dataGridView23->Rows[2]->Cells[1]->Value = Convert::ToString(ekspobl);
				 dataGridView23->Rows[3]->Cells[1]->Value = Convert::ToString(Bpotoch);
				 dataGridView23->Rows[4]->Cells[1]->Value = Convert::ToString(Bbn);
				 dataGridView23->Rows[5]->Cells[1]->Value = Convert::ToString(Bmalinst);
				 dataGridView23->Rows[6]->Cells[1]->Value = Convert::ToString(Binhi);
				 dataGridView23->Rows[7]->Cells[1]->Value = Convert::ToString(sumtabl14);

				 dataGridView23->Rows[9]->Cells[1]->Value = Convert::ToString(richsumsum2);
				 dataGridView23->Rows[10]->Cells[1]->Value = Convert::ToString(richsum4);
				 dataGridView23->Rows[11]->Cells[1]->Value = Convert::ToString(sumin7);
				 dataGridView23->Rows[12]->Cells[1]->Value = Convert::ToString(Binh);
				 dataGridView23->Rows[13]->Cells[1]->Value = Convert::ToString(sumtabl15);

				 Bneprv=sumtabl14+sumtabl15;
				 dataGridView23->Rows[14]->Cells[1]->Value = Convert::ToString(Bneprv);

				 Pneprv=Bneprv/zppr;
				 Pneprv = ((int)(Pneprv*100 + (Pneprv >= 0 ? 0.5 : -0.5))/100.0);
				 Pneprv=Pneprv*100;
				 this->textBox94->Text=Convert::ToString (Pneprv);
		 }
private: System::Void tabPage3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage2;
		 }
private: System::Void button73_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button74_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button75_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button76_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button77_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button78_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button79_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button80_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;

		 }
private: System::Void button81_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button83_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button84_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button85_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button86_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button87_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button88_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button89_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl4->SelectedTab=tabPage25;
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button90_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl4->SelectedTab=tabPage21;
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl4->SelectedTab=tabPage29;
		 }
private: System::Void button91_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button73_Click_1(System::Object^  sender, System::EventArgs^  e) {
			  this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button7_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl4->SelectedTab=tabPage22;
		 }
private: System::Void button92_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button93_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl5->SelectedTab=tabPage26;
		 }
private: System::Void tabPage27_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button72_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button95_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
//			 button8->BackColor = Color::Blue;
		 }
private: System::Void button94_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();

		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage14;
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage23;
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl5->SelectedTab=tabPage26;
		 }
private: System::Void button70_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 dataGridView23->Rows[1]->Cells[1]->Value = Convert::ToString(summasum);
			 dataGridView23->Rows[2]->Cells[1]->Value = Convert::ToString(ekspobl);
				 dataGridView23->Rows[3]->Cells[1]->Value = Convert::ToString(Bpotoch1);
				 dataGridView23->Rows[4]->Cells[1]->Value = Convert::ToString(Bbn);
				 dataGridView23->Rows[5]->Cells[1]->Value = Convert::ToString(Binst);
				 dataGridView23->Rows[6]->Cells[1]->Value = Convert::ToString(Binhi);
				 dataGridView23->Rows[7]->Cells[1]->Value = Convert::ToString(sumtabl14);

				 dataGridView23->Rows[9]->Cells[1]->Value = Convert::ToString(richsum4);
				 dataGridView23->Rows[10]->Cells[1]->Value = Convert::ToString(sumin6);
				 dataGridView23->Rows[11]->Cells[1]->Value = Convert::ToString(sumin7);
				 dataGridView23->Rows[12]->Cells[1]->Value = Convert::ToString(Binh);
				 dataGridView23->Rows[13]->Cells[1]->Value = Convert::ToString(sumtabl15);

				 Bneprv=sumtabl14+sumtabl15;
				 dataGridView23->Rows[14]->Cells[1]->Value = Convert::ToString(Bneprv);

				 Pneprv=Bneprv/zppr;
				 Pneprv = ((int)(Pneprv*100 + (Pneprv >= 0 ? 0.5 : -0.5))/100.0);
				 Pneprv=Pneprv*100;
				 this->textBox94->Text=Convert::ToString (Pneprv);
				 button7->Visible=true;
		 }
private: System::Void button78_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 ZPslus=Convert::ToDouble(textBox2->Text);
			 ESVslus=Convert::ToDouble(textBox1->Text);

			 Bpotoch1=ZPslus+ESVslus;
			 Bpotoch1 = ((int)(Bpotoch1*100 + (Bpotoch1 >= 0 ? 0.5 : -0.5))/100.0);

		 }
private: System::Void tabPage21_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dataGridView10_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void button82_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=1;
			printDocument2->DocumentName = "Розрахунок трудомісткості виготовлення деталі";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCellHeight;
	 iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void button37_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
		 ////////print 
		 


		 private: System::Void printDocument2_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
						  auto data1= gcnew DataGridView();
					  
				  
			 data1 = tablee[nn];
			 //MessageBox::Show(Convert::ToString(nn));
			 
			 try {
				Brush^ brush;
				//Set the left margin
				int iLeftMargin = e->MarginBounds.Left;
				//Set the top margin
				int iTopMargin = e->MarginBounds.Top;
				//Whether more pages have to print or not
				bool bMorePagesToPrint = false;
				int iTmpWidth = 0;



				//For the first page to print set the cell width and header height
				if (bFirstPage)
				{
					for each (DataGridViewColumn^ GridCol in data1->Columns)
					{
						iTmpWidth = (int)(Math::Floor((double)((double)GridCol->Width /
							(double)iTotalWidth * (double)iTotalWidth *
							((double)e->MarginBounds.Width / (double)iTotalWidth))));

						iHeaderHeight = (int)(e->Graphics->MeasureString(GridCol->HeaderText,
							GridCol->InheritedStyle->Font, iTmpWidth).Height) + 11;

						// Save width and height of headers
						arrColumnLefts->Add(iLeftMargin);
						arrColumnWidths->Add(iTmpWidth);
						iLeftMargin += iTmpWidth;
					}
				}
				//Loop till all the grid rows not get printed
				while (iRow <= data1->Rows->Count - 1)
				{
					DataGridViewRow^ GridRow = data1->Rows[iRow];
					//Set the cell height
					iCellHeight = GridRow->Height + 5;
					int iCount = 0;
					//Check whether the current page settings allows more rows to print
					if (iTopMargin + iCellHeight >= e->MarginBounds.Height + e->MarginBounds.Top)
					{
						bNewPage = true;
						bFirstPage = false;
						bMorePagesToPrint = true;
						break;
					}
					else
					{
						if (bNewPage)
						{
							//Draw Header
							e->Graphics->DrawString("Таблиця", 
								gcnew System::Drawing::Font(data1->Font, FontStyle::Bold),
								Brushes::Black, e->MarginBounds.Left, 
								e->MarginBounds.Top - e->Graphics->MeasureString("Таблиця",
								gcnew System::Drawing::Font(data1->Font,FontStyle::Bold),
								e->MarginBounds.Width).Height - 13);

							String^ strDate = DateTime::Now.ToLongDateString() + " " +
								DateTime::Now.ToShortTimeString();
							//Draw Date
							e->Graphics->DrawString(strDate, 
								gcnew System::Drawing::Font(data1->Font, FontStyle::Bold), Brushes::Black,
								e->MarginBounds.Left + 
								(e->MarginBounds.Width - e->Graphics->MeasureString (strDate, 
								gcnew System::Drawing::Font(data1->Font, FontStyle::Bold),
								e->MarginBounds.Width).Width), 
								e->MarginBounds.Top - e->Graphics->MeasureString("Таблиця",
								gcnew System::Drawing::Font(gcnew System::Drawing::Font(data1->Font, FontStyle::Bold), 
								FontStyle::Bold), e->MarginBounds.Width).Height - 13);

							//Draw Columns         
							iTopMargin = e->MarginBounds.Top;
							for each (DataGridViewColumn^ GridCol in data1->Columns)
							{
								e->Graphics->FillRectangle(gcnew SolidBrush(Color::LightGray),  
									Rectangle((int)arrColumnLefts[iCount], (int)iTopMargin,
									(int)arrColumnWidths[iCount], (int)iHeaderHeight));

								e->Graphics->DrawRectangle(Pens::Black,       
									Rectangle((int)arrColumnLefts[iCount], iTopMargin,
									(int)arrColumnWidths[iCount], iHeaderHeight));

								e->Graphics->DrawString(GridCol->HeaderText,
									GridCol->InheritedStyle->Font,
									gcnew SolidBrush(GridCol->InheritedStyle->ForeColor),
									RectangleF((int)arrColumnLefts[iCount], iTopMargin,
									(int)arrColumnWidths[iCount], iHeaderHeight), strFormat);
								iCount++;
							}
							bNewPage = false;
							iTopMargin += iHeaderHeight;
						}
						iCount = 0;
						//Draw Columns Contents        
						for each (DataGridViewCell^ Cel in GridRow->Cells)
						{
							if (Cel->Value != nullptr)
							{
								e->Graphics->DrawString(Cel->Value->ToString(),
									Cel->InheritedStyle->Font,
									gcnew SolidBrush(Cel->InheritedStyle->ForeColor),
									RectangleF((int)arrColumnLefts[iCount],
									(float)iTopMargin,
									(int)arrColumnWidths[iCount], (float)iCellHeight),
									strFormat);
							}
							//Drawing Cells Borders 
							e->Graphics->DrawRectangle(Pens::Black, 
								Rectangle((int)arrColumnLefts[iCount], (int)iTopMargin,
								(int)arrColumnWidths[iCount], (int)iCellHeight)); 
							iCount++;
						}
					}
					iRow++;
					iTopMargin += iCellHeight;          
				}    
				//If more lines exist, print another page.
				if (bMorePagesToPrint)
					e->HasMorePages = true;
				else
					e->HasMorePages = false;
			}
			catch (Exception^ exc)
			{
				MessageBox::Show(exc->Message, "Error", MessageBoxButtons::OK,
				  MessageBoxIcon::Error);
			}
				  }
//private: System::Void printDocument2_BeginPrint(System::Object^  sender, System::Drawing::Printing::PrintEventArgs^  e) {
			 
		// }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Help::ShowHelp(this, "test.chm");
		 }
private: System::Void button52_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 int rows = dataGridView16->Rows->Count;
				 x=rows-2;
 
			  int f;
			 for ( f = 0; f<=x; f++){			 


				 normavitrat=Convert::ToDouble(dataGridView16->Rows[f]->Cells[1]->FormattedValue->ToString());
				 kilkistverst=Convert::ToDouble(dataGridView16->Rows[f]->Cells[2]->FormattedValue->ToString());
				 richsumvitrat=normavitrat*kilkistverst;
				 richsumvitrat = ((int)(richsumvitrat*100 + (richsumvitrat >= 0 ? 0.5 : -0.5))/100.0);
				 
				 dataGridView16->Rows[f]->Cells[3]->Value = Convert::ToString(richsumvitrat);
				 pic41=pic41+kilkistverst;
				 pic42=pic42+richsumvitrat;
			 }
			 sumx1=pic41;
			 sumx2=pic42;
			 dataGridView16->Rows[x+1]->Cells[2]->Value = pic41;
			dataGridView16->Rows[x+1]->Cells[3]->Value = pic42;
			pic41=0;
			pic42=0;
			button108->Visible=true;
		 }
private: System::Void button86_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void button108_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl4->SelectedTab=tabPage24;

		 }
private: System::Void button114_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->tabControl1->SelectedTab=tabPage3;
		 }
private: System::Void tabPage20_Click(System::Object^  sender, System::EventArgs^  e) {
		 }




private: System::Void printDocument2_BeginPrint_1(System::Object^  sender, System::Drawing::Printing::PrintEventArgs^  e) {
			 auto data1= gcnew DataGridView();
			 data1 = tablee[nn];
			
			  try {
				strFormat = gcnew StringFormat();
				strFormat->Alignment = StringAlignment::Near;
				strFormat->LineAlignment = StringAlignment::Center;
				strFormat->Trimming = StringTrimming::EllipsisCharacter;
				arrColumnLefts = gcnew ArrayList();
				arrColumnWidths = gcnew ArrayList();

				arrColumnLefts->Clear();
				arrColumnWidths->Clear();
				iCellHeight = 0;
				iCount = 0;
				bFirstPage = true;
				bNewPage = true;

				// Calculating Total Widths
				iTotalWidth = 0;
				
				for each (DataGridViewColumn^ dgvGridCol in data1->Columns)
				{
					iTotalWidth += dgvGridCol->Width;
				}

			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		 }
private: System::Void button92_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 nn=2;
			printDocument2->DocumentName = "Розрахунок кількості основного технологічного обладнання";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void button113_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=22;
			printDocument2->DocumentName = "Техніко-економічні показники";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void button96_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=3;
			printDocument2->DocumentName = "Основне обладнання";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void button97_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=4;
			printDocument2->DocumentName = "Транспортні засоби";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void button98_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=5;
			printDocument2->DocumentName = "Чисельність основних робітників на дільниці";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void button99_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=9;
			printDocument2->DocumentName = "Розрахунок річного фонду зарплати основних робітників";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void button100_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=10;
			printDocument2->DocumentName = "Розрахунок річного фонду зарплати основних робітників";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void button101_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=11;
			printDocument2->DocumentName = "Розрахунок зарплати допоміжних робітників";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void button102_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=12;
			printDocument2->DocumentName = "Розрахунок заробітної плати цехового персоналу";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void button103_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=13;
			printDocument2->DocumentName = "Зведена таблиця річного фонду зарплати персоналу дільниці";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void button104_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=14;
			printDocument2->DocumentName = "Амортизація основних фондів на дільниці";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void button105_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=15;
			printDocument2->DocumentName = "Вартість допоміжних матеріалів (за встановленими нормами)";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void button106_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=16;
			printDocument2->DocumentName = "Ремонт механічної частини";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void button107_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=17;
			printDocument2->DocumentName = "Ремонт електричної частини";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void tabPage19_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button112_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=21;
			printDocument2->DocumentName = "Калькуляція собівартості виробу";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void button111_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=20;
			printDocument2->DocumentName = "Кошторис непрямих витрат по дільниці (всього)";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void button110_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=19;
			printDocument2->DocumentName = "Кошторис цехових (адміністративних) витрат";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
private: System::Void button109_Click(System::Object^  sender, System::EventArgs^  e) {
			 nn=18;
			printDocument2->DocumentName = "Кошторис витрат на утримання та експлуатацію обладнання";  
			printDialog2->ShowDialog();
			printDocument2->Print();
			iCount=0;
	iTotalWidth=0;
	 iRow=0;
 iHeaderHeight=0;
		 }
};

}
