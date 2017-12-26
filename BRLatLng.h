//
//  BRLatLng.h
//  BlueRose
//
//  Created by jhon.sun on 16/2/26.
//  Copyright © 2016年 jhon.sun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BRLatLng : NSObject {
    double m_LoDeg,m_LoMin,m_LoSec; // longtitude 经度
    double m_LaDeg,m_LaMin,m_LaSec; // latitude 纬度
    double m_Longitude,m_Latitude; // 经纬度
    double m_RadLo,m_RadLa; //
    double Ec;
    double Ed;
}
- (id)init:(double)longitude latitude:(double)latitude;

@property (assign, nonatomic) double m_LoDeg; //经度度
@property (assign, nonatomic) double m_LoMin; //经度分
@property (assign, nonatomic) double m_LoSec; //经度秒
@property (assign, nonatomic) double m_LaDeg; //纬度度
@property (assign, nonatomic) double m_LaMin; //纬度分
@property (assign, nonatomic) double m_LaSec; //纬度秒
@property (assign, nonatomic) double m_Longitude; //经度
@property (assign, nonatomic) double m_Latitude; //纬度
@property (assign, nonatomic) double m_RadLo;
@property (assign, nonatomic) double m_RadLa;
@property (assign, nonatomic) double Ec;
@property (assign, nonatomic) double Ed;

@end
