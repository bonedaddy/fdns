#include "fdns.h"

static char *sni_list[] = {
	"adayinthelifeonthefarm.blogspot.com",
	"allshecooks.com",
	"amindfullmom.com",
	"anitalianinmykitchen.com",
	"aspoonfulofthyme.blogspot.com",
	"bad-girls-kitchen.blogspot.com",
	"bakingbites.com",
	"bitterbaker.com",
	"bizzybakesb.blogspot.com",
	"bunnyswarmoven.net",
	"cheesecurdinparadise.blogspot.com",
	"dishaboutit.com",
	"easilygoodeats.blogspot.com",
	"funnyloveblog.com",
	"gingerbakes.wordpress.com",
	"jennsrandomscraps.blogspot.ca",
	"joandsue.blogspot.ca",
	"joinuspullupachair.blogspot.com",
	"livingthegourmet.com",
	"lovelylittlekitchen.com",
	"marthasvillage.org",
	"mimis-kitchen.blogspot.com",
	"morethanburnttoast.blogspot.ca",
	"nutritionfor.us",
	"ohmysugarhigh.com",
	"redstaryeast.com",
	"seasonalandholidayrecipeexchange.weebly.com",
	"spaceshipsandlaserbeams.com",
	"sweetsbeginning.blogspot.com",
	"swirlsandspice.com",
	"tascadaelvira.blogspot.com",
	"thecharmofhome.blogspot.com",
	"thefreshmancook.blogspot.com",
	"thepioneerwoman.com",
	"therebelchick.com",
	"thissillygirlslife.com",
	"vegukate.com",
	"whoneedsacape.com",
	"allrecipes.com",
	"averiecooks.com",
	"bakeorbreak.com",
	"browneyedbaker.com",
	"cookingchanneltv.com",
	"cookingonthefrontburners.com",
	"cooks.com",
	"couponsandfreebiesmom.com",
	"cozycountryliving.com",
	"craftsalamode.com",
	"deliciousobsessions.com",
	"epicurious.com",
	"girlversusdough.com",
	"herbwisdom.com",
	"italianfoodforever.com",
	"joepastry.com",
	"jugglingactmama.com",
	"kingarthurflour.com",
	"lemonsandlaughs.com",
	"littlemisscelebration.com",
	"makeminelemon.com",
	"martaskitchen.my",
	"marthas-kitchen.org",
	"plaisiretgourmandisechezsophie.com",
	"quickneasyrecipes.net",
	"recipesforourdailybread.com",
	"roundmenu.com",
	"seductioninthekitchen.com",
	"simplegourmetcook.com",
	"sixsistersstuff.com",
	"stacymakescents.com",
	"tasteofhome.com",
	"thebakingchocolatess.com",
	"theharriedcook.com",
	"theshadyporch.com",
	"theslowroasteditalian.com",
	"theyumlist.net",
	"undejeunerdesoleil.com",
	"upstateramblings.com",
	"wholeyum.com",
	"wiveswithknives.net",
	"yummly.com",
	"yesterfood.blogspot.com",
	"teddyspaghetti.com"
};


const char *sni_cloak(void) {
	int size = sizeof(sni_list) / sizeof(char *);
	int index = rand() % size;
	return sni_list[index];
}



