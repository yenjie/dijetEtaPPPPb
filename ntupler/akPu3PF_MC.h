//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Apr  5 09:09:08 2013 by ROOT version 5.32/00
// from TTree t/akPu3PFpatJets Jet Analysis Tree
// found on file: root://eoscms//eos/cms/store/caf/user/dgulhan/pPb/HP04/prod16/Hijing_Pythia_pt30/HiForest_v77_merged01/pt30_HP04_prod16_v77_merged_forest_0.root
//////////////////////////////////////////////////////////

#ifndef akPu3PF_MC_h
#define akPu3PF_MC_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "HiTree.C"
#include "hi.C"
#include "HltTree.C"
#include "pfTree.C"
#include "skimTree.C"

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class akPu3PF_MC {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain
   // skimTree		  *fskim;
   // HltTree		  *fhlt;
   // trackTree 	  *ftrack;
   // HiTree		  *fhi;
   // photon		  *fphoton;
   
   // Declaration of leaf types
   Int_t           evt;
   Float_t         b;
   Int_t           nref;
   Float_t         rawpt[200];   //[nref]
   Float_t         jtpt[200];   //[nref]
   Float_t         jteta[200];   //[nref]
   Float_t         jty[200];   //[nref]
   Float_t         jtphi[200];   //[nref]
   Float_t         jtpu[200];   //[nref]
   Float_t         jtm[200];   //[nref]
   Float_t         discr_fr01[200];   //[nref]
   Float_t         trackMax[200];   //[nref]
   Float_t         trackSum[200];   //[nref]
   Int_t           trackN[200];   //[nref]
   Float_t         trackHardSum[200];   //[nref]
   Int_t           trackHardN[200];   //[nref]
   Float_t         chargedMax[200];   //[nref]
   Float_t         chargedSum[200];   //[nref]
   Int_t           chargedN[200];   //[nref]
   Float_t         chargedHardSum[200];   //[nref]
   Int_t           chargedHardN[200];   //[nref]
   Float_t         photonMax[200];   //[nref]
   Float_t         photonSum[200];   //[nref]
   Int_t           photonN[200];   //[nref]
   Float_t         photonHardSum[200];   //[nref]
   Int_t           photonHardN[200];   //[nref]
   Float_t         neutralMax[200];   //[nref]
   Float_t         neutralSum[200];   //[nref]
   Int_t           neutralN[200];   //[nref]
   Float_t         hcalSum[200];   //[nref]
   Float_t         ecalSum[200];   //[nref]
   Float_t         eMax[200];   //[nref]
   Float_t         eSum[200];   //[nref]
   Int_t           eN[200];   //[nref]
   Float_t         muMax[200];   //[nref]
   Float_t         muSum[200];   //[nref]
   Int_t           muN[200];   //[nref]
   Float_t         fHPD[200];   //[nref]
   Float_t         fRBX[200];   //[nref]
   Int_t           n90[200];   //[nref]
   Float_t         fSubDet1[200];   //[nref]
   Float_t         fSubDet2[200];   //[nref]
   Float_t         fSubDet3[200];   //[nref]
   Float_t         fSubDet4[200];   //[nref]
   Float_t         restrictedEMF[200];   //[nref]
   Int_t           nHCAL[200];   //[nref]
   Int_t           nECAL[200];   //[nref]
   Float_t         apprHPD[200];   //[nref]
   Float_t         apprRBX[200];   //[nref]
   Int_t           n2RPC[200];   //[nref]
   Int_t           n3RPC[200];   //[nref]
   Int_t           nRPC[200];   //[nref]
   Float_t         fEB[200];   //[nref]
   Float_t         fEE[200];   //[nref]
   Float_t         fHB[200];   //[nref]
   Float_t         fHE[200];   //[nref]
   Float_t         fHO[200];   //[nref]
   Float_t         fLong[200];   //[nref]
   Float_t         fShort[200];   //[nref]
   Float_t         fLS[200];   //[nref]
   Float_t         fHFOOT[200];   //[nref]
   Float_t         matchedPt[200];   //[nref]
   Float_t         matchedRawPt[200];   //[nref]
   Float_t         matchedR[200];   //[nref]
   Int_t           beamId1;
   Int_t           beamId2;
   Float_t         pthat;
   Float_t         refpt[200];   //[nref]
   Float_t         refeta[200];   //[nref]
   Float_t         refy[200];   //[nref]
   Float_t         refphi[200];   //[nref]
   Float_t         refdphijt[200];   //[nref]
   Float_t         refdrjt[200];   //[nref]
   Float_t         refparton_pt[200];   //[nref]
   Int_t           refparton_flavor[200];   //[nref]
   Int_t           refparton_flavorForB[200];   //[nref]
   Float_t         genChargedSum[200];   //[nref]
   Float_t         genHardSum[200];   //[nref]
   Float_t         signalChargedSum[200];   //[nref]
   Float_t         signalHardSum[200];   //[nref]
   Int_t           subid[200];   //[nref]
   Int_t           ngen;
   Int_t           genmatchindex[200];   //[ngen]
   Float_t         genpt[200];   //[ngen]
   Float_t         geneta[200];   //[ngen]
   Float_t         geny[200];   //[ngen]
   Float_t         genphi[200];   //[ngen]
   Float_t         gendphijt[200];   //[ngen]
   Float_t         gendrjt[200];   //[ngen]
   Int_t           gensubid[200];   //[ngen]

   // List of branches
   TBranch        *b_evt;   //!
   TBranch        *b_b;   //!
   TBranch        *b_nref;   //!
   TBranch        *b_rawpt;   //!
   TBranch        *b_jtpt;   //!
   TBranch        *b_jteta;   //!
   TBranch        *b_jty;   //!
   TBranch        *b_jtphi;   //!
   TBranch        *b_jtpu;   //!
   TBranch        *b_jtm;   //!
   TBranch        *b_discr_fr01;   //!
   TBranch        *b_trackMax;   //!
   TBranch        *b_trackSum;   //!
   TBranch        *b_trackN;   //!
   TBranch        *b_trackHardSum;   //!
   TBranch        *b_trackHardN;   //!
   TBranch        *b_chargedMax;   //!
   TBranch        *b_chargedSum;   //!
   TBranch        *b_chargedN;   //!
   TBranch        *b_chargedHardSum;   //!
   TBranch        *b_chargedHardN;   //!
   TBranch        *b_photonMax;   //!
   TBranch        *b_photonSum;   //!
   TBranch        *b_photonN;   //!
   TBranch        *b_photonHardSum;   //!
   TBranch        *b_photonHardN;   //!
   TBranch        *b_neutralMax;   //!
   TBranch        *b_neutralSum;   //!
   TBranch        *b_neutralN;   //!
   TBranch        *b_hcalSum;   //!
   TBranch        *b_ecalSum;   //!
   TBranch        *b_eMax;   //!
   TBranch        *b_eSum;   //!
   TBranch        *b_eN;   //!
   TBranch        *b_muMax;   //!
   TBranch        *b_muSum;   //!
   TBranch        *b_muN;   //!
   TBranch        *b_fHPD;   //!
   TBranch        *b_fRBX;   //!
   TBranch        *b_n90;   //!
   TBranch        *b_fSubDet1;   //!
   TBranch        *b_fSubDet2;   //!
   TBranch        *b_fSubDet3;   //!
   TBranch        *b_fSubDet4;   //!
   TBranch        *b_restrictedEMF;   //!
   TBranch        *b_nHCAL;   //!
   TBranch        *b_nECAL;   //!
   TBranch        *b_apprHPD;   //!
   TBranch        *b_apprRBX;   //!
   TBranch        *b_n2RPC;   //!
   TBranch        *b_n3RPC;   //!
   TBranch        *b_nRPC;   //!
   TBranch        *b_fEB;   //!
   TBranch        *b_fEE;   //!
   TBranch        *b_fHB;   //!
   TBranch        *b_fHE;   //!
   TBranch        *b_fHO;   //!
   TBranch        *b_fLong;   //!
   TBranch        *b_fShort;   //!
   TBranch        *b_fLS;   //!
   TBranch        *b_fHFOOT;   //!
   TBranch        *b_matchedPt;   //!
   TBranch        *b_matchedRawPt;   //!
   TBranch        *b_matchedR;   //!
   TBranch        *b_beamId1;   //!
   TBranch        *b_beamId2;   //!
   TBranch        *b_pthat;   //!
   TBranch        *b_refpt;   //!
   TBranch        *b_refeta;   //!
   TBranch        *b_refy;   //!
   TBranch        *b_refphi;   //!
   TBranch        *b_refdphijt;   //!
   TBranch        *b_refdrjt;   //!
   TBranch        *b_refparton_pt;   //!
   TBranch        *b_refparton_flavor;   //!
   TBranch        *b_refparton_flavorForB;   //!
   TBranch        *b_genChargedSum;   //!
   TBranch        *b_genHardSum;   //!
   TBranch        *b_signalChargedSum;   //!
   TBranch        *b_signalHardSum;   //!
   TBranch        *b_subid;   //!
   TBranch        *b_ngen;   //!
   TBranch        *b_genmatchindex;   //!
   TBranch        *b_genpt;   //!
   TBranch        *b_geneta;   //!
   TBranch        *b_geny;   //!
   TBranch        *b_genphi;   //!
   TBranch        *b_gendphijt;   //!
   TBranch        *b_gendrjt;   //!
   TBranch        *b_gensubid;   //!
   TFile *f;   
   // akPu3PF_MC(TString infile="root://eoscms//eos/cms/store/caf/user/yjlee/pPb2013/promptReco/PA2013_HiForest_PromptReco_JSonPPb_forestv77.root",TString algo="akPu3PF",TTree *tree=0);
   akPu3PF_MC(TString infile="root://eoscms//eos/cms/store/caf/user/yjlee/pPb2013/promptReco/PA2013_HiForest_PromptReco_JSonPPb_forestv77.root",TString algo="ak3PF",TTree *tree=0);
   virtual ~akPu3PF_MC();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Int_t    GetEntriesFast();
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   virtual void Close();
}; 

