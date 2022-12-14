#include <fstream.h>
#include <conio.h>
#include <string.h>

struct move
{
  char name [20];
  int type;
  int power;
  int acc;
  int pp;
};

struct pokemon
{
  char name [20];
  int dex;
  int type1;
  int type2;
  int atk;
  int def;
  int speed;
  int hp;
  move move1;
  move move2;
  move move3;
  move move4;
};

void main()
{
  clrscr();
  //MOVES
  move frenzy_plant = {"Frenzy Plant", 4, 150, 80, 5};
  move magical_leaf = {"Magical Leaf", 4, 60, 100, 15};
  move double_edge = {"Double Edge", 1, 120, 90, 10};
  move sludge_bomb = {"Sludge Bomb", 10, 90, 100, 10};
  move blast_burn = {"Blast Burn", 2, 150, 80, 5};
  move fire_fang = {"Fire Fang", 2, 65, 95, 15};
  move air_slash = {"Air Slash", 6, 90, 100, 10};
  move dragon_claw = {"Dragon Claw", 17, 90, 100, 10};
  move eruption = {"Eruption", 2, 150, 75, 5};
  move lava_plume = {"Lava Plume", 2, 80, 100, 10};
  move earthquake = {"Earthquake", 11, 100, 90, 10};
  move shadow_claw = {"Shadow Claw", 9, 70, 100, 15};
  move ice_fang = {"Ice Fang", 16, 65, 95, 15};
  move aqua_tail = {"Aqua Tail", 3, 90, 90, 10};
  move superpower = {"Superpower", 15, 110, 90, 5};
  move hydro_cannon = {"Hydro Cannon", 3, 150, 80, 5};
  move leaf_blade = {"Leaf Blade", 4, 90, 100, 10};
  move leaf_storm = {"Leaf Storm", 4, 130, 90, 5};
  move night_slash = {"Night Slash", 7, 85, 100, 10};
  move dragon_pulse = {"Dragon Pulse", 17, 85, 100, 10};
  move muddy_water = {"Muddy Water", 3, 90, 85, 15};
  move hammer_arm = {"Hammer Arm", 15, 100, 90, 10};
  move wood_hammer = {"Wood Hammer", 4, 120, 90, 5};
  move crunch = {"Crunch", 7, 80, 100, 15};
  move flare_blitz = {"Flare Blitz", 2, 120, 100, 5};
  move close_combat = {"Close Combat", 15, 120, 100, 5};
  move dig = {"Dig", 11, 80, 100, 10};
  move flamethrower = {"Flamethrower", 2, 90, 100, 10};
  move ice_beam = {"Ice Beam", 16, 90, 100, 10};
  move retaliate = {"Retaliate", 1, 70, 100, 15};
  move fire_blast = {"Fire Blast", 2, 110, 85, 5};
  move extreme_speed = {"Extreme Speed", 1, 100, 100, 10};
  move surf = {"Surf", 3, 90, 100, 10};
  move body_slam = {"Body Slam", 1, 85, 100, 15};
  move blizzard = {"Blizzard", 16, 120, 75, 5};
  move stone_edge = {"Stone Edge", 12, 100, 80, 10};
  move brick_break = {"Brick Break", 15, 75, 100, 10};
  move fire_punch = {"Fire Punch", 2, 75, 100, 10};
  move sky_attack = {"Sky Attack", 6, 120, 90, 5};
  move extrasensory = {"Extrasensory", 8, 80, 100, 15};
  move megahorn = {"Megahorn", 13, 120, 85, 10};
  move aerial_ace = {"Aerial Ace", 6, 70, 100, 15};
  move focus_blast = {"Focus Blast", 15, 120, 75, 5};
  move overheat = {"Overheat", 2, 130, 90, 5};
  move thunder_punch = {"Thunder Punch", 5, 75, 100, 10};
  move psychic = {"Psychic", 8, 90, 100, 10};
  move brave_bird = {"Brave Bird", 6, 120, 90, 10};
  move take_down = {"Take Down", 1, 80, 85, 15};
  move bug_buzz = {"Bug Buzz", 13, 90, 100, 10};
  move fiery_dance = {"Fiery Dance", 2, 80, 100, 15};
  move hurricane = {"Hurricane", 6, 110, 70, 10};
  move icicle_crash = {"Icicle Crash", 16, 85, 90, 10};
  move iron_tail = {"Iron Tail", 14, 100, 75, 10};
  move poison_jab = {"Poison Jab", 10, 80, 100, 15};
  move thunderbolt = {"Thunderbolt", 5, 90, 100, 10};
  move flash_cannon = {"Flash Cannon", 14, 80, 100, 15};
  move thrash = {"Thrash", 1, 120, 100, 5};
  move rock_slide = {"Rock Slide", 12, 75, 90, 15};
  move giga_impact = {"Giga Impact", 1, 150, 90, 5};
  move slash = {"Slash", 1, 70, 100, 15};
  move xscissor = {"X-Scissor", 13, 80, 100, 15};
  move iron_head = {"Iron Head", 14, 80, 100, 15};
  move foul_play = {"Foul Play", 7, 95, 100, 10};
  move power_gem = {"Power Gem", 12, 80, 100, 15};
  move hyper_beam = {"Hyper Beam", 1, 150, 90, 5};
  move discharge = {"Discharge", 5, 85, 100, 10};
  move volt_tackle = {"Volt Tackle", 5, 110, 100, 5};
  move signal_beam = {"Signal Beam", 13, 75, 100, 15};
  move thunder = {"Thunder", 5, 120, 70, 5};
  move shadow_ball = {"Shadow Ball", 9, 85, 100, 10};
  move vital_throw = {"Vital Throw", 15, 80, 100, 10};
  move night_shade = {"Night Shade", 9, 80, 100, 10};
  move outrage = {"Outrage", 17, 120, 100, 5};
  move night_daze = {"Night Daze", 7, 95, 95, 10};
  move dark_pulse = {"Dark Pulse", 7, 85, 100, 10};
  move zap_cannon = {"Zap Cannon", 5, 120, 60, 5};
  move tri_attack = {"Tri Attack", 1, 90, 100, 10};
  move energy_ball = {"Energy Ball", 4, 95, 100, 10};
  move sucker_punch = {"Sucker Punch", 7, 75, 100, 10};
  move petal_dance = {"Petal Dance", 4, 120, 100, 5};
  move zen_headbutt = {"Zen Headbutt", 8, 85, 90, 10};
  move meteor_mash = {"Meteor Mash", 14, 90, 90, 10};
  move steamroller = {"Steamroller", 13, 75, 100, 15};
  move rock_climb = {"Rock Climb", 1, 95, 85, 15};
  move heat_wave = {"Heat Wave", 2, 95, 90, 10};
  move future_sight = {"Future Sight", 8, 100, 100, 10};
  move draco_meteor = {"Draco Meteor", 17, 130, 90, 5};
  move aura_sphere = {"Aura Sphere", 15, 85, 100, 10};
  move uturn = {"U-Turn", 13, 70, 100, 15};
  move scald = {"Scald", 3, 85, 100, 10};
  move dragon_tail = {"Dragon Tail", 17, 70, 90, 15};
  move sky_uppercut = {"Sky Uppercut", 15, 85, 90, 15};

  //VENUSAUR
  pokemon venusaur;
  strcpy(venusaur.name, "VENUSAUR");
  venusaur.dex = 1;
  venusaur.type1 = 4;
  venusaur.type2 = 10;
  venusaur.atk = 273;
  venusaur.def = 276;
  venusaur.speed = 240;
  venusaur.hp = 240;
  venusaur.move1 = frenzy_plant;
  venusaur.move2 = magical_leaf;
  venusaur.move3 = double_edge;
  venusaur.move4 = sludge_bomb;
  //CHARIZARD
  pokemon charizard;
  strcpy (charizard.name, "CHARIZARD");
  charizard.dex = 2;
  charizard.type1 = 2;
  charizard.type2 = 6;
  charizard.atk = 291;
  charizard.def = 246;
  charizard.speed = 300;
  charizard.hp = 234;
  charizard.move1 = blast_burn;
  charizard.move2 = fire_fang;
  charizard.move3 = air_slash;
  charizard.move4 = dragon_claw;
  //TYPHLOSION
  pokemon typhlosion;
  strcpy (typhlosion.name, "TYPHLOSION");
  typhlosion.dex = 3;
  typhlosion.type1 = 2;
  typhlosion.type2 = 0;
  typhlosion.atk = 291;
  typhlosion.def = 246;
  typhlosion.speed = 300;
  typhlosion.hp = 234;
  typhlosion.move1 = eruption;
  typhlosion.move2 = lava_plume;
  typhlosion.move3 = earthquake;
  typhlosion.move4 = shadow_claw;
  //FERALIGATR
  pokemon feraligatr;
  strcpy (feraligatr.name, "FERALIGATR");
  feraligatr.dex = 4;
  feraligatr.type1 = 3;
  feraligatr.type2 = 0;
  feraligatr.atk = 276;
  feraligatr.def = 276;
  feraligatr.speed = 234;
  feraligatr.hp = 255;
  feraligatr.move1 = hydro_cannon;
  feraligatr.move2 = ice_fang;
  feraligatr.move3 = aqua_tail;
  feraligatr.move4 = superpower;
  //SCEPTILE
  pokemon sceptile;
  strcpy (sceptile.name, "SCEPTILE");
  sceptile.dex = 5;
  sceptile.type1 = 4;
  sceptile.type2 = 0;
  sceptile.atk = 285;
  sceptile.def = 225;
  sceptile.speed = 360;
  sceptile.hp = 210;
  sceptile.move1 = leaf_blade;
  sceptile.move2 = leaf_storm;
  sceptile.move3 = night_slash;
  sceptile.move4 = dragon_pulse;
  //SWAMPERT
  pokemon swampert;
  strcpy (swampert.name, "SWAMPERT");
  swampert.dex = 6;
  swampert.type1 = 3;
  swampert.type2 = 11;
  swampert.atk = 294;
  swampert.def = 270;
  swampert.speed = 180;
  swampert.hp = 300;
  swampert.move1 = hydro_cannon;
  swampert.move2 = muddy_water;
  swampert.move3 = hammer_arm;
  swampert.move4 = earthquake;
  //TORTERRA
  pokemon torterra;
  strcpy (torterra.name, "TORTERRA");
  torterra.dex = 7;
  torterra.type1 = 4;
  torterra.type2 = 11;
  torterra.atk = 276;
  torterra.def = 285;
  torterra.speed = 168;
  torterra.hp = 285;
  torterra.move1 = wood_hammer;
  torterra.move2 = energy_ball;
  torterra.move3 = crunch;
  torterra.move4 = earthquake;
  //INFERNAPE
  pokemon infernape;
  strcpy (infernape.name, "INFERNAPE");
  infernape.dex = 8;
  infernape.type1 = 2;
  infernape.type2 = 15;
  infernape.atk = 312;
  infernape.def = 213;
  infernape.speed = 324;
  infernape.hp = 228;
  infernape.move1 = flare_blitz;
  infernape.move2 = flamethrower;
  infernape.move3 = close_combat;
  infernape.move4 = dig;
  //SAMUROTT
  pokemon samurott;
  strcpy (samurott.name, "SAMUROTT");
  samurott.dex = 9;
  samurott.type1 = 3;
  samurott.type2 = 0;
  samurott.atk = 312;
  samurott.def = 234;
  samurott.speed = 210;
  samurott.hp = 285;
  samurott.move1 = hydro_cannon;
  samurott.move2 = aqua_tail;
  samurott.move3 = retaliate;
  samurott.move4 = ice_beam;
  //ARCANINE
  pokemon arcanine;
  strcpy (arcanine.name, "ARCANINE");
  arcanine.dex = 10;
  arcanine.type1 = 2;
  arcanine.type2 = 0;
  arcanine.atk = 315;
  arcanine.def = 240;
  arcanine.speed = 285;
  arcanine.hp = 270;
  arcanine.move1 = fire_blast;
  arcanine.move2 = fire_fang;
  arcanine.move3 = dragon_pulse;
  arcanine.move4 = extreme_speed;
  //LAPRAS
  pokemon lapras;
  strcpy (lapras.name, "LAPRAS");
  lapras.dex = 11;
  lapras.type1 = 3;
  lapras.type2 = 16;
  lapras.atk = 255;
  lapras.def = 264;
  lapras.speed = 180;
  lapras.hp = 390;
  lapras.move1 = ice_beam;
  lapras.move2 = surf;
  lapras.move3 = body_slam;
  lapras.move4 = blizzard;
  //MACHAMP
  pokemon machamp;
  strcpy (machamp.name, "MACHAMP");
  machamp.dex = 12;
  machamp.type1 = 15;
  machamp.type2 = 0;
  machamp.atk = 294;
  machamp.def = 249;
  machamp.speed = 165;
  machamp.hp = 270;
  machamp.move1 = close_combat;
  machamp.move2 = vital_throw;
  machamp.move3 = stone_edge;
  machamp.move4 = fire_punch;
  //TOGEKISS
  pokemon togekiss;
  strcpy (togekiss.name, "TOGEKISS");
  togekiss.dex = 13;
  togekiss.type1 = 1;
  togekiss.type2 = 6;
  togekiss.atk = 255;
  togekiss.def = 315;
  togekiss.speed = 240;
  togekiss.hp = 255;
  togekiss.move1 = sky_attack;
  togekiss.move2 = air_slash;
  togekiss.move3 = double_edge;
  togekiss.move4 = extrasensory;
  //HERACROSS
  pokemon heracross;
  strcpy (heracross.name, "HERACROSS");
  heracross.dex = 14;
  heracross.type1 = 13;
  heracross.type2 = 15;
  heracross.atk = 249;
  heracross.def = 255;
  heracross.speed = 255;
  heracross.hp = 240;
  heracross.move1 = brick_break;
  heracross.move2 = megahorn;
  heracross.move3 = close_combat;
  heracross.move4 = aerial_ace;
  //MAGMORTAR
  pokemon magmortar;
  strcpy (magmortar.name, "MAGMORTAR");
  magmortar.dex = 15;
  magmortar.type1 = 2;
  magmortar.type2 = 0;
  magmortar.atk = 330;
  magmortar.def = 243;
  magmortar.speed = 249;
  magmortar.hp = 255;
  magmortar.move1 = overheat;
  magmortar.move2 = thunder_punch;
  magmortar.move3 = flamethrower;
  magmortar.move4 = psychic;
  //STARAPTOR
  pokemon staraptor;
  strcpy (staraptor.name, "STARAPTOR");
  staraptor.dex = 16;
  staraptor.type1 = 1;
  staraptor.type2 = 6;
  staraptor.atk = 255;
  staraptor.def = 195;
  staraptor.speed = 300;
  staraptor.hp = 255;
  staraptor.move1 = close_combat;
  staraptor.move2 = brave_bird;
  staraptor.move3 = aerial_ace;
  staraptor.move4 = take_down;
  //VOLCARONA
  pokemon volcarona;
  strcpy (volcarona.name, "VOLCARONA");
  volcarona.dex = 17;
  volcarona.type1 = 2;
  volcarona.type2 = 13;
  volcarona.atk = 294;
  volcarona.def = 255;
  volcarona.speed = 300;
  volcarona.hp = 255;
  volcarona.move1 = bug_buzz;
  volcarona.move2 = overheat;
  volcarona.move3 = fiery_dance;
  volcarona.move4 = hurricane;
  //BEARTIC
  pokemon beartic;
  strcpy (beartic.name, "BEARTIC");
  beartic.dex = 18;
  beartic.type1 = 16;
  beartic.type2 = 0;
  beartic.atk = 285;
  beartic.def = 240;
  beartic.speed = 150;
  beartic.hp = 285;
  beartic.move1 = blizzard;
  beartic.move2 = icicle_crash;
  beartic.move3 = brick_break;
  beartic.move4 = surf;
  //AGGRON
  pokemon aggron;
  strcpy (aggron.name, "AGGRON");
  aggron.dex = 19;
  aggron.type1 = 12;
  aggron.type2 = 14;
  aggron.atk = 255;
  aggron.def = 360;
  aggron.speed = 150;
  aggron.hp = 210;
  aggron.move1 = iron_tail;
  aggron.move2 = stone_edge;
  aggron.move3 = thunderbolt;
  aggron.move4 = flash_cannon;
  //NIDOKING
  pokemon nidoking;
  strcpy (nidoking.name, "NIDOKING");
  nidoking.dex = 20;
  nidoking.type1 = 10;
  nidoking.type2 = 11;
  nidoking.atk = 282;
  nidoking.def = 228;
  nidoking.speed = 255;
  nidoking.hp = 243;
  nidoking.move1 = earthquake;
  nidoking.move2 = poison_jab;
  nidoking.move3 = thrash;
  nidoking.move4 = rock_slide;
  //SNORLAX
  pokemon snorlax;
  strcpy (snorlax.name, "SNORLAX");
  snorlax.dex = 21;
  snorlax.type1 = 1;
  snorlax.type2 = 0;
  snorlax.atk = 267;
  snorlax.def = 267;
  snorlax.speed = 90;
  snorlax.hp = 480;
  snorlax.move1 = giga_impact;
  snorlax.move2 = crunch;
  snorlax.move3 = zen_headbutt;
  snorlax.move4 = brick_break;
  //URSARING
  pokemon ursaring;
  strcpy (ursaring.name, "URSARING");
  ursaring.dex = 22;
  ursaring.type1 = 1;
  ursaring.type2 = 0;
  ursaring.atk = 309;
  ursaring.def = 255;
  ursaring.speed = 165;
  ursaring.hp = 270;
  ursaring.move1 = focus_blast;
  ursaring.move2 = crunch;
  ursaring.move3 = slash;
  ursaring.move4 = shadow_claw;
  //SCIZOR
  pokemon scizor;
  strcpy (scizor.name, "SCIZOR");
  scizor.dex = 23;
  scizor.type1 = 13;
  scizor.type2 = 14;
  scizor.atk = 279;
  scizor.def = 270;
  scizor.speed = 195;
  scizor.hp = 210;
  scizor.move1 = xscissor;
  scizor.move2 = iron_head;
  scizor.move3 = superpower;
  scizor.move4 = bug_buzz;
  //AERODACTYL
  pokemon aerodactyl;
  strcpy (aerodactyl.name, "AERODACTYL");
  aerodactyl.dex = 24;
  aerodactyl.type1 = 12;
  aerodactyl.type2 = 6;
  aerodactyl.atk = 249;
  aerodactyl.def = 210;
  aerodactyl.speed = 390;
  aerodactyl.hp = 240;
  aerodactyl.move1 = stone_edge;
  aerodactyl.move2 = sky_attack;
  aerodactyl.move3 = ice_fang;
  aerodactyl.move4 = dragon_claw;
  //GLISCOR
  pokemon gliscor;
  strcpy (gliscor.name, "GLISCOR");
  gliscor.dex = 25;
  gliscor.type1 = 11;
  gliscor.type2 = 6;
  gliscor.atk = 210;
  gliscor.def = 300;
  gliscor.speed = 285;
  gliscor.hp = 225;
  gliscor.move1 = sky_uppercut;
  gliscor.move2 = xscissor;
  gliscor.move3 = earthquake;
  gliscor.move4 = fire_fang;
  //KROOKODILE
  pokemon krookodile;
  strcpy (krookodile.name, "KROOKODILE");
  krookodile.dex = 26;
  krookodile.type1 = 11;
  krookodile.type2 = 7;
  krookodile.atk = 273;
  krookodile.def = 225;
  krookodile.speed = 276;
  krookodile.hp = 285;
  krookodile.move1 = foul_play;
  krookodile.move2 = earthquake;
  krookodile.move3 = dig;
  krookodile.move4 = aqua_tail;
  //GIGALITH
  pokemon gigalith;
  strcpy (gigalith.name, "GIGALITH");
  gigalith.dex = 27;
  gigalith.type1 = 12;
  gigalith.type2 = 0;
  gigalith.atk = 297;
  gigalith.def = 315;
  gigalith.speed = 75;
  gigalith.hp = 255;
  gigalith.move1 = power_gem;
  gigalith.move2 = stone_edge;
  gigalith.move3 = iron_head;
  gigalith.move4 = giga_impact;
  //GYARADOS
  pokemon gyarados;
  strcpy (gyarados.name, "GYARADOS");
  gyarados.dex = 28;
  gyarados.type1 = 3;
  gyarados.type2 = 6;
  gyarados.atk = 279;
  gyarados.def = 270;
  gyarados.speed = 243;
  gyarados.hp = 285;
  gyarados.move1 = outrage;
  gyarados.move2 = surf;
  gyarados.move3 = crunch;
  gyarados.move4 = ice_beam;
  //MAGNEZONE
  pokemon magnezone;
  strcpy (magnezone.name, "MAGNEZONE");
  magnezone.dex = 29;
  magnezone.type1 = 5;
  magnezone.type2 = 14;
  magnezone.atk = 300;
  magnezone.def = 309;
  magnezone.speed = 180;
  magnezone.hp = 210;
  magnezone.move1 = flash_cannon;
  magnezone.move2 = discharge;
  magnezone.move3 = zap_cannon;
  magnezone.move4 = tri_attack;
  //RAICHU
  pokemon raichu;
  strcpy (raichu.name, "RAICHU");
  raichu.dex = 30;
  raichu.type1 = 5;
  raichu.type2 = 0;
  raichu.atk = 270;
  raichu.def = 207;
  raichu.speed = 330;
  raichu.hp = 180;
  raichu.move1 = volt_tackle;
  raichu.move2 = thunderbolt;
  raichu.move3 = iron_tail;
  raichu.move4 = hyper_beam;
  //AMPHAROS
  pokemon ampharos;
  strcpy (ampharos.name, "AMPHAROS");
  ampharos.dex = 31;
  ampharos.type1 = 5;
  ampharos.type2 = 0;
  ampharos.atk = 285;
  ampharos.def = 264;
  ampharos.speed = 165;
  ampharos.hp = 270;
  ampharos.move1 = thunder;
  ampharos.move2 = signal_beam;
  ampharos.move3 = discharge;
  ampharos.move4 = power_gem;
  //ELECTIVIRE
  pokemon electivire;
  strcpy (electivire.name, "ELECTIVIRE");
  electivire.dex = 32;
  electivire.type1 = 5;
  electivire.type2 = 0;
  electivire.atk = 327;
  electivire.def = 228;
  electivire.speed = 285;
  electivire.hp = 225;
  electivire.move1 = thunder;
  electivire.move2 = earthquake;
  electivire.move3 = brick_break;
  electivire.move4 = thunder_punch;
  //TOXICROAK
  pokemon toxicroak;
  strcpy (toxicroak.name, "TOXICROAK");
  toxicroak.dex = 33;
  toxicroak.type1 = 10;
  toxicroak.type2 = 15;
  toxicroak.atk = 288;
  toxicroak.def = 195;
  toxicroak.speed = 255;
  toxicroak.hp = 249;
  toxicroak.move1 = poison_jab;
  toxicroak.move2 = brick_break;
  toxicroak.move3 = hyper_beam;
  toxicroak.move4 = sucker_punch;
  //ROSERADE
  pokemon roserade;
  strcpy (roserade.name, "ROSERADE");
  roserade.dex = 34;
  roserade.type1 = 4;
  roserade.type2 = 10;
  roserade.atk = 294;
  roserade.def = 255;
  roserade.speed = 270;
  roserade.hp = 180;
  roserade.move1 = magical_leaf;
  roserade.move2 = petal_dance;
  roserade.move3 = poison_jab;
  roserade.move4 = shadow_ball;
  //SCOLIPEDE
  pokemon scolipede;
  strcpy (scolipede.name, "SCOLIPEDE");
  scolipede.dex = 35;
  scolipede.type1 = 13;
  scolipede.type2 = 10;
  scolipede.atk = 234;
  scolipede.def = 237;
  scolipede.speed = 336;
  scolipede.hp = 180;
  scolipede.move1 = megahorn;
  scolipede.move2 = sludge_bomb;
  scolipede.move3 = steamroller;
  scolipede.move4 = rock_climb;
  //LUXRAY
  pokemon luxray;
  strcpy (luxray.name, "LUXRAY");
  luxray.dex = 36;
  luxray.type1 = 5;
  luxray.type2 = 0;
  luxray.atk = 324;
  luxray.def = 237;
  luxray.speed = 210;
  luxray.hp = 240;
  luxray.move1 = discharge;
  luxray.move2 = crunch;
  luxray.move3 = thunder;
  luxray.move4 = extreme_speed;
  //GENGAR
  pokemon gengar;
  strcpy (gengar.name, "GENGAR");
  gengar.dex = 37;
  gengar.type1 = 9;
  gengar.type2 = 10;
  gengar.atk = 294;
  gengar.def = 204;
  gengar.speed = 330;
  gengar.hp = 180;
  gengar.move1 = shadow_ball;
  gengar.move2 = night_shade;
  gengar.move3 = sucker_punch;
  gengar.move4 = hyper_beam;
  //EXEGGUTOR
  pokemon exeggutor;
  strcpy (exeggutor.name, "EXEGGUTOR");
  exeggutor.dex = 38;
  exeggutor.type1 = 4;
  exeggutor.type2 = 8;
  exeggutor.atk = 339;
  exeggutor.def = 240;
  exeggutor.speed = 165;
  exeggutor.hp = 285;
  exeggutor.move1 = psychic;
  exeggutor.move2 = magical_leaf;
  exeggutor.move3 = sludge_bomb;
  exeggutor.move4 = wood_hammer;
  //ALAKAZAM
  pokemon alakazam;
  strcpy (alakazam.name, "ALAKAZAM");
  alakazam.dex = 39;
  alakazam.type1 = 8;
  alakazam.type2 = 0;
  alakazam.atk = 279;
  alakazam.def = 210;
  alakazam.speed = 360;
  alakazam.hp = 165;
  alakazam.move1 = future_sight;
  alakazam.move2 = psychic;
  alakazam.move3 = shadow_ball;
  alakazam.move4 = thunderbolt;
  //UMBREON
  pokemon weavile;
  strcpy (weavile.name, "WEAVILE");
  weavile.dex = 40;
  weavile.type1 = 7;
  weavile.type2 = 16;
  weavile.atk = 249;
  weavile.def = 225;
  weavile.speed = 375;
  weavile.hp = 210;
  weavile.move1 = ice_beam;
  weavile.move2 = shadow_ball;
  weavile.move3 = blizzard;
  weavile.move4 = dark_pulse;
  //GOTHITELLE
  pokemon gothitelle;
  strcpy (gothitelle.name, "GOTHITELLE");
  gothitelle.dex = 41;
  gothitelle.type1 = 8;
  gothitelle.type2 = 0;
  gothitelle.atk = 225;
  gothitelle.def = 309;
  gothitelle.speed = 195;
  gothitelle.hp = 210;
  gothitelle.move1 = future_sight;
  gothitelle.move2 = dark_pulse;
  gothitelle.move3 = thunderbolt;
  gothitelle.move4 = psychic;
  //FROSLASS
  pokemon froslass;
  strcpy (froslass.name, "FROSLASS");
  froslass.dex = 42;
  froslass.type1 = 16;
  froslass.type2 = 9;
  froslass.atk = 240;
  froslass.def = 210;
  froslass.speed = 330;
  froslass.hp = 210;
  froslass.move1 = blizzard;
  froslass.move2 = shadow_ball;
  froslass.move3 = ice_beam;
  froslass.move4 = psychic;
  //SPIRITOMB
  pokemon spiritomb;
  strcpy (spiritomb.name, "SPIRITOMB");
  spiritomb.dex = 43;
  spiritomb.type1 = 9;
  spiritomb.type2 = 7;
  spiritomb.atk = 276;
  spiritomb.def = 324;
  spiritomb.speed = 105;
  spiritomb.hp = 150;
  spiritomb.move1 = shadow_ball;
  spiritomb.move2 = dark_pulse;
  spiritomb.move3 = psychic;
  spiritomb.move4 = hyper_beam;
  //DUSKNOIR
  pokemon dusknoir;
  strcpy (dusknoir.name, "DUSKNOIR");
  dusknoir.dex = 44;
  dusknoir.type1 = 9;
  dusknoir.type2 = 0;
  dusknoir.atk = 249;
  dusknoir.def = 405;
  dusknoir.speed = 135;
  dusknoir.hp = 135;
  dusknoir.move1 = dark_pulse;
  dusknoir.move2 = future_sight;
  dusknoir.move3 = shadow_ball;
  dusknoir.move4 = thunder_punch;
  //ZOROARK
  pokemon zoroark;
  strcpy (zoroark.name, "ZOROARK");
  zoroark.dex = 45;
  zoroark.type1 = 7;
  zoroark.type2 = 0;
  zoroark.atk = 339;
  zoroark.def = 180;
  zoroark.speed = 315;
  zoroark.hp = 180;
  zoroark.move1 = uturn;
  zoroark.move2 = foul_play;
  zoroark.move3 = night_daze;
  zoroark.move4 = flamethrower;
  //DRAGONITE
  pokemon dragonite;
  strcpy (dragonite.name, "DRAGONITE");
  dragonite.dex = 46;
  dragonite.type1 = 17;
  dragonite.type2 = 6;
  dragonite.atk = 354;
  dragonite.def = 294;
  dragonite.speed = 240;
  dragonite.hp = 273;
  dragonite.move1 = outrage;
  dragonite.move2 = fire_punch;
  dragonite.move3 = dragon_claw;
  dragonite.move4 = air_slash;
  //TYRANITAR
  pokemon tyranitar;
  strcpy (tyranitar.name, "TYRANITAR");
  tyranitar.dex = 47;
  tyranitar.type1 = 12;
  tyranitar.type2 = 7;
  tyranitar.atk = 345;
  tyranitar.def = 315;
  tyranitar.speed = 183;
  tyranitar.hp = 300;
  tyranitar.move1 = crunch;
  tyranitar.move2 = stone_edge;
  tyranitar.move3 = earthquake;
  tyranitar.move4 = hyper_beam;
  //HAXORUS
  pokemon haxorus;
  strcpy (haxorus.name, "HAXORUS");
  haxorus.dex = 48;
  haxorus.type1 = 17;
  haxorus.type2 = 0;
  haxorus.atk = 312;
  haxorus.def = 240;
  haxorus.speed = 291;
  haxorus.hp = 228;
  haxorus.move1 = dragon_pulse;
  haxorus.move2 = outrage;
  haxorus.move3 = brick_break;
  haxorus.move4 = aqua_tail;
  //GARDEVOIR
  pokemon gardevoir;
  strcpy (gardevoir.name, "GARDEVOIR");
  gardevoir.dex = 49;
  gardevoir.type1 = 8;
  gardevoir.type2 = 0;
  gardevoir.atk = 285;
  gardevoir.def = 270;
  gardevoir.speed = 240;
  gardevoir.hp = 204;
  gardevoir.move1 = psychic;
  gardevoir.move2 = shadow_ball;
  gardevoir.move3 = focus_blast;
  gardevoir.move4 = thunderbolt;
  //METAGROSS
  pokemon metagross;
  strcpy (metagross.name, "METAGROSS");
  metagross.dex = 50;
  metagross.type1 = 8;
  metagross.type2 = 14;
  metagross.atk = 345;
  metagross.def = 330;
  metagross.speed = 210;
  metagross.hp = 240;
  metagross.move1 = meteor_mash;
  metagross.move2 = zen_headbutt;
  metagross.move3 = hammer_arm;
  metagross.move4 = earthquake;
  //GARCHOMP
  pokemon garchomp;
  strcpy (garchomp.name, "GARCHOMP");
  garchomp.dex = 51;
  garchomp.type1 = 17;
  garchomp.type2 = 11;
  garchomp.atk = 315;
  garchomp.def = 270;
  garchomp.speed = 306;
  garchomp.hp = 324;
  garchomp.move1 = draco_meteor;
  garchomp.move2 = earthquake;
  garchomp.move3 = dragon_claw;
  garchomp.move4 = iron_head;
  //HYDREIGON
  pokemon hydreigon;
  strcpy (hydreigon.name, "HYDREIGON");
  hydreigon.dex = 52;
  hydreigon.type1 = 7;
  hydreigon.type2 = 17;
  hydreigon.atk = 345;
  hydreigon.def = 270;
  hydreigon.speed = 294;
  hydreigon.hp = 276;
  hydreigon.move1 = dark_pulse;
  hydreigon.move2 = dragon_pulse;
  hydreigon.move3 = heat_wave;
  hydreigon.move4 = draco_meteor;
  //LUCARIO
  pokemon lucario;
  strcpy (lucario.name, "LUCARIO");
  lucario.dex = 53;
  lucario.type1 = 15;
  lucario.type2 = 14;
  lucario.atk = 339;
  lucario.def = 210;
  lucario.speed = 270;
  lucario.hp = 210;
  lucario.move1 = close_combat;
  lucario.move2 = dragon_pulse;
  lucario.move3 = aura_sphere;
  lucario.move4 = extreme_speed;
  //MILOTIC
  pokemon milotic;
  strcpy (milotic.name, "MILOTIC");
  milotic.dex = 54;
  milotic.type1 = 3;
  milotic.type2 = 0;
  milotic.atk = 240;
  milotic.def = 306;
  milotic.speed = 243;
  milotic.hp = 285;
  milotic.move1 = ice_beam;
  milotic.move2 = hydro_cannon;
  milotic.move3 = dragon_tail;
  milotic.move4 = scald;

  ofstream f;
  ofstream g;
  f.open ("MOVES.DAT", ios::in|ios::binary);
  f.write ((char*)&frenzy_plant, sizeof (frenzy_plant));
  f.write ((char*)&magical_leaf, sizeof (magical_leaf));
  f.write ((char*)&double_edge, sizeof (double_edge));
  f.write ((char*)&sludge_bomb, sizeof (sludge_bomb));
  f.write ((char*)&blast_burn, sizeof (blast_burn));
  f.write ((char*)&fire_fang, sizeof (fire_fang));
  f.write ((char*)&air_slash, sizeof (air_slash));
  f.write ((char*)&dragon_claw, sizeof (dragon_claw));
  f.write ((char*)&eruption, sizeof (eruption));
  f.write ((char*)&lava_plume, sizeof (lava_plume));
  f.write ((char*)&earthquake, sizeof (earthquake));
  f.write ((char*)&shadow_claw, sizeof (shadow_claw));
  f.write ((char*)&ice_fang, sizeof (ice_fang));
  f.write ((char*)&aqua_tail, sizeof (aqua_tail));
  f.write ((char*)&superpower, sizeof (superpower));
  f.write ((char*)&hydro_cannon, sizeof (hydro_cannon));
  f.write ((char*)&leaf_blade, sizeof (leaf_blade));
  f.write ((char*)&leaf_storm, sizeof (leaf_storm));
  f.write ((char*)&night_slash, sizeof (night_slash));
  f.write ((char*)&dragon_pulse, sizeof (dragon_pulse));
  f.write ((char*)&muddy_water, sizeof (muddy_water));
  f.write ((char*)&hammer_arm, sizeof (hammer_arm));
  f.write ((char*)&wood_hammer, sizeof (wood_hammer));
  f.write ((char*)&crunch, sizeof (crunch));
  f.write ((char*)&flare_blitz, sizeof (flare_blitz));
  f.write ((char*)&close_combat, sizeof (close_combat));
  f.write ((char*)&dig, sizeof (dig));
  f.write ((char*)&flamethrower, sizeof (flamethrower));
  f.write ((char*)&ice_beam, sizeof (ice_beam));
  f.write ((char*)&retaliate, sizeof (retaliate));
  f.write ((char*)&fire_blast, sizeof (fire_blast));
  f.write ((char*)&extreme_speed, sizeof (extreme_speed));
  f.write ((char*)&surf, sizeof (surf));
  f.write ((char*)&body_slam, sizeof (body_slam));
  f.write ((char*)&blizzard, sizeof (blizzard));
  f.write ((char*)&stone_edge, sizeof (stone_edge));
  f.write ((char*)&brick_break, sizeof (brick_break));
  f.write ((char*)&fire_punch, sizeof (fire_punch));
  f.write ((char*)&sky_attack, sizeof (sky_attack));
  f.write ((char*)&extrasensory, sizeof (extrasensory));
  f.write ((char*)&megahorn, sizeof (megahorn));
  f.write ((char*)&aerial_ace, sizeof (aerial_ace));
  f.write ((char*)&focus_blast, sizeof (focus_blast));
  f.write ((char*)&overheat, sizeof (overheat));
  f.write ((char*)&thunder_punch, sizeof (thunder_punch));
  f.write ((char*)&psychic, sizeof (psychic));
  f.write ((char*)&brave_bird, sizeof (brave_bird));
  f.write ((char*)&take_down, sizeof (take_down));
  f.write ((char*)&bug_buzz, sizeof (bug_buzz));
  f.write ((char*)&fiery_dance, sizeof (fiery_dance));
  f.write ((char*)&hurricane, sizeof (hurricane));
  f.write ((char*)&icicle_crash, sizeof (icicle_crash));
  f.write ((char*)&iron_tail, sizeof (iron_tail));
  f.write ((char*)&poison_jab, sizeof (poison_jab));
  f.write ((char*)&thunderbolt, sizeof (thunderbolt));
  f.write ((char*)&flash_cannon, sizeof (flash_cannon));
  f.write ((char*)&thrash, sizeof (thrash));
  f.write ((char*)&rock_slide, sizeof (rock_slide));
  f.write ((char*)&giga_impact, sizeof (giga_impact));
  f.write ((char*)&slash, sizeof (slash));
  f.write ((char*)&xscissor, sizeof (xscissor));
  f.write ((char*)&iron_head, sizeof (iron_head));
  f.write ((char*)&foul_play, sizeof (foul_play));
  f.write ((char*)&power_gem, sizeof (power_gem));
  f.write ((char*)&hyper_beam, sizeof (hyper_beam));
  f.write ((char*)&discharge, sizeof (discharge));
  f.write ((char*)&volt_tackle, sizeof (volt_tackle));
  f.write ((char*)&signal_beam, sizeof (signal_beam));
  f.write ((char*)&thunder, sizeof (thunder));
  f.write ((char*)&shadow_ball, sizeof (shadow_ball));
  f.write ((char*)&vital_throw, sizeof (vital_throw));
  f.write ((char*)&night_shade, sizeof (night_shade));
  f.write ((char*)&outrage, sizeof (outrage));
  f.write ((char*)&night_daze, sizeof (night_daze));
  f.write ((char*)&dark_pulse, sizeof (dark_pulse));
  f.write ((char*)&zap_cannon, sizeof (zap_cannon));
  f.write ((char*)&tri_attack, sizeof (tri_attack));
  f.write ((char*)&energy_ball, sizeof (energy_ball));
  f.write ((char*)&sucker_punch, sizeof (sucker_punch));
  f.write ((char*)&petal_dance, sizeof (petal_dance));
  f.write ((char*)&zen_headbutt, sizeof (zen_headbutt));
  f.write ((char*)&meteor_mash, sizeof (meteor_mash));
  f.write ((char*)&steamroller, sizeof (steamroller));
  f.write ((char*)&rock_climb, sizeof (rock_climb));
  f.write ((char*)&heat_wave, sizeof (heat_wave));
  f.write ((char*)&future_sight, sizeof (future_sight));
  f.write ((char*)&draco_meteor, sizeof (draco_meteor));
  f.write ((char*)&aura_sphere, sizeof (aura_sphere));
  f.write ((char*)&uturn, sizeof (uturn));
  f.write ((char*)&scald, sizeof (scald));
  f.write ((char*)&dragon_tail, sizeof (dragon_tail));
  f.write ((char*)&sky_uppercut, sizeof (sky_uppercut));
  f.close ();
  g.open ("POKEMON.DAT", ios::in|ios::binary);
  g.write ((char*)&venusaur, sizeof (venusaur)); 
  g.write ((char*)&charizard, sizeof (charizard));
  g.write ((char*)&typhlosion, sizeof (typhlosion));
  g.write ((char*)&feraligatr, sizeof (feraligatr));
  g.write ((char*)&sceptile, sizeof (sceptile));
  g.write ((char*)&swampert, sizeof (swampert));
  g.write ((char*)&torterra, sizeof (torterra));
  g.write ((char*)&infernape, sizeof (infernape));
  g.write ((char*)&samurott, sizeof (samurott));
  g.write ((char*)&arcanine, sizeof (arcanine));
  g.write ((char*)&lapras, sizeof (lapras));
  g.write ((char*)&machamp, sizeof (machamp));
  g.write ((char*)&togekiss, sizeof (togekiss));
  g.write ((char*)&heracross, sizeof (heracross));
  g.write ((char*)&magmortar, sizeof (magmortar));
  g.write ((char*)&staraptor, sizeof (staraptor));
  g.write ((char*)&volcarona, sizeof (volcarona));
  g.write ((char*)&beartic, sizeof (beartic));
  g.write ((char*)&aggron, sizeof (aggron));
  g.write ((char*)&nidoking, sizeof (nidoking));
  g.write ((char*)&snorlax, sizeof (snorlax));
  g.write ((char*)&ursaring, sizeof (ursaring));
  g.write ((char*)&scizor, sizeof (scizor));
  g.write ((char*)&aerodactyl, sizeof (aerodactyl));
  g.write ((char*)&gliscor, sizeof (gliscor));
  g.write ((char*)&krookodile, sizeof (krookodile));
  g.write ((char*)&gigalith, sizeof (gigalith));
  g.write ((char*)&gyarados, sizeof (gyarados));
  g.write ((char*)&magnezone, sizeof (magnezone));
  g.write ((char*)&raichu, sizeof (raichu));
  g.write ((char*)&ampharos, sizeof (ampharos));
  g.write ((char*)&electivire, sizeof (electivire));
  g.write ((char*)&toxicroak, sizeof (toxicroak));
  g.write ((char*)&roserade, sizeof (roserade));
  g.write ((char*)&scolipede, sizeof (scolipede));
  g.write ((char*)&luxray, sizeof (luxray));
  g.write ((char*)&gengar, sizeof (gengar));
  g.write ((char*)&exeggutor, sizeof (exeggutor));
  g.write ((char*)&alakazam, sizeof (alakazam));
  g.write ((char*)&weavile, sizeof (weavile));
  g.write ((char*)&gothitelle, sizeof (gothitelle));
  g.write ((char*)&froslass, sizeof (froslass));
  g.write ((char*)&spiritomb, sizeof (spiritomb));
  g.write ((char*)&dusknoir, sizeof (dusknoir));
  g.write ((char*)&zoroark, sizeof (zoroark));
  g.write ((char*)&dragonite, sizeof (dragonite));
  g.write ((char*)&tyranitar, sizeof (tyranitar));
  g.write ((char*)&haxorus, sizeof (haxorus));
  g.write ((char*)&gardevoir, sizeof (gardevoir));
  g.write ((char*)&metagross, sizeof (metagross));
  g.write ((char*)&garchomp, sizeof (garchomp));
  g.write ((char*)&hydreigon, sizeof (hydreigon));
  g.write ((char*)&lucario, sizeof (lucario));
  g.write ((char*)&milotic, sizeof (milotic));

  cout << "Writing of data successful.\n";
  getch();
  }
