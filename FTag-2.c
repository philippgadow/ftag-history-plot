{
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(0);
  TCanvas *c1 = new TCanvas("c1","c1",900,600);
  gStyle->SetOptTitle(0);

 

  const int n = 6;
  double xs[n]= {19, 74, 136, 570, 700, 1220};
  double exs[n]= {5.,5.,5.,5.,5.,5.};
  double y[n]= {6,5,4,3,2,1};
  double ey[n]= {0.4,0.4,0.4,0.4,0.4,0.4};
  
  auto g = new TGraphErrors(n,xs,y,exs,ey);

  g->SetLineColor(2);
  g->SetLineWidth(1);
  g->SetMarkerColor(4);
  g->SetMarkerSize(1.8);
  g->SetMarkerStyle(21);
  g->SetFillColor(kOrange-4);

  TMultiGraph *mg = new TMultiGraph();
  mg->GetXaxis()->SetLimits(1,1600);
  mg->SetMinimum(0.);
  mg->SetMaximum(7);
  mg->GetXaxis()->SetTitle("Light jet rejection factor");
  mg->GetYaxis()->SetLabelSize(0.);
  mg->GetYaxis()->SetTickLength(0.);
  mg->GetXaxis()->SetLabelSize(0.04);

  mg->Add(g,"5");
  mg->Draw("A");


  TLatex latex;
  latex.SetTextSize(0.035);
  //   latex.SetTextFont(72);
  // latex.SetTextAlign(13);  //align at top
  latex.DrawLatex(xs[0]+20, 6.1, "JetProb #color[4]{2010}");
  latex.DrawLatex(xs[1]+20, 5.1, "IP3D-JetFitter/SV1 #color[4]{2011-2012}");
  latex.DrawLatex(xs[2]+20, 4.1, "MV1 #color[4]{2014}");
  latex.DrawLatex(xs[3]+20, 3.1, "MV2c20 - #color[2]{IBL} #color[4]{2018}");
  latex.DrawLatex(xs[4]+20, 2.1, "DL1r* #color[4]{2019}");
  latex.DrawLatex(xs[5]+20, 1.1, "GN1 #color[4]{2021}");
  
  latex.SetTextSize(0.02);
  latex.SetTextColor(kCyan+2);
  latex.DrawLatex(xs[0]+20, 5.85, "Initial tagger based on track impact parameter");
  latex.DrawLatex(xs[1]+20, 4.85, "Impact Parameter (IP) and Secondary Vertex (SV) tagger");
  latex.DrawLatex(xs[2]+20, 3.85, "Tagger combination based on MultiVariate method (MV)");
  latex.DrawLatex(xs[3]+20, 2.85, "MV tagger after IBL insertion at Run 2");
  latex.DrawLatex(xs[4]+20, 1.85, "Deep Learning Neural Network tagger");
  latex.DrawLatex(xs[5]+20, 0.85, "Graph Neural Network tagger");

  latex.SetTextSize(0.02);
  latex.SetTextColor(kOrange+1);
  //   latex.SetTextFont(72);
  // latex.SetTextAlign(13);  //align at top
  latex.DrawLatex(xs[0]+20, 5.65, "ATLAS-CONF-2011-102");
  latex.DrawLatex(xs[1]+20, 4.65, "ATLAS, JINST 11 (2016) P04008");
  latex.DrawLatex(xs[2]+20, 3.65, "ATLAS, JINST 11 (2016) P04008");
  latex.DrawLatex(xs[3]+20, 2.65, "ATLAS, JINST 13 T05008 (2018)");
  latex.DrawLatex(xs[4]+20, 1.65, "ATLAS, Eur. Phys. J. C 79 (2019) 970, Eur. Phys. J. C 81 (2021) 1087");
  latex.DrawLatex(xs[5]+20, 0.65, "ATL-PHYS-PUB-2022-027");

  latex.SetTextColor(kBlue+3);
  latex.SetTextSize(0.04);
  latex.DrawLatex(500, 6.6, "Light jet rejection - b tagging efficiency #varepsilon = 70%");

  latex.SetTextColor(kBlue+3);
  latex.SetTextSize(0.02);
  latex.DrawLatex(26, 0.4, "* Variation in efficiency due to lower jet threshold and improved charm rejection");


  TLine *line = new TLine(50.,-1.0,50.,7.);
  line->SetLineColor(4);
  line->SetLineWidth(2);
  line->SetLineStyle(2);
  //  line->Draw("same");
    
  
  return c1;
}





  
