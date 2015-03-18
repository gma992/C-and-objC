//
//  TestGameViewController.m
//  test game 18032015
//
//  Created by Gabriel on 18/03/15.
//  Copyright (c) 2015 gabrielmaldonado. All rights reserved.
//

#import "TestGameViewController.h"

@implementation TestGameViewController

-(void)viewDidLoad{
    [super viewDidLoad];
    
    // Configure the view.
    SKView * skView = (SKView *)self.view;
    skView.showsFPS = YES;
    skView.showsNodeCount = YES;
    
    // Create and configure the scene.
    SKScene * scene = [MyScene sceneWithSize:skView.bounds.size];
    scene.scaleMode = SKSceneScaleModeAspectFill;
    
    // Present the scene.
    [skView presentScene:scene];
}

@end
