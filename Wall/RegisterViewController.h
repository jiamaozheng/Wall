//
//  RegisterViewController.h
//  Wall
//
//  Created by jiamao zheng on 4/6/15.
//  Copyright (c) 2015 Jiamao Zheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <ParseUI/ParseUI.h>

@interface RegisterViewController : UIViewController
@property (nonatomic, strong) IBOutlet UITextField *userRegisterTextField;
@property (nonatomic, strong) IBOutlet UITextField *passwordRegisterTextField;


-(IBAction)signUpUserPressed:(id)sender;
@end
