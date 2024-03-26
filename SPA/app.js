var app = angular.module('myApp', ['ngRoute']);

app.config(function($routeProvider) {
  $routeProvider

  .when('/', {
    templateUrl :'/home.html',
    controller  :'Homectrl'
  })

  .when('/blog', {
    templateUrl :'/blog.html',
    controller  :'Blogctrl'
  })

  .when('/about', {
    templateUrl :'/about.html',
    controller  :'Aboutctrl'
  })
  .when('/login/:userId', {
    templateUrl :'/login.html',
    controller  :'Loginctrl'
  })

  .otherwise({redirectTo: '/'});
});

  app.controller('HomeController', function($scope) {
    $scope.message= 'Hello from Homectrl';
  });
  
  app.controller('BlogController', function($scope) {
    $scope.message= 'Hello from Blogctrl';
  });
  
  app.controller('AboutController', function($scope) {
    $scope.message= 'Hello from Aboutctrl';
  });
  
  app.controller('LoginController', function($scope,$routeParams) {
    $scope.message= 'Hello from Loginctrl';
    $scope.uid = $routeParams.userId;
  });
