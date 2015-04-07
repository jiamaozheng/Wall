//
//  WallPicturesViewController.h
//  Wall
//
//  Created by jiamao zheng on 4/6/15.
//  Copyright (c) 2015 Jiamao Zheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <ParseUI/ParseUI.h>

@interface WallPicturesViewController : UIViewController

@property (nonatomic, strong) IBOutlet UIScrollView *wallScroll;
@property (nonatomic, retain) NSArray *wallObjectsArray;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;


-(void)getWallImages;
-(void)loadWallViews;
-(void)showErrorView:errorString;

-(IBAction)logoutPressed:(id)sender;
@end
