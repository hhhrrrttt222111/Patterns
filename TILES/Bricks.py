#Program  that makes a pattern reminiscent of brick walls. 
#!/usr/bin/env python3

def plan_wall_pattern(wishes):
    """Takes input from user of how to design wall"""
    blueprint= wishes
    print("You are welcome to print any size of this pattern you'd like! Just be mindful to your computer!")
    answer= input("How do you imagine a (1) brick to look like? (just press 'Enter' if you don't care for custom-mades\n")
    if answer!= "":
        blueprint["brick"]=input()
    blueprint["length"]= input("How many of these should be in a row? (enter a number for length)")
    blueprint["nr_layers"]= input("How many layers should there be? (enter a number for height)")
    blueprint["offset_switch"]=(input("Would you like it to have an offset/alternating effect? (y/n)")).lower()

    print("I see...")
    print(blueprint)
    return blueprint

def plan_layer(blueprint):
    """Creates a hypothetical layer to add to blueprint"""
    brick_nr= 0
    layer=""
    while brick_nr<(int((blueprint["length"]))):
        layer= layer+blueprint["brick"]
        brick_nr+= 1
    print("Aha!...\n"+layer+"!\n")
    blueprint["layer"]= layer ## tror kanske är för de inte skapar layer om ointressserad men bör ej va problem dåd e går här
    return (blueprint)
    
def create_brick_wall(blueprint):
    """Prints the wall according to blueprint"""
    nr=0
    while nr<(int(blueprint["nr_layers"])): 
        if nr%2== 0 and blueprint["offset_switch"]=="y": # make alternate
            print(blueprint["offset"]+blueprint["layer"])
        else: # make regular
            print(blueprint["layer"])
        nr+= 1
    return ("There!")

def main():
    """Welcomes user and then designs and create wall according to wishes"""
    blue_print= {
        "brick":"|____|", # The repeated text-bit
        "length":0, # int number of bricks in a row
        "nr_layers":0,# int height/number of rows in the pattern
        "offset_switch":'y', # preference of text spaces to make classic effect of alternating rows, default on/y
        "offset":"  " # define text spaces to make classic effect of alternating rows
    }
    wishes= blue_print
    print("Hey you!")
    answer= input("Wanna do something? (y/n)")
    if answer.lower()=="y":
        wishes= plan_wall_pattern(wishes)
    print("Hm...")
    blue_print= wishes
    plan_layer(wishes)
    create_brick_wall(blue_print)
    print(":)")
main()


    