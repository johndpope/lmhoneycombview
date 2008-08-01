//
//  LMHexCell.h
//  Elysium
//
//  Created by Matt Mower on 29/07/2008.
//  Copyright 2008 LucidMac Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import <Cocoa/Cocoa.h>

@class LMHoneycombView;

@interface LMHexCell : NSObject {
  NSBezierPath        *path;
  int                 col;
  int                 row;
  id                  data;
  BOOL                selected;
}

- (id)initWithColumn:(int)col row:(int)row;
- (id)initWithColumn:(int)col row:(int)row data:(id)data;

- (NSBezierPath *)path;
- (void)setPath:(NSBezierPath *)path;

- (id)data;
- (void)setData:(id)data;

- (int)column;
- (int)row;

- (BOOL)selected;
- (void)setSelected:(BOOL)selected;

- (void)drawOnHoneycombView:(LMHoneycombView *)view;

@end