#endif

#ifdef akPu3PF_MC_cxx
akPu3PF_MC::akPu3PF_MC(TString infile, TString algo, TTree *tree)
{ 
   f = TFile::Open(infile);
   std::cout << algo.Data() << std::endl;
   tree = (TTree*) f->Get(Form("%sJetAnalyzer/t",algo.Data()));
   // tree = (TTree*) f->Get("ak3PFJetAnalyzer/t");
   // fhi = new HiTree(infile);
   // fhlt = new HltTree(infile);
   // ftrack = new trackTree(infile);
   // fphoton = new photon(infile);
   // fskim = new skimTree(infile);
   Init(tree);
   tree->Print();
}

akPu3PF_MC::~akPu3PF_MC()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t akPu3PF_MC::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Int_t akPu3PF_MC::GetEntriesFast()
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntriesFast();
}
Long64_t akPu3PF_MC::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void akPu3PF_MC::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("evt", &evt, &b_evt);
   fChain->SetBranchAddress("b", &b, &b_b);
   fChain->SetBranchAddress("nref", &nref, &b_nref);
   fChain->SetBranchAddress("rawpt", rawpt, &b_rawpt);
   fChain->SetBranchAddress("jtpt", jtpt, &b_jtpt);
   fChain->SetBranchAddress("jteta", jteta, &b_jteta);
   fChain->SetBranchAddress("jty", jty, &b_jty);
   fChain->SetBranchAddress("jtphi", jtphi, &b_jtphi);
   fChain->SetBranchAddress("jtpu", jtpu, &b_jtpu);
   fChain->SetBranchAddress("jtm", jtm, &b_jtm);
   fChain->SetBranchAddress("discr_fr01", discr_fr01, &b_discr_fr01);
   fChain->SetBranchAddress("trackMax", trackMax, &b_trackMax);
   fChain->SetBranchAddress("trackSum", trackSum, &b_trackSum);
   fChain->SetBranchAddress("trackN", trackN, &b_trackN);
   fChain->SetBranchAddress("trackHardSum", trackHardSum, &b_trackHardSum);
   fChain->SetBranchAddress("trackHardN", trackHardN, &b_trackHardN);
   fChain->SetBranchAddress("chargedMax", chargedMax, &b_chargedMax);
   fChain->SetBranchAddress("chargedSum", chargedSum, &b_chargedSum);
   fChain->SetBranchAddress("chargedN", chargedN, &b_chargedN);
   fChain->SetBranchAddress("chargedHardSum", chargedHardSum, &b_chargedHardSum);
   fChain->SetBranchAddress("chargedHardN", chargedHardN, &b_chargedHardN);
   fChain->SetBranchAddress("photonMax", photonMax, &b_photonMax);
   fChain->SetBranchAddress("photonSum", photonSum, &b_photonSum);
   fChain->SetBranchAddress("photonN", photonN, &b_photonN);
   fChain->SetBranchAddress("photonHardSum", photonHardSum, &b_photonHardSum);
   fChain->SetBranchAddress("photonHardN", photonHardN, &b_photonHardN);
   fChain->SetBranchAddress("neutralMax", neutralMax, &b_neutralMax);
   fChain->SetBranchAddress("neutralSum", neutralSum, &b_neutralSum);
   fChain->SetBranchAddress("neutralN", neutralN, &b_neutralN);
   fChain->SetBranchAddress("hcalSum", hcalSum, &b_hcalSum);
   fChain->SetBranchAddress("ecalSum", ecalSum, &b_ecalSum);
   fChain->SetBranchAddress("eMax", eMax, &b_eMax);
   fChain->SetBranchAddress("eSum", eSum, &b_eSum);
   fChain->SetBranchAddress("eN", eN, &b_eN);
   fChain->SetBranchAddress("muMax", muMax, &b_muMax);
   fChain->SetBranchAddress("muSum", muSum, &b_muSum);
   fChain->SetBranchAddress("muN", muN, &b_muN);
   fChain->SetBranchAddress("fHPD", fHPD, &b_fHPD);
   fChain->SetBranchAddress("fRBX", fRBX, &b_fRBX);
   fChain->SetBranchAddress("n90", n90, &b_n90);
   fChain->SetBranchAddress("fSubDet1", fSubDet1, &b_fSubDet1);
   fChain->SetBranchAddress("fSubDet2", fSubDet2, &b_fSubDet2);
   fChain->SetBranchAddress("fSubDet3", fSubDet3, &b_fSubDet3);
   fChain->SetBranchAddress("fSubDet4", fSubDet4, &b_fSubDet4);
   fChain->SetBranchAddress("restrictedEMF", restrictedEMF, &b_restrictedEMF);
   fChain->SetBranchAddress("nHCAL", nHCAL, &b_nHCAL);
   fChain->SetBranchAddress("nECAL", nECAL, &b_nECAL);
   fChain->SetBranchAddress("apprHPD", apprHPD, &b_apprHPD);
   fChain->SetBranchAddress("apprRBX", apprRBX, &b_apprRBX);
   fChain->SetBranchAddress("n2RPC", n2RPC, &b_n2RPC);
   fChain->SetBranchAddress("n3RPC", n3RPC, &b_n3RPC);
   fChain->SetBranchAddress("nRPC", nRPC, &b_nRPC);
   fChain->SetBranchAddress("fEB", fEB, &b_fEB);
   fChain->SetBranchAddress("fEE", fEE, &b_fEE);
   fChain->SetBranchAddress("fHB", fHB, &b_fHB);
   fChain->SetBranchAddress("fHE", fHE, &b_fHE);
   fChain->SetBranchAddress("fHO", fHO, &b_fHO);
   fChain->SetBranchAddress("fLong", fLong, &b_fLong);
   fChain->SetBranchAddress("fShort", fShort, &b_fShort);
   fChain->SetBranchAddress("fLS", fLS, &b_fLS);
   fChain->SetBranchAddress("fHFOOT", fHFOOT, &b_fHFOOT);
   fChain->SetBranchAddress("matchedPt", matchedPt, &b_matchedPt);
   fChain->SetBranchAddress("matchedRawPt", matchedRawPt, &b_matchedRawPt);
   fChain->SetBranchAddress("matchedR", matchedR, &b_matchedR);
   fChain->SetBranchAddress("beamId1", &beamId1, &b_beamId1);
   fChain->SetBranchAddress("beamId2", &beamId2, &b_beamId2);
   fChain->SetBranchAddress("pthat", &pthat, &b_pthat);
   fChain->SetBranchAddress("refpt", refpt, &b_refpt);
   fChain->SetBranchAddress("refeta", refeta, &b_refeta);
   fChain->SetBranchAddress("refy", refy, &b_refy);
   fChain->SetBranchAddress("refphi", refphi, &b_refphi);
   fChain->SetBranchAddress("refdphijt", refdphijt, &b_refdphijt);
   fChain->SetBranchAddress("refdrjt", refdrjt, &b_refdrjt);
   fChain->SetBranchAddress("refparton_pt", refparton_pt, &b_refparton_pt);
   fChain->SetBranchAddress("refparton_flavor", refparton_flavor, &b_refparton_flavor);
   fChain->SetBranchAddress("refparton_flavorForB", refparton_flavorForB, &b_refparton_flavorForB);
   fChain->SetBranchAddress("genChargedSum", genChargedSum, &b_genChargedSum);
   fChain->SetBranchAddress("genHardSum", genHardSum, &b_genHardSum);
   fChain->SetBranchAddress("signalChargedSum", signalChargedSum, &b_signalChargedSum);
   fChain->SetBranchAddress("signalHardSum", signalHardSum, &b_signalHardSum);
   fChain->SetBranchAddress("subid", subid, &b_subid);
   fChain->SetBranchAddress("ngen", &ngen, &b_ngen);
   fChain->SetBranchAddress("genmatchindex", genmatchindex, &b_genmatchindex);
   fChain->SetBranchAddress("genpt", genpt, &b_genpt);
   fChain->SetBranchAddress("geneta", geneta, &b_geneta);
   fChain->SetBranchAddress("geny", geny, &b_geny);
   fChain->SetBranchAddress("genphi", genphi, &b_genphi);
   fChain->SetBranchAddress("gendphijt", gendphijt, &b_gendphijt);
   fChain->SetBranchAddress("gendrjt", gendrjt, &b_gendrjt);
   fChain->SetBranchAddress("gensubid", gensubid, &b_gensubid);
   Notify();
}

Bool_t akPu3PF_MC::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void akPu3PF_MC::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
void akPu3PF_MC::Close()
{
 f->Close();
}
Int_t akPu3PF_MC::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef akPu3PF_MC_cxx
