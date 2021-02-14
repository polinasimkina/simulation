#ifndef ECALPrimaryGeneratorAction_h
#define ECALPrimaryGeneratorAction_h 1

#include "G4VUserPrimaryGeneratorAction.hh"
#include "globals.hh"

class G4ParticleGun;
class G4Event;

/// The primary generator action class with particle gum.
///
/// It defines a single particle which hits the calorimeter
/// perpendicular to the input face.

class ECALPrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction
{
public:
  ECALPrimaryGeneratorAction();
  virtual ~ECALPrimaryGeneratorAction();

  virtual void GeneratePrimaries(G4Event* event);

  // set methods
  void SetRandomFlag(G4bool value);

private:
  G4ParticleGun*  fParticleGun; // G4 particle gun
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif
