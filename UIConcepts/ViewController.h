//
//  ViewController.h
//  UIConcepts
//
//  Created by Alberto Scampini on 05/11/2015.
//  Copyright © 2015 Alberto Scampini. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LTParallaxMenu.h"

@interface ViewController : UIViewController

@property (nonatomic, weak) IBOutlet LTParallaxMenu *controlsView;

@property (nonatomic, weak) IBOutlet UISlider *slider;

@end

