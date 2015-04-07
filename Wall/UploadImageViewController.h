//
//  UploadImageViewController.h
//  Wall
//
//  Created by jiamao zheng on 4/6/15.
//  Copyright (c) 2015 Jiamao Zheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <ParseUI/ParseUI.h>

@interface UploadImageViewController : UIViewController<UIPickerViewDelegate>


@property (nonatomic, strong) IBOutlet UIImageView *imgToUpload;
@property (nonatomic, strong) IBOutlet UITextField *commentTextField;
@property (nonatomic, strong) NSString *username;

-(IBAction)selectPicturePressed:(id)sender;
-(IBAction)sendPressed:(id)sender;

@end
