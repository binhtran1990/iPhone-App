//
//  CustomTableViewCell.h
//  Poker iPhone App
//
//  Created by Christian Klumpp on 13.05.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomTableViewCell : UITableViewCell

@property (nonatomic, retain) IBOutlet UIImageView* userImageImageView;

- (IBAction) loadPicture:(id)sender;
- (IBAction) takePicture:(id)sender;

@end
