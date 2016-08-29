//
//  ViewController.m
//  GIFPlayer
//
//  Created by Ali on 16/8/29.
//  Copyright © 2016年 Ali. All rights reserved.
//

#import "ViewController.h"
#import "CADisplayLineImageView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    [CADisplayLineImageView disPlayGIFImageInView:self.view withFrame:CGRectMake(0, 0, self.view.bounds.size.width, self.view.bounds.size.height) andGIFImageName:@"MyGIF.gif"];

    
    
}



@end
