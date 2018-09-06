//
//  SGVideoDecoder.h
//  SGPlayer iOS
//
//  Created by Single on 2018/8/16.
//  Copyright © 2018 single. All rights reserved.
//

#import "SGAsyncDecoder.h"
#import "SGFFDefines.h"

@interface SGVideoDecoder : SGAsyncDecoder

@property (nonatomic, copy) NSDictionary * options;
@property (nonatomic, assign) BOOL threadsAuto;
@property (nonatomic, assign) BOOL refcountedFrames;
@property (nonatomic, assign) BOOL hardwareDecodeH264;
@property (nonatomic, assign) BOOL hardwareDecodeH265;
@property (nonatomic, copy) BOOL (^discardPacketFilter)(CMSampleTimingInfo timingInfo, int index, BOOL key);
@property (nonatomic, copy) BOOL (^discardFrameFilter)(CMSampleTimingInfo timingInfo, int index);
@property (nonatomic, assign) SGAVPixelFormat preferredPixelFormat;

@end
