#pragma once

#include "Entity.hpp"
#include "Game.hpp"

namespace GTA
{
	#pragma region Forward Declarations
	ref class Ped;
	value class Model;
	#pragma endregion

	public enum class VehicleColor
	{
		MetallicBlack = 0,
		MetallicGraphiteBlack = 1,
		MetallicBlackSteel = 2,
		MetallicDarkSilver = 3,
		MetallicSilver = 4,
		MetallicBlueSilver = 5,
		MetallicSteelGray = 6,
		MetallicShadowSilver = 7,
		MetallicStoneSilver = 8,
		MetallicMidnightSilver = 9,
		MetallicGunMetal = 10,
		MetallicAnthraciteGray = 11,
		MatteBlack = 12,
		MatteGray = 13,
		MatteLightGray = 14,
		UtilBlack = 15,
		UtilBlackPoly = 16,
		UtilDarksilver = 17,
		UtilSilver = 18,
		UtilGunMetal = 19,
		UtilShadowSilver = 20,
		WornBlack = 21,
		WornGraphite = 22,
		WornSilverGray = 23,
		WornSilver = 24,
		WornBlueSilver = 25,
		WornShadowSilver = 26,
		MetallicRed = 27,
		MetallicTorinoRed = 28,
		MetallicFormulaRed = 29,
		MetallicBlazeRed = 30,
		MetallicGracefulRed = 31,
		MetallicGarnetRed = 32,
		MetallicDesertRed = 33,
		MetallicCabernetRed = 34,
		MetallicCandyRed = 35,
		MetallicSunriseOrange = 36,
		MetallicClassicGold = 37,
		MetallicOrange = 38,
		MatteRed = 39,
		MatteDarkRed = 40,
		MatteOrange = 41,
		MatteYellow = 42,
		UtilRed = 43,
		UtilBrightRed = 44,
		UtilGarnetRed = 45,
		WornRed = 46,
		WornGoldenRed = 47,
		WornDarkRed = 48,
		MetallicDarkGreen = 49,
		MetallicRacingGreen = 50,
		MetallicSeaGreen = 51,
		MetallicOliveGreen = 52,
		MetallicGreen = 53,
		MetallicGasolineBlueGreen = 54,
		MatteLimeGreen = 55,
		UtilDarkGreen = 56,
		UtilGreen = 57,
		WornDarkGreen = 58,
		WornGreen = 59,
		WornSeaWash = 60,
		MetallicMidnightBlue = 61,
		MetallicDarkBlue = 62,
		MetallicSaxonyBlue = 63,
		MetallicBlue = 64,
		MetallicMarinerBlue = 65,
		MetallicHarborBlue = 66,
		MetallicDiamondBlue = 67,
		MetallicSurfBlue = 68,
		MetallicNauticalBlue = 69,
		MetallicBrightBlue = 70,
		MetallicPurpleBlue = 71,
		MetallicSpinnakerBlue = 72,
		MetallicUltraBlue = 73,
		UtilDarkBlue = 75,
		UtilMidnightBlue = 76,
		UtilBlue = 77,
		UtilSeaFoamBlue = 78,
		UtilLightningBlue = 79,
		UtilMauiBluePoly = 80,
		UtilBrightBlue = 81,
		MatteDarkBlue = 82,
		MatteBlue = 83,
		MatteMidnightBlue = 84,
		WornDarkBlue = 85,
		WornBlue = 86,
		WornLightBlue = 87,
		MetallicTaxiYellow = 88,
		MetallicRaceYellow = 89,
		MetallicBronze = 90,
		MetallicYellowBird = 91,
		MetallicLime = 92,
		MetallicChampagne = 93,
		MetallicPuebloBeige = 94,
		MetallicDarkIvory = 95,
		MetallicChocoBrown = 96,
		MetallicGoldenBrown = 97,
		MetallicLightBrown = 98,
		MetallicStrawBeige = 99,
		MetallicMossBrown = 100,
		MetallicBistonBrown = 101,
		MetallicBeechwood = 102,
		MetallicDarkBeechwood = 103,
		MetallicChocoOrange = 104,
		MetallicBeachSand = 105,
		MetallicSunBleechedSand = 106,
		MetallicCream = 107,
		UtilBrown = 108,
		UtilMediumBrown = 109,
		UtilLightBrown = 110,
		MetallicWhite = 111,
		MetallicFrostWhite = 112,
		WornHoneyBeige = 113,
		WornBrown = 114,
		WornDarkBrown = 115,
		WornStrawBeige = 116,
		BrushedSteel = 117,
		BrushedBlackSteel = 118,
		BrushedAluminium = 119,
		Chrome = 120,
		WornOffWhite = 121,
		UtilOffWhite = 122,
		WornOrange = 123,
		WornLightOrange = 124,
		MetallicSecuricorGreen = 125,
		WornTaxiYellow = 126,
		PoliceCarBlue = 127,
		MatteGreen = 128,
		MatteBrown = 129,
		MatteWhite = 131,
		WornWhite = 132,
		WornOliveArmyGreen = 133,
		PureWhite = 134,
		HotPink = 135,
		Salmonpink = 136,
		MetallicVermillionPink = 137,
		Orange = 138,
		Green = 139,
		Blue = 140,
		MettalicBlackBlue = 141,
		MetallicBlackPurple = 142,
		MetallicBlackRed = 143,
		HunterGreen = 144,
		MetallicPurple = 145,
		MetaillicVDarkBlue = 146,
		ModshopBlack1 = 147,
		MattePurple = 148,
		MatteDarkPurple = 149,
		MetallicLavaRed = 150,
		MatteForestGreen = 151,
		MatteOliveDrab = 152,
		MatteDesertBrown = 153,
		MatteDesertTan = 154,
		MatteFoliageGreen = 155,
		DefaultAlloyColor = 156,
		EpsilonBlue = 157,
		PureGold = 158,
		BrushedGold = 159,
	};
	public enum class VehicleDoor
	{
		FrontRightDoor = 1,
		FrontLeftDoor = 0,
		BackRightDoor = 3,
		BackLeftDoor = 2,
		Hood = 4,
		Trunk = 5,
		Trunk2 = 6,
	};
	public enum class VehicleLockStatus
	{
		None = 0,
		Unlocked = 1,
		Locked = 2,
		LockedForPlayer = 3,
		///<summary>Doesn't allow players to exit the vehicle with the exit vehicle key.</summary>
		StickPlayerInside = 4,
		///<summary>Can be broken into the car. if the glass is broken, the value will be set to 1.</summary>
		CanBeBrokenInto = 7,
		CanBeBrokenIntoPersist = 8,
		CannotBeTriedToEnter = 10
	};
	public enum class VehicleLandingGear
	{
		Deployed = 0,
		Closing = 1,
		Opening = 2,
		Retracted = 3,
	};
	public enum class VehicleMod
	{
		Spoilers = 0,
		FrontBumper = 1,
		RearBumper = 2,
		SideSkirt = 3,
		Exhaust = 4,
		Frame = 5,
		Grille = 6,
		Hood = 7,
		Fender = 8,
		RightFender = 9,
		Roof = 10,
		Engine = 11,
		Brakes = 12,
		Transmission = 13,
		Horns = 14,
		Suspension = 15,
		Armor = 16,
		FrontWheels = 23,
		BackWheels = 24, // only for motorcycles

