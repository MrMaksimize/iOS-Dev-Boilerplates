//
//  EXCustomCell.h
//  ExampleCustomCell
//
//  Created by Maksim Pecherskiy on 11/13/12.
//  Copyright (c) 2012 MrMaksimize. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 Notes:
  I created this file as an objective c subclass of UITableViewCell;
  Then I added the .xib file separately.
  In the .xip - file owner is NSObject, and custom class for TableViewCell is this one.
  Right click on cell and drag to the items.
 */
@interface EXCustomCell : UITableViewCell {
  // Instance variables - those that back @properties and others, used by insides of a class go here.
  // Synthesizing automatically creates instance variables.
}
@property (nonatomic, strong) IBOutlet UILabel *cellItemLabel;
@property (nonatomic, strong) IBOutlet UIImageView *cellItemImageView;
@end