		// Benny's

		PlateHolder = 25,
		VanityPlates = 26,
		TrimDesign = 27,
		Ornaments = 28,
		Dashboard = 29,
		DialDesign = 30,
		DoorSpeakers = 31,
		Seats = 32,
		SteeringWheels = 33,
		ColumnShifterLevers = 34,
		Plaques = 35,
		Speakers = 36,
		Trunk = 37,
		Hydraulics = 38,
		EngineBlock = 39,
		AirFilter = 40,
		Struts = 41,
		ArchCover = 42,
		Aerials = 43,
		Trim = 44,
		Tank = 45,
		Windows = 46,
		Livery = 48
	};
	public enum class VehicleNeonLight
	{
		Left = 0,
		Right = 1,
		Front = 2,
		Back = 3,
	};
	public enum class VehicleRoofState
	{
		Closed,
		Opening,
		Opened,
		Closing,
	};
	public enum class VehicleSeat
	{
		None = -3,
		Any = -2,
		Driver = -1,
		Passenger = 0,
		LeftFront = Driver,
		RightFront = Passenger,
		LeftRear = 1,
		RightRear = 2,
		ExtraSeat1 = 3,
		ExtraSeat2 = 4,
		ExtraSeat3 = 5,
		ExtraSeat4 = 6,
		ExtraSeat5 = 7,
		ExtraSeat6 = 8,
		ExtraSeat7 = 9,
		ExtraSeat8 = 10,
		ExtraSeat9 = 11,
		ExtraSeat10 = 12,
		ExtraSeat11 = 13,
		ExtraSeat12 = 14,
	};
	public enum class VehicleToggleMod
	{
		Turbo = 18,
		TireSmoke = 20,
		XenonHeadlights = 22
	};
	public enum class VehicleWheelType
	{
		Sport = 0,
		Muscle = 1,
		Lowrider = 2,
		SUV = 3,
		Offroad = 4,
		Tuner = 5,
		BikeWheels = 6,
		HighEnd = 7
	};
	public enum class VehicleWindow
	{
		FrontRightWindow = 1,
		FrontLeftWindow = 0,
		BackRightWindow = 3,
		BackLeftWindow = 2
	};
	public enum class VehicleWindowTint
	{
		None = 0,
		PureBlack = 1,
		DarkSmoke = 2,
		LightSmoke = 3,
		Stock = 4,
		Limo = 5,
		Green = 6
	};
	public enum class NumberPlateMounting
	{
		FrontAndRear = 0,
		Front = 1,
		Rear = 2,
		None = 3,
	};
	public enum class NumberPlateType
	{
		BlueOnWhite1 = 0,
		YellowOnBlack = 1,
		YellowOnBlue = 2,
		BlueOnWhite2 = 3,
		BlueOnWhite3 = 4,
		NorthYankton = 5,
	};
	public enum class CargobobHook
	{
		Hook = 0,
		Magnet = 1,
	};
	public enum class VehicleClass
	{
		Compacts = 0,
		Sedans = 1,
		SUVs = 2,
		Coupes = 3,
		Muscle = 4,
		SportsClassics = 5,
		Sports = 6,
		Super = 7,
		Motorcycles = 8,
		OffRoad = 9,
		Industrial = 10,
		Utility = 11,
		Vans = 12,
		Cycles = 13,
		Boats = 14,
		Helicopters = 15,
		Planes = 16,
		Service = 17,
		Emergency = 18,
		Military = 19,
		Commercial = 20,
		Trains = 21,
	};
	public ref class Vehicle sealed : public Entity
	{
	public:
		Vehicle(int handle);

		property bool HasRoof
		{
			bool get();
		}
		property array<Ped ^> ^Occupants
		{
			array<Ped ^> ^get();
		}
		property array<Ped ^> ^Passengers
		{
			array<Ped ^> ^get();
		}
		property int PassengerCount
		{
			int get();
		}
		property int PassengerSeats
		{
			int get();
		}
		property System::String ^DisplayName
		{
			System::String ^get();
		}
		property System::String ^FriendlyName
		{
			System::String ^get();
		}
		property System::String ^NumberPlate
		{
			System::String ^get();
			void set(System::String ^value);
		}
		property GTA::NumberPlateMounting NumberPlateMounting
		{
			GTA::NumberPlateMounting get();
		}
		property GTA::NumberPlateType NumberPlateType
		{
			GTA::NumberPlateType get();
			void set(GTA::NumberPlateType value);
		}
		property bool IsConvertible
		{
			bool get();
		}
		property bool IsStolen
		{
			bool get();
			void set(bool value);
		}
		property bool IsDriveable
		{
			bool get();
			void set(bool value);
		}
		property bool IsStopped
		{
			bool get();
		}
		property bool IsStoppedAtTrafficLights
		{
			bool get();
		}
		property bool IsOnAllWheels
		{
			bool get();
		}
		property bool IsDamaged
		{
			bool get();
		}
		property float Speed
		{
			float get();
			void set(float value);
		}
		property float MaxSpeed
		{
			float get();
		}
		property float MaxTraction
		{
			float get();
		}
		property float MaxBraking
		{
			float get();
		}
		property float DirtLevel
		{
			float get();
			void set(float value);
		}

		property VehicleLockStatus LockStatus
		{
			VehicleLockStatus get();
			void set(VehicleLockStatus value);
		}
		property VehicleRoofState RoofState
		{
			VehicleRoofState get();
			void set(VehicleRoofState value);
		}
		property VehicleLandingGear LandingGear
		{
			VehicleLandingGear get();
			void set(VehicleLandingGear value);
		}
		property float BodyHealth
		{
			float get();
			void set(float value);
		}
		property float EngineHealth
		{
			float get();
			void set(float value);
		}
		property float PetrolTankHealth
		{
			float get();
			void set(float value);
		}
		property bool SirenActive
		{
			bool get();
			void set(bool value);
		}
		property bool IsSirenSilent
		{
			void set(bool value);
		}
		property VehicleColor PrimaryColor
		{
			VehicleColor get();
			void set(VehicleColor value);
		}
		property VehicleColor SecondaryColor
		{
			VehicleColor get();
			void set(VehicleColor value);
		}				
		property VehicleColor RimColor
		{
			VehicleColor get();
			void set(VehicleColor value);
		}
		property VehicleColor PearlescentColor
		{
			VehicleColor get();
			void set(VehicleColor value);
		}
		property int ColorCombination
		{
			int get();
			void set(int value);
		}
		property int ColorCombinationCount
		{
			int get();
		}
		property VehicleWheelType WheelType
		{
			VehicleWheelType get();
			void set(VehicleWheelType wheelType);
		}
		property VehicleWindowTint WindowTint
		{
			VehicleWindowTint get();
			void set(VehicleWindowTint windowTint);
		}
		property bool IsPrimaryColorCustom
		{
			bool get();
		}
		property bool IsSecondaryColorCustom
		{
			bool get();
		}

		property bool IsWanted
		{
			void set(bool value);
		}
		property bool IsRadioEnabled
		{
			void set(bool value);
		}
		property bool EngineRunning
		{
			bool get();
			void set(bool value);
		}
		property float EnginePowerMultiplier
		{
			void set(float value);
		}
		property float EngineTorqueMultiplier
		{
			void set(float value);
		}
		property bool EngineCanDegrade
		{
			void set(bool value);
		}
		property bool LightsOn
		{
			void set(bool value);
			bool get();
		}
		property bool HighBeamsOn
		{
			void set(bool value);
			bool get();
		}
		property float LightsMultiplier
		{
			void set(float value);
		}
		property bool LeftHeadLightBroken
		{
			bool get();
			void set(bool value);
		}
		property bool RightHeadLightBroken
		{
			bool get();
			void set(bool value);
		}
		property bool BrakeLightsOn
		{
			void set(bool value);
		}
		property bool HandbrakeOn
		{
			void set(bool value);
		}
		property bool LeftIndicatorLightOn
		{
			void set(bool value);
		}
		property bool RightIndicatorLightOn
		{
			void set(bool value);
		}
		property bool TaxiLightOn
		{
			bool get();
			void set(bool value);
		}
		property bool SearchLightOn
		{
			bool get();
			void set(bool value);
		}
		property bool InteriorLightOn
		{
			void set(bool value);
		}
		property bool NeedsToBeHotwired
		{
			bool get();
			void set(bool value);
		}
		property bool CanTiresBurst
		{
			bool get();
			void set(bool value);
		}
		property bool CanWheelsBreak
		{
			void set(bool value);
		}
		property bool CanBeVisiblyDamaged
		{
			void set(bool value);
		}
		property bool PreviouslyOwnedByPlayer
		{
			bool get();
			void set(bool value);
		}
		property System::Drawing::Color CustomPrimaryColor
		{
			System::Drawing::Color get();
			void set(System::Drawing::Color color);
		}
		property System::Drawing::Color CustomSecondaryColor
		{
			System::Drawing::Color get();
			void set(System::Drawing::Color color);
		}
		property System::Drawing::Color NeonLightsColor
		{
			System::Drawing::Color get();
			void set(System::Drawing::Color color);
		}
		property System::Drawing::Color TireSmokeColor
		{
			System::Drawing::Color get();
			void set(System::Drawing::Color color);
		}
		property int Livery
		{
			int get();
			void set(int liveryIndex);
		}
		property int LiveryCount
		{
			int get();
		}
		property Vehicle ^TowedVehicle
		{
			Vehicle ^get();
		}
		property float TowingCraneRaisedAmount
		{
			void set(float value);
		}
		property bool HasAlarm
		{
			void set(bool value);
		}
		property bool AlarmActive
		{
			bool get();
		}
		property int CurrentGear
		{
			int get();
		}
		property int HighGear
		{
			int get();
			void set(int value);
		}
		property float FuelLevel
		{
			float get();
			void set(float value);
		}
		property float CurrentRPM
		{
			float get();
		}
		property float Acceleration
		{
			float get();
		}
		[System::ObsoleteAttribute("Vehicle.Steering is obsolete, please use Vehicle.SteeringScale instead.")]
		property float Steering
		{
			float get()
			{
				return SteeringScale;
			}
		}
		/// <summary>
		/// Gets or sets the steering angle.
		/// </summary>
		/// <value>The steering angle in degrees.</value>
		property float SteeringAngle
		{
			float get();
		}
		/// <summary>
		/// Gets or sets the steering scale.
		/// </summary>
		/// <value>A single between -1.0f (fully right) and 1.0f (fully left).</value>
		property float SteeringScale
		{
			float get();
			void set(float value);
		}
		property GTA::RadioStation RadioStation
		{
			void set(GTA::RadioStation value);
		}
		property VehicleClass ClassType
		{
			VehicleClass get();
		}

		int GetMod(VehicleMod modType);
		void SetMod(VehicleMod modType, int modIndex, bool variations);
		int GetModCount(VehicleMod modType);
		void ToggleMod(VehicleToggleMod toggleMod, bool toggle);
		bool IsToggleModOn(VehicleToggleMod toggleMod);
		System::String ^GetModTypeName(VehicleMod modType);
		System::String ^GetToggleModTypeName(VehicleToggleMod toggleModType);
		System::String ^GetModName(VehicleMod modType, int modValue);
		void ClearCustomPrimaryColor();
		void ClearCustomSecondaryColor();
		Ped ^GetPedOnSeat(VehicleSeat seat);
		bool IsSeatFree(VehicleSeat seat);

		void Repair();
		void Explode();
		bool PlaceOnGround();
		void PlaceOnNextStreet();
		void OpenDoor(VehicleDoor door, bool loose, bool instantly);
		void CloseDoor(VehicleDoor door, bool instantly);
		void BreakDoor(VehicleDoor door);
		bool IsDoorBroken(VehicleDoor door);
		void SetDoorBreakable(VehicleDoor door, bool isBreakable);
		void FixWindow(VehicleWindow window);
		void SmashWindow(VehicleWindow window);
		void RollUpWindow(VehicleWindow window);
		void RollDownWindow(VehicleWindow window);
		void RollDownWindows();
		void RemoveWindow(VehicleWindow window);
		void SetNeonLightsOn(VehicleNeonLight light, bool on);
		bool IsNeonLightsOn(VehicleNeonLight light);
		void SoundHorn(int duration);
		void SetHeliYawPitchRollMult(float mult);

		void DropCargobobHook(CargobobHook hook);
		bool IsCargobobHookActive();
		bool IsCargobobHookActive(CargobobHook hook);
		void RemoveCargobobHook();
		void CargoBobMagnetGrabVehicle();
		void CargoBobMagnetReleaseVehicle();
		void TowVehicle(Vehicle ^vehicle, bool rear);
		void DetachFromTowTruck();
		void DetachTowedVehicle();

		bool IsTireBurst(int wheel);
		void BurstTire(int wheel);
		void FixTire(int wheel);
		bool IsInBurnout();
		void StartAlarm();
		void ApplyDamage(Math::Vector3 loc, float damageAmount, float radius);
		Ped ^CreatePedOnSeat(VehicleSeat seat, GTA::Model model);
		Ped ^CreateRandomPedOnSeat(VehicleSeat seat);
	};
}
